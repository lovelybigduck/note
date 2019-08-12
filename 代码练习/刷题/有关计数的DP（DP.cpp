/*有关计数的DP*/
/*划分数*/
/*有n个无区别的物品，把他们划分成不超过m组(可以一组，两组。。。m组），求划分方法数模M的余数*/
//1<=m<=n<=1000		2<=M<=10000
//m=n 被称作n的化分数
//定义:dp[i][j]=j的i划分的总数
//递推关系：dp[i][j]=dp[i-1][j-k]的所有和，k取值0-j，但是有重复会被当做不同的划分，错误 
//为了不重复计数 
//如果存在一个划分数为ai=0,那么就对应了n的m-1次划分
//如果每个i都有ai>0,则{ai-1}就对应了n-m的m划分
//如果存在ai=0，则对应了n的m-1划分 
//所以：dp[i][j]=dp[i][j-i]+dp[i-1][j];
int n,m;
int dp[MAX_M+1][MAX_N+1];
void solve(){
	dp[0][0]=1;
	for(int i=1;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(j-i>=0){
				dp[i][j]=(dp[i][j-i]+dp[i-1][j])%M;
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[m][n];
} 

/*多重组合数*/
//n种物品，第i中有ai个，不同种类物品可以互相区分但相同种类的无法区分，取出m个的多少种取法？ 
//定义：dp[i+1][j]从前i种物品中取出j个的组合总数
//递推关系：dp[i+1][j]=dp[i][j-k]所有k取值的和，k：0-min(j,d[i]) 
//改进： dp[i][j-k]所有k取值=dp[i][j-1-k]的所有k取值+dp[i][j]-dp[i][j-1-ai] 
//所以：dp[i+1][j]=dp[i+1][j-1]+d[i][j]-dp[i][j-1-ai] 
