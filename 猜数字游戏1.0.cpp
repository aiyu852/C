#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{

	srand(time(0));
	int a=rand();
	int b=0 ;
	int count=0;
	printf("���������һ��λ��100�ڵ����������Բ��ˣ������������ֺ��»س�\n ");
	a=a%100;
	do {
		scanf("%d",&b);
		count++;
		if(b>a)
		{
			printf("���µ����ִ��ˣ�\n"); 
		} else if(b<a)
		{
		printf("���µ�����С�ˣ�\n");	
		}
	}	
	while(b!=a);
	printf("̫���ˣ�������%d�ξͲ³�����������ˣ�\n�����Թرճ�����",count) ;
	system("pause"); 

}	
//	����һ��system ("pause");�ͽ����ԭ����ɳ�������̨��ص�״��	 	
		  
		
	
	
	 
	   


