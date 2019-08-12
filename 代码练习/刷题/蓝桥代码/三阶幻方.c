/*小明最近在教邻居家的小朋友小学奥数，而最近正好讲述到了三阶幻方这个部分。
三阶幻方指的是将1~9不重复的填入一个3*3的矩阵当中，使得每一行、每一列和每一条对角线的和都是相同的。	
三阶幻方又被称作九宫格，在小学奥数里有一句非常有名的口诀：
“二四为肩，六八为足，左三右七，戴九履一，五居其中”，
通过这样的一句口诀就能够非常完美的构造出一个九宫格来。	
4 9 2
3 5 7
8 1 6
有意思的是，所有的三阶幻方，都可以通过这样一个九宫格进行若干镜像和旋转操作之后得到。
现在小明准备将一个三阶幻方（不一定是上图中的那个）中的一些数抹掉，交给邻居家的小朋友来进行还原，并且希望她能够判断出究竟是不是只有一个解。
	
而你呢，也被小明交付了同样的任务，但是不同的是，你需要写一个程序~

输入格式：
输入仅包含单组测试数据。
每组测试数据为一个3*3的矩阵，其中为0的部分表示被小明抹去的部分。
对于100%的数据，满足给出的矩阵至少能还原出一组可行的三阶幻方。

输出格式：
如果仅能还原出一组可行的三阶幻方，则将其输出，否则输出“Too Many”（不包含引号）。

样例输入
0 7 2
0 5 0
0 3 0

样例输出
6 7 2
1 5 9
8 3 4*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char s[8][9]={
	    "672159834",
		"816357492",
		"438951276",
		"294753618",
		"276951438",
		"618753294",
		"834159672",
		"492357816" 
	}; 
	char s2[9];
	//for(i=0;i<9;i++)
	  //  scanf("%d",&s2[i]);
	for(i=0;i<8;i++){
		for(j=0;j<9;j++)
		//if(test(s[i],s2)==1)
		  //  puts("成功匹配到了！");
		  //puts(s[i]);
		  //printf("\n");
		  //printf("%d",test(s[i],s2));
		  printf("%c",s[i][j]);
		  printf("\n");
	}
	/*for(i=0;i<9;i++){
		printf("%d",s2[i]);
	}*/
	return 0;
}
int test(char s1[9],char s2[9]){
	int i;
	for(i=0;i<9;i++){
		//if(s1[i]==s2[i]||s2[i]=='0') continue;
		//if(s2[i]!='0'&&s2[i]!=s1[i]) return 0;
		if(s1[i]!=s2[i]) return 0;
		//if(s2[i]=='0') continue;
		//return 0;
	}
	return 1;
}
/*int main(){
	char a[]={"123456789"};
	char b[]={"123456789"};
	int i;
	for(i=0;i<9;i++)
	if(a[i]!=b[i]) puts("不一样");
	puts("一样"); 
	return 0;
}*/
