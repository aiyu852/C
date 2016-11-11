#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{

	srand(time(0));
	int a=rand();
	int b=0 ;
	int count=0;
	printf("我已想好了一个位于100内的数，您可以猜了！！请输入数字后按下回车\n ");
	a=a%100;
	do {
		scanf("%d",&b);
		count++;
		if(b>a)
		{
			printf("您猜的数字大了！\n"); 
		} else if(b<a)
		{
		printf("您猜的数字小了！\n");	
		}
	}	
	while(b!=a);
	printf("太棒了！你用了%d次就猜出来这个数字了！\n您可以关闭程序了",count) ;
	system("pause"); 

}	
//	用了一个system ("pause");就解决了原来完成程序后控制台秒关的状况	 	
		  
		
	
	
	 
	   


