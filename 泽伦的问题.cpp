#include<stdio.h>
int main()
{
	 int m,n,i,a,y,sum;
	 
	  scanf("%d %d",&m,&n);
	    for(i=m;i<=n;i++)
	    { a=i;
	       do
		   { 
		     y=a%10;
		      a=a/10;
		      sum+=y*y*y;
			  
		   }while(a!=0);
		    if(sum==i) 
			  printf("%d",i);
		   sum=0;
	}
		 return 0;
} 
