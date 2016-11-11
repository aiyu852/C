#include<stdio.h>
int main ()
{
	int a[100],b=0,c=0,sum=0;
	while((scanf("%d",&c)!=EOF))
	{
		sum=0;
		for(int i=0;i<c;i++)
		{
			scanf(" %d",&a[i]);
			sum+=a[i];
			if(i==(c-1))printf("%d\n",sum);
		}
	}
}
