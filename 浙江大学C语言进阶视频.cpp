//#include <stdio.h>
//#include<stdlib.h>
//int main (void)
//{
//	int number;
//	int *a;
//	int i=0;
//	printf(" ‰»Î ˝¡ø£∫\n");
//	scanf("%d",&number);
////	int a[number];
//	 a =(int*) malloc(number*sizeof(int));
//	for(;i<number;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=number-1;i>=0;i--)
//	{
//		printf("%d\n",a[i]);
//	}
//	free(a); 
//	return 0;
//} 



#include <stdio.h>
#include<stdlib.h>
int main ()
{
	void *p;
	int i=10;
	while(i>0)
	{
		p=malloc(1000*1024*1024);
	}
	return 0;
}
