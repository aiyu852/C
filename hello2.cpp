#include <stdio.h>
#include <iostream>
using namespace std;

 
 int main ()
 {
// 	int m=0;
//	int n;
//	scanf("%d %d",&m,&n);
//	for(int i=1;i<=n&i<=m;i++){
//		if(m%i=0){      //这里的错误是由于对==的理解不够啊！！两个等号才代表相等 
//			printf("%d\n",i);
//			
//		}
//	} 






//  int n,m;
//  int total =0;
//  cin>>n>>m;
//  for (int i=1;i<n;++i)
//  {
//  	for(int j=i+1;j<=n;++j)
//  		if(m%(i+j)==0)
//  		{
//  			++total;
//  			cout<<i<<","<<j<<endl; 
//		  }
//  }
//  cout<<total;
//return 0;
	/*以上的程序是把 <n的所有两个和为m的因子的数组和对数输出的算法*/
	
	
	
	
//	int i,n,m;
//	printf("%d",scanf("%d%d%d",&n,&m,&i));
/*这里说明了scanf是有返回值的
表示成功输入的数字个数
但是只要第一个就失败了第二个也不做了返回的是0*/ 
	 
	
	
//	int n,m;
//    while (scanf("%d%d",&n,&m)!=EOF)
//    	
//	
//	printf("%d",m+n); 

/*最后可以按一下ctrl+Z然后回车就可以结束程序
   其中EOF是-1的意思  是说明输入数据已经结束*/ 


//cin也是有返回值的 成功读入所有的变量时为true 否则为false
    
  //freopen("c:\\tmp\\tese.txt","r",stdin)
  //这样的语句可以定向的输入数据不需要再去手动输入了
  
  
  //这里有一个乘方运算例题
//  int a,s,answer=1;
//  scanf("%d %d",&a,&s);
// for(int i=0;i<s;i++)
//  answer*=a;
//  printf("%d\t",answer) ;

  //斐波那契数列的例题
//  int a1=1,a2=1,k;
//  scanf("%d",&k);
//  if(k==1||k==2)
//  printf("1\n");
//  else {
//  		int sum;
//		for(int i=1;i<=k-2;i++)
//		{
//			sum=a1+a2;
//			a1=a2;
//			a2=sum;
//		 }
//		 printf("%d\n",sum); 
//  }
   
   
  		//求不大于n的阶乘和
		//这里先讨论如何算一个数的阶乘如下所示：
		
		
	
		
//		int ans=1 , n;
//		scanf("%d",&n);
//		int i=1;
//		while(i<=n)
//		{
//			ans*=i;
//			i++;
//			
//		}
//		printf("%d",ans);
//		
//		return ans ;
//		 
  
//		int n;
//		cin>>n;
//		int sum=0;
//		for (int i=1;i<=n;++i)
//		{
//			int factorial=1;
//			for(int j=1;j<=i;++j)
//			{
//				factorial *=j;
//			}
//			sum+=factorial;
//		}
//		printf("%d",sum);	 
 
//这样就完成了对前n个数的城防和的计算了
/*这里还要注意一个重要的问题：
            不能再for语句后面直接带上;不然容易导致出现Error*/
			
			
	//其实我们知道每后一个数的阶乘为上一个数的阶乘再乘以这个数就ok了
	//所以这个程序还可以这样写：
//	int sum=0,n,factoral;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++)
//	{
//		factoral*=i;
//		sum+=factoral;
//			
//	}		
//	printf("%d",sum );
//	这样就成功的的将程序简化了
			
	//例题：
	//输入N求不大于N的全部质数
//	int n;
//	scanf("%d",&n);
//	if(n>=1)
//	printf("1\t");
//	for(int i=2;i<=n;i++)
//	{
//		int j;
//		for (j=2;j<i;j++)
//		{
//			if(i%j==0)
//			break;
//		}
//		if(j==i)
//		printf("%d\t",i);
//	}	 
	












		return 1;
  } 
  
  
  
