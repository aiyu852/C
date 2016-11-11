#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	for(int i=0;i<15;i++)
	{
	int a=rand()%100; 
	printf("%d\t",a);
	}
}
//srand()放的位置不同所造成的影响是不同的！!!!!
 
