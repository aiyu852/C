#include <stdio.h>
#include <iostream>

int main(){
	 printf("���㷨ΪPI=4*��1-1/3+1/5-1/7++1/n����Խ��Խ��׼\n��������������"); 
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

