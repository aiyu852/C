//这是让a,b,c从小到大排序的一个程序 
//#include <stdio.h>
//void swap(int *,int *);
//main()
//{
//	int a,b,c;
//	int *p1,*p2,*p3;
//	printf("请输入3个数，本程序将从小到大排列：");
//	scanf("%d %d %d",&a,&b,&c);
//	p1=&a;
//	p2=&b;
//	p3=&c;
//	if(a>b)
//		swap(p1,p2);
//	if(a>c)
//		swap(p1,p3);
//	if(b>c)
//		swap(p2,p3);
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}
//void swap(int *x,int *y)
//{
//	int p;
//	p=*x;
//	*x=*y;
//	*y=p;
//} 


//C++  输出abc中的最大值 
//#include<stdio.h> 
//int main()
//{
//	long long int a=0,b=0,c=0,t=0;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>=b)
//	{
//		if(a>=c)
//			t=a;
//		else
//			t=c;
//	}	
//	else
//	{
//		if(b>=c)
//			t=b;
//		else
//			t=c;
//	}
//	printf("%d",t);
//}

//谭浩强-3.7输出加密字符串 
//#include <stdio.h>
//int main()
//{	
//	char a[100];
//	scanf("%s",a);
//	for(int i=0;a[i]!=0;i++)
//	{
//		a[i]+=4;
//		printf("%c",a[i]);
//	}
//	
//} 



//谭浩强   计算题 
//#include <stdio.h>
//#define PI 3.14
//int main ()
//{
//	float r,h;
//	float C1,Sa,Sb,Va,Vb;
//	scanf("%f %f",&r,&h);
//	C1=2*PI*r;
//	Sa=PI*r*r;
//	Sb=4*PI*r*r;
//	Va=(4.0/3.0)*PI*r*r*r;
//	Vb=Sa*h;
//	printf("C1=%.2f\nSa=%.2f\nSb=%.2f\nVa=%.2f\nVb=%.2f",C1,Sa,Sb,Va,Vb);
//} 



//谭浩强-4.9 摄氏度转换 
//#include <stdio.h>
//int main()
//{
//	float f,c;
//	scanf("%f",&f);
//	printf("c=%.2f",(5.0)*(f-32.0)/(9.0));
//	
//} 

 
//谭浩强  输出分段函数 
//#include <stdio.h>
//int main()
//{
//	int x=0,y=0;
//	scanf("%d",&x);
//	if(x<1)
//		y=x;
//	else if(x>=10)
//		y=3*x-11;
//	else
//		y=2*x-1;
//	printf("%d",y);
//} 


//成绩分级输出 
//#include <stdio.h>
//int main ()
//{
//	int a=0;
//	char t='a';
//	scanf("%d",&a);
//	if(a>=90)
//		t='A';
//	else if(a>=80)
//		t='B';
//	else if(a>=70)
//		t='C';
//	else if(a>=60)
//		t='D';
//	else 
//		t='E';
//	printf("%c",t); 
//} 


//谭浩强-5.7 逆向输出一段数字
//#include <stdio.h>
//int main ()
//{
//	long int a;
//	scanf("%d",&a);
//	int r=1,w,t,e,q=10;
//	w=a;
//	t=w;
//	for(int i=1;i<=5;i++)
//	{
//		a=a/q;
//		if(a!=0)
//			r++;
//		else
//			break;
//	}
//	printf("%d\n",r);
//	for(long long int i=10000;i>=1;i=i/10)
//	{
//		e=w/i;
//		w=w%i;
//		if(e!=0)
//			printf("%d ",e);
//		else continue;
//	}
//	printf("\n");
//	for(int i=1;i<=r;i++)
//	{
//		e=t%10;
//		t=t/10;
//		printf("%d",e);
//	}
//}


//计算利润的问题 
//#include <stdio.h>
//int main()
//{
//	long  int a,b,c;
//	scanf("%d",&a);
//	if(a<=100000)
//	b=a*0.1;
//	else if(a<200000)
//	b=a*0.05;
//	else if(a>=1000000)
//	b=(a-1000000)*0.01+1000000*0.1;
//	printf("%d",b);
//} 

//输出最大公约数和最小公倍数 
//#include <stdio.h>
//int main ()
//{
//	long int a,b;
//	scanf("%d %d",&a,&b);
//	if(b>a)
//		b=b+a-(a=b);
//	for(;c==0;)
//	{
//		if(b>a)
//			b=b+a-(a=b);
//		a=a/b;
//		
//	}
//	printf("%d",a);
//	 
//}

//平均控球率
//#include <stdio.h>
//int main ()
//{
//	int b[100],i=0;
//	double a;
//	while((scanf("%d%%",&b[i]))!=EOF)
//	{
//		a+=(double)b[i]/100.0;
//		i++;
//	}	
//	printf("%0.4f",(double)(a/i));
//	return 0;
//} 




//permutation of five
//#include <stdio.h>
//int main ()
//{
//	long int Num=0,i=0;
//	int sum[10000];
//	scanf("%d",&Num);
//	while(i<Num)
//	{
//		int a,b,c;
//		scanf("%d %d",&a,&b);
//		c=a-b;
//		if(c<0)
//			c=-c;
//		sum[i]=c;
//		i++;
//	}
//	for(int p=0;p<Num;p++)
//		printf("%d\n",sum[p]);
//	return 0;
//}

//输入一个字符串，只包括小写英文字母，将该字符串打乱，按照字典顺序输出
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char in[100];
//	unsigned short count[256]={0};
//	int len ,i ,j;
//	scanf("%s",in);
//	len=strlen(in);
//	for (i=0;i<len;i++)
//		count[in[i]]++;
//	for(i=0;i<256;i++)
//	{
//		if(count[i]>0)
//		{
//			for(j=0;j<count[i];j++)
//				putchar(i);
//		}
//	}
//}




//把12345四个数排序输出

//#include <stdio.h>
//int main()
//{
//	int a=0,b=0,c=0,d=0,e=0;
//	for(a=1;a<=5;a++)
//	{
//		for(b=1;b<=5;b++)
//		{
//			if(b==a)
//				continue;
//			else
//				{
//					for(c=1;c<=5;c++)
//					{
//						if(c==a||c==b)
//							continue;
//						else
//							{
//								for(d=1;d<=5;d++)
//								{
//									if(d==a||d==b||d==c)
//										continue;
//									else
//										{
//											for(e=1;e<=5;e++)
//											{
//												if(e==a||e==b||e==c||e==d)
//													continue;
//												else
//													printf("%d%d%d%d%d\n",a,b,c,d,e);
//											}
//										}
//							}	}
//					}
//				}
//		}
//	}
//} 



//数字求和


#include <stdio.h>


int main ()
{
	long int a=0;
	int sum=0;
	while((scanf("%d",&a))!=EOF)
	{
		for(	)
		
	}
}

