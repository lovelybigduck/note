//征募士兵,女N，男M，每一个需要花费10000
//征募每个人的费用：10000-已经征募人中和自己亲密度（1-9999）最大的
//要求给出征募顺序，所需费用最少 
//这个图无圈，所以是森林
//问题转化：求解无向图中最大权森林问题
//最大权森林问题可以把所有边取反转化为最小生成树算法
int N,M,R;//女，男，给出的关系数
int x[MAX_R],y[MAX_R],d[MAX_R];//第几号男兵和第几号女兵亲密度关系d
void solve(){
	V=N+M;
	E=R;
	for(int i=0;i<R;i++){
		es[i]=(edge){
			x[i],N+y[i],-d[i]
		}
	}
	cout<<10000*(N+M)+kruskal();
} 
 
