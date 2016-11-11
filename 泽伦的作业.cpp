//#include <>stdio.h>
//int main(void){
//    char ch;
//    int letter=0,other=0,i=0;
//    while(1){
//        if((ch=getchar())>='0' && ch<='9')
//            i++;
//        else if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
//            letter++;
//        else if(ch=='#')
//            break;
//        else other++;
//    }
//    printf("%d ",i);
//    printf("%d ",letter);
//    printf("%d",other);
//    return 0;
//}


#include<stdio.h>
int main()
{
	int a[10],i=0,p=0,x;
	for(p=0;p<9;p++)
		scanf("%d ",&a[p]);
	for(i=0;i<10;i++)
		{
			if(a[i]>a[i+1])
				{
					x=a[i];
					a[i]=a[i+1];
					a[i+1]=x;
				}
			continue;
		}
	for(p=0;p<10;p++)
		printf("%d ",a[p]);
}
