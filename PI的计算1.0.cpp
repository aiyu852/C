#include <stdio.h>
#include <iostream>

int main(){
	 printf("该算法为PI=4*（1-1/3+1/5-1/7++1/n次数越多越精准\n请您输入计算次数"); 
	int a;
	int i;
	double sum=0.0;
	double pi=0.0;
	int count=1 ;
	scanf("%d",&a);
	for (i=1;i<=a;i=i+2){
		if(count%2==1){
			sum+=1.0/i;
			
		} else sum-=1.0/i;
		count++;
		
		
	}
	pi=sum*4;
		
	printf("*****************\nPI=%.15f\n",pi);
	system ("pause");
	 
	return 0;
	
	
	
	
}

