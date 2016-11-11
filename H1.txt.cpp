//#include <stdio.h>
//#include <limits.h>			//这里说明了CHAR_MAX与CHAR_MIN 
//int main ()
//{	
//	printf("Variables of type char store values from 0 to %u \n",UCHAR_MAX); 
//} 
//   以上是一个表明某个 变量类型的数值限制范围 
 

//#include <ctype.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//int main ()
//{
//	int a;
//	a=sizeof(long double);
//	printf("%d",a); 
	//这说明了各种变量类型所占的比特数 
	
	
	//2.11.2  关于输入的函数
//	标准库 ctype.h  有toupper() 和 tolower() 可以把字符转换为大写和小写 
//	比如
//	char a='A';
//	printf("%c",tolower(a)); 
	

	
	
	//2.11.4 存储布尔值的变量
//	_Bool f=12;
//	if(f==true)
//	{
//		printf("Hello");
//	} 
//	else{
//		printf("Bye-bye");
//	}
//  布尔型需要用到头文件 <stdbool.h>
	
	
	//2.12   赋值操作的op=形式
	
//	number*=3
//	number/=3
//	number%=3
//	a/=b+1  等价于  a=a/(b+1) 
	
	
	//2.13  数学函数
//	这里要用到头文件<math.h>
	/*
	floor(x)	返回不大于x 的最大整数		double a= 12.5;
											printf("%.0f",floor(a));
	ceil(x)		返回不小于x的最小整数   以上的两种必须要用%f输出如果用%d 会产生错误 
	fabs(x）	返回绝对值 
	log(x）		返回x的自然对数（底数为e）
	log10(x)	返回x的常用对数（底数为10）
	exp(x)		返回e^x的值
	sqrt(x)		返回x的平方根
	pow(x，y)		返回X^y的值*/
//	double a=1;
//	printf("%f",exp(a)) ;	//	明显这些函数类型最好还是用%f输出比较好 
//	double x=2, y=3;
//	printf("%f,%lf",pow(x,y),pow(y,x));
	
	
//}




//#include <stdio.h>
//int main ()
//{
	//2.11.3 枚举
	
	
	
	
	//3.1.1
	//在stdbool.h 中还可以让bool result =5<4 会得到false
	
	//3.1.2  基本的if 语句
	// 这里有一些有趣的用法：
	//大写字母转换为小写字母
//	int letter =0;
//	scanf("%c",&letter);
//	if(letter>='A')
//	if(letter<='Z')
//	{
//		letter=letter-'A'+'a';      //这里其实就是letter+ 每个大写字母与其对应的小写字母的差值 
//		printf("%c",letter);
//	}
	 
	//3.1.7   逻辑运算符
	//这里就可以简化以上的if 判断步骤：
	// if（letter<='A')&&(letter<='Z'){....} 
	
	//3.1.8  条件运算符
//	示例： x = y > 7 ? 25 : 50 ; 如果y>7 x=25否则x=50
// 这就等同于 if (y>7) x=25;else x=50 ;
	
	
	//3.2.2   switch 语句
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
	//这就是一个switch 语句 的示例
	//如果不加break 他就会一直输出
	
	
	//补充    测试字符的函数
//	islower()	小写字母
//	iswupper() 	大写字母
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
//  以上自己查表  另外需要 <ctype.h>


	
	//3.2.3 goto 语句
/*	示例：goto there;
		  there:int  x=10;*/
//	建议少用goto语句，但是在多层循环的最内层中退出时，
//	用goto语句比采取其他机制简单得多

	//3.3按位运算符
	 //此节跳 
	 
	
	//4.3   for 循环 
	//这里还有一些关于 a++与++a 的区别
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
// 	这样就能够清楚地看出这其中的区别 
		
//}


//#include <stdio.h>
//int main ()
//{
//2.11.3 枚举






//4.6.5  再论for 循环 生成伪随机数
//	srand(time(NULL));
//	for(int i=0;i<20;++i)
//	{
//		int a=rand()%101;
//		printf("%d\t",a);
//	}
	//这样可以生成一些列的随机数，但是如果把srand() 放到for循环中就不行了
	  
	// 循环的一个游戏问题：simon
	 //已在文档中（存在问题）
	  

//5.1.3  使用数组计算平均分    感觉这是一种数组的基本用法，但要注意使用 
//		int grade[10];
//		unsigned int count = 10 ;
//		long sum = 0L;
//		float average = 0.0f;
//		for(unsigned int i = 0; i < count;i++)
//		{
//			printf("%2u>",i+1);   //这个地方的%2u的2是指输出的数字位数 最少是两位（若是10就顶格，是1就多一个空格） 
//			scanf("%d",&grade[i]);
//			sum+=grade[i];
//		}
// 		average = (float) sum /count;
// 		printf("%.0f",average);
	//检索元素值 
	//对上述的输入的元素进行调出 	
//	for(unsigned i =0;i<count;i++)
//		printf("\nGrade Number %2u is %3d",i+1,grade[i]); 

	//4.10  do-while循环  使数字反向输出
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
	//5.8 变长数组
	 //这里就是输入数据作为数组的长度 	
//} 

//#include <stdio.h>
//int main ()
//{
//	//6.2  确定字符串的长度 
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
	 //只用一个循环进行运算1！+2！+3！+。。。。。+n!=几的问题 
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



//检查对c11的支持 

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


//6.3.3    复制字符串
//  strcpy_s   过程还不明白未决




//7.1.2  通过指针访问值
//#include <stdio.h>
//int main ()
//{
//	int number = 15;
//	int *pointer = &number;
//	int result = 0;
//	result = *pointer + 5;
//	printf("%d\n%d\n%d\n%d",number,pointer,*pointer,result);
//} 
//这里说明了*pointer与number的值相等  但是pointer储存的是number在内存中的储存地址
 
 
 //申明指针
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
 //这里两个地址是不同的 
 
 
 
 
 //7.2数组和指针
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


//想不通啊？？？？ 
//#include <stdio.h>
//int main()
//{
//	int a=1,b=2;
//	if(a>b)
//		{
//			printf("Hello");
//		}
//} 



//输出11个斐波那契数列 
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



//这是在NEUOJ上遇到 的input&&output 的第六道题目 
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






//这是NEUOJ测试题 input && output 7 
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




/*有错误*/ 
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








          // 这里还有问题  : 严重 scanf()读入缓冲区数据   这里有大学问 
  
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
