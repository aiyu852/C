//#include <stdio.h>
//#include <limits.h>			//����˵����CHAR_MAX��CHAR_MIN 
//int main ()
//{	
//	printf("Variables of type char store values from 0 to %u \n",UCHAR_MAX); 
//} 
//   ������һ������ĳ�� �������͵���ֵ���Ʒ�Χ 
 

//#include <ctype.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//int main ()
//{
//	int a;
//	a=sizeof(long double);
//	printf("%d",a); 
	//��˵���˸��ֱ���������ռ�ı����� 
	
	
	//2.11.2  ��������ĺ���
//	��׼�� ctype.h  ��toupper() �� tolower() ���԰��ַ�ת��Ϊ��д��Сд 
//	����
//	char a='A';
//	printf("%c",tolower(a)); 
	

	
	
	//2.11.4 �洢����ֵ�ı���
//	_Bool f=12;
//	if(f==true)
//	{
//		printf("Hello");
//	} 
//	else{
//		printf("Bye-bye");
//	}
//  ��������Ҫ�õ�ͷ�ļ� <stdbool.h>
	
	
	//2.12   ��ֵ������op=��ʽ
	
//	number*=3
//	number/=3
//	number%=3
//	a/=b+1  �ȼ���  a=a/(b+1) 
	
	
	//2.13  ��ѧ����
//	����Ҫ�õ�ͷ�ļ�<math.h>
	/*
	floor(x)	���ز�����x ���������		double a= 12.5;
											printf("%.0f",floor(a));
	ceil(x)		���ز�С��x����С����   ���ϵ����ֱ���Ҫ��%f��������%d ��������� 
	fabs(x��	���ؾ���ֵ 
	log(x��		����x����Ȼ����������Ϊe��
	log10(x)	����x�ĳ��ö���������Ϊ10��
	exp(x)		����e^x��ֵ
	sqrt(x)		����x��ƽ����
	pow(x��y)		����X^y��ֵ*/
//	double a=1;
//	printf("%f",exp(a)) ;	//	������Щ����������û�����%f����ȽϺ� 
//	double x=2, y=3;
//	printf("%f,%lf",pow(x,y),pow(y,x));
	
	
//}




//#include <stdio.h>
//int main ()
//{
	//2.11.3 ö��
	
	
	
	
	//3.1.1
	//��stdbool.h �л�������bool result =5<4 ��õ�false
	
	//3.1.2  ������if ���
	// ������һЩ��Ȥ���÷���
	//��д��ĸת��ΪСд��ĸ
//	int letter =0;
//	scanf("%c",&letter);
//	if(letter>='A')
//	if(letter<='Z')
//	{
//		letter=letter-'A'+'a';      //������ʵ����letter+ ÿ����д��ĸ�����Ӧ��Сд��ĸ�Ĳ�ֵ 
//		printf("%c",letter);
//	}
	 
	//3.1.7   �߼������
	//����Ϳ��Լ����ϵ�if �жϲ��裺
	// if��letter<='A')&&(letter<='Z'){....} 
	
	//3.1.8  ���������
//	ʾ���� x = y > 7 ? 25 : 50 ; ���y>7 x=25����x=50
// ��͵�ͬ�� if (y>7) x=25;else x=50 ;
	
	
	//3.2.2   switch ���
//	switch (ticket_number)
//	{
//		case 35:
//			printf("congratulations!You win first prize!");
//			break;
//		case 122:
//			printf("You are in luck - second prize.");
//			break;
//		case 78:
//			printf("You are in luck -third prize.");
//			break;
//		default:
//			printf("Too bad , you lose.");
//			break;
//	} 
	//�����һ��switch ��� ��ʾ��
	//�������break ���ͻ�һֱ���
	
	
	//����    �����ַ��ĺ���
//	islower()	Сд��ĸ
//	iswupper() 	��д��ĸ
//	isalnum()
//	iscntrl()
//	isprint()
//	isgraph()
//	isdigit()
//	isxdigit()
//	isblank()
//	isspase()
//	ispunct()
//	isalpha()
//	tolower()
//	toupper()
//  �����Լ����  ������Ҫ <ctype.h>


	
	//3.2.3 goto ���
/*	ʾ����goto there;
		  there:int  x=10;*/
//	��������goto��䣬�����ڶ��ѭ�������ڲ����˳�ʱ��
//	��goto���Ȳ�ȡ�������Ƽ򵥵ö�

	//3.3��λ�����
	 //�˽��� 
	 
	
	//4.3   for ѭ�� 
	//���ﻹ��һЩ���� a++��++a ������
//	int a= 0;
//	for(;a<=10;++a)
//	{
//		printf("%d\n",a);
//	} 
// 	printf("\n%d",a);
// 	return 0;
//	int a = 0,b=0,c=0,d=0;
//	printf("%d\t%d",++a,b++);
//	printf("\n%d\t%d",c--,--d);
//	printf("\n%d %d %d %d",a,b,c,d); 
// 	�������ܹ�����ؿ��������е����� 
		
//}


//#include <stdio.h>
//int main ()
//{
//2.11.3 ö��






//4.6.5  ����for ѭ�� ����α�����
//	srand(time(NULL));
//	for(int i=0;i<20;++i)
//	{
//		int a=rand()%101;
//		printf("%d\t",a);
//	}
	//������������һЩ�е�����������������srand() �ŵ�forѭ���оͲ�����
	  
	// ѭ����һ����Ϸ���⣺simon
	 //�����ĵ��У��������⣩
	  

//5.1.3  ʹ���������ƽ����    �о�����һ������Ļ����÷�����Ҫע��ʹ�� 
//		int grade[10];
//		unsigned int count = 10 ;
//		long sum = 0L;
//		float average = 0.0f;
//		for(unsigned int i = 0; i < count;i++)
//		{
//			printf("%2u>",i+1);   //����ط���%2u��2��ָ���������λ�� ��������λ������10�Ͷ�����1�Ͷ�һ���ո� 
//			scanf("%d",&grade[i]);
//			sum+=grade[i];
//		}
// 		average = (float) sum /count;
// 		printf("%.0f",average);
	//����Ԫ��ֵ 
	//�������������Ԫ�ؽ��е��� 	
//	for(unsigned i =0;i<count;i++)
//		printf("\nGrade Number %2u is %3d",i+1,grade[i]); 

	//4.10  do-whileѭ��  ʹ���ַ������
//	unsigned int number;
//	unsigned int rebmun;
//	unsigned int temp=0;
//	printf("please scanf a number\n");
//	scanf("%u",&number) ;
//	temp = number;
//	do
//	{
//		rebmun = 10*rebmun + temp % 10;
//		temp = temp/10;
//	} while(temp);
//	printf("\nThe number %u reversed is %u rebmun ehT\n",number,rebmun);
	//5.8 �䳤����
	 //�����������������Ϊ����ĳ��� 	
//} 

//#include <stdio.h>
//int main ()
//{
//	//6.2  ȷ���ַ����ĳ��� 
//	char str1[] = "To be or not to be";
//	char str2[] = ",that is the question";
//	unsigned int count = 0;
//	while (str1[count]!='\0')
//		++count;
//	printf("The length of the string \"%s\"is %d characters.\n",str1,count);
//	count = 0;
//	while (str2[count] != '\0')
//		++count;
//	printf("The length of the string \"%s\" is %d characters.\n", str2,count);
//	return 0;
	 //ֻ��һ��ѭ����������1��+2��+3��+����������+n!=�������� 
//	 int n;
//	 printf("Please scanf a number biger than zero .\n");
//	 scanf("%d",&n);
//	 if(n>0)
//	 {
//	 int p=1;
//	 int sum=1;
//	 for(int i=2;i<=n;i++)
//	 {
//	 	p*=i;
//	 	sum+=p;
//	 }
//	 printf("1!+2!+.....+n!=%d",sum);
//	 }
//	else printf("wrong");
	// 
//} 



//����c11��֧�� 

//#include <stdio.h>
//int main(void)
//{
//#if defined__STDC_LIB_EXT1__
//	printf("Optional functions are defined\n");
//#else
//	printf("Optional functions are not defined.\n");
//#endif
//	return 0; 
//} 


//6.3.3    �����ַ���
//  strcpy_s   ���̻�������δ��




//7.1.2  ͨ��ָ�����ֵ
//#include <stdio.h>
//int main ()
//{
//	int number = 15;
//	int *pointer = &number;
//	int result = 0;
//	result = *pointer + 5;
//	printf("%d\n%d\n%d\n%d",number,pointer,*pointer,result);
//} 
//����˵����*pointer��number��ֵ���  ����pointer�������number���ڴ��еĴ����ַ
 
 
 //����ָ��
// #include <stdio.h>
// int main (void)
// {
// 	int number = 0;
// 	int *pnumber = NULL;
// 	number = 10;
//	pnumber=&number;
// 	printf("pnumber's adress :%p\n",(void*)&pnumber);
// 	printf("pnumber's value :%p\n",pnumber);
// 	return 0;
// }
 //����������ַ�ǲ�ͬ�� 
 
 
 
 
 //7.2�����ָ��
// #include <stdio.h>
// int main()
// {
// 	char multiple[] = "My string";
// 	
// 	char *p = &multiple[0];
// 	printf("The address of the first array element: %p\n",p);
// 	
// 	p = multiple;
// 	printf("The address obtained from the array name:%p\n",multiple);
// 	return 0;
// }	 


//�벻ͨ���������� 
//#include <stdio.h>
//int main()
//{
//	int a=1,b=2;
//	if(a>b)
//		{
//			printf("Hello");
//		}
//} 



//���11��쳲��������� 
//#include  <stdio.h>
//int main()
//{
//	int a,b,c;
//	a=1;
//	b=1;
//	printf("%d\n%d\n",a,b);
//	for(int i=0;i<=8;i++)
//	{
//		c=a+b;
//		b=a;
//		printf("%d\n",c);
//		a=c;
//	}



//������NEUOJ������ ��input&&output �ĵ�������Ŀ 
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a=0,b=0,i=0,sum,f,n[100],c=0;
//	scanf("%d",&a);
//	for(int l=0;l<a;l++)
//	{
//		scanf("%d",&f);
//			 
//			int sum=0;
//			for(i=1;i<=f;i++)
//			{
//				scanf("%d",&b);
//				sum=sum+b;			
//			}
//			n[c]=sum;
//			c++;
//		
//	}
//	for(int p=0;p<c;p++)
//		printf("%d\n",n[p]);
//	return 0;
//}






//����NEUOJ������ input && output 7 
//#include <stdlib.h>
//#include <stdio.h>
//int main ()
//{
//	int a=0 , b=0 , c=0 , d[100] , sum=0;
//	while(scanf("%d %d",&a,&b)!=EOF)
//	{
//		sum=a+b;
//		d[c]=sum;
//		c++;
//	}
//	for(int p=1;p<=c;p++)
//	{
//		printf("case %d: %d\n",p,d[p-1]);
//	}
//	return 0;
//} 




//#include <stdio.h>
//int main (void)
//{
//	int a=0,b[100000],ge=0,sum=0;
//	int i=1;
// 	while((scanf("%d",&a))!=EOF)
//	{	
//		sum=0;
//		for(;;)
//		{
//			ge=a%10;
//			sum+=ge;
//			a=a/(10);
//			if(a==0)
//				break;
//			else
//				continue;		
//		}
//		b[i-1]=sum;
//		i++;
//	} 
//	int g=0,p=0;
//	for(p=0;p<i-1;p++) 
//	{
//		g+=b[p];
//	}
//	printf("%d",g);
//	return 0;
//}




/*�д���*/ 
//#include <stdio.h>
//int main ()
//{
//	int n=0,sum=0,p=0;
//	while((scanf("%d",&n)!=EOF))
//	{
//		for(int i=1;i<n;i++)
//			sum+=i;
//		for(int i=1;i>n;i--)
//			sum+=i;
//		printf("%d\n",sum);
//		sum=0; 
//	}	
//	return 0; 
//} 








          // ���ﻹ������  : ���� scanf()���뻺��������   �����д�ѧ�� 
  
//#include <stdio.h>  
//int main()  
//{  
//    int T;    
//    for(;scanf(" %%%d",&T)!=EOF;)
//	{  
//        printf("++++++++++++\n");  
//        for(int j=0;j<2;j++){  
//            printf("+");  
//            for(int i=0;i<T/10;i++)  
//                printf("=");  
//            for(int i=T/10;i<10;i++)  
//                printf("~");  
//            printf("+-|\n"); 
//			 
//        }  
//        printf("++++++++++++\n");   
//    }  
//    return 0;  
//}  
//
//

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[100];
//	int a=0,sum=0;
//	while((scanf("%s",str))!=EOF)
//	{
//		for(;a<strlen(str);)
//		{
//			sum+=str[a]-'0';
//			a++;
//		}
//		printf("%d\n",sum);
//	}
//	return 0;
//}









//#include <stdio.h>
//int main()
//{
//	int a=0;
//	while(scanf("%d",&a)==1)
//	{
//		if(a>0)
//			printf("%d\n",(1+a)*a/2);
//		else if(a==0)
//			printf("%d\n",1);
//		else
//		{
//			printf("%d\n",-(1-a)*(-a)/2+1);
//		}
//	} 
//return 0;
//}










#include <stdio.h>
int main()
{
		long int a=0,b=0;
		scanf("%ld %ld",&a,&b);
		printf("%ld",a+b);
} 
