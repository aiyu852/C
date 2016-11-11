#include <stdio.h>
#include <iostream>
using namespace std;				
int main (){
//	char i;
//	char k;
//	for(i=0;i>=0;i++){
//		k=i+1;
//	}                            通过遍历数组计算char类型的上界-2^7~2^7-1    ;
//	printf("%d",k);               对于int 类型也可以这样计算但花费的时间更长 
	
	
	 
	
	
//	char* a="a";
//	 printf("\n");
//	printf("sizeof(a)=%d\n",sizeof(a));
//	                                        字符型常量用‘’表示，记住是单引号！！！！下面是再次的尝试。 
//	char *b="A";
//	printf("%d\n",*b-*a);                   A与a对应的数码差是多少？      这里还有问题！！！


//	char a='a';
//	char b='b';
//	printf("%d\t &d\t &c",a,b,a+1);
/*	  这里运行后又出现了新的问题：1.为什么上面用个指针都可以运行，warning 是为什么
								  2.上面还没有尝试用数组试一试，为什么说数组是特殊的指针？数组不能变吗？
								  3.这里输出的%d a 与%d b 有个什么区别啊，为什么出现一些不知道是什么鬼的玩意
								  4.还有奇怪的地方‘a'对应的ASCII表的数字为十进制编码为97 输出也没有问题那为什么b的输出有问题？？？
								  5.我去，看到戳误了木有？？？好大的错误戳无都摸看出来！！我要保留!!*/
//    char a='A';
//	char b='B';
//	printf("%d\t%d\n%c",a,b,a+1) ;
//	很好，已完成一部分问题的解答。。。有这个简单的程序可以知道ASCII中的‘a'~’z'是97~122 'A'~'Z'为65~90‘0’到‘9’是48~57
//	”a"是一个字符串而‘a'是一个字符，前者不可以用char 来定义后者可以 




//  #define 常数名 常数值 也是一种定义常数的办法。。	



//float a=32.4;
//printf("%f\t%.1f\t",a,a,);
// 这里可以看出%f不是连续的而是按照精度间隔的，我们可知数字与数字之间是连续的但是计算机只是按照顺序和精度储存然后输出的 


//int a=123;
//printf("%05d\n%5d\n%d",a,a,a);
//这可以作为美观时所做出的一些调整。。 


//double a=3.14;
//printf("%2f",a);
//我勒个去啊，你猜我写成%2f有区别吗？？%.2f与它有着天差地别啊！！ 
 
//    这里还有一个cout输出语句。。待做 
//  前面需要声明 #include <iostream> 
// using namespace std;
//
//double a=3.4;
//cout<<"n="<<a<<endl;
//1.80s 
// 输入语句是cin 
//  int n,m ;
//  cin>>n>>m;
//  cout<<n<<","<<m<<endl;

//scanf 和 printf 的速度要比cout 和 cin 的速度要快！！
//用一下例子说明；
//double a=3.4;
//printf("n=%f",a);     
// 用了1.77s   这的确如此 （编译加运行） 


//另外，a+=1 要比a=a+1的速度要快    所以有以下的例子说明 

// int a=2; 
// a+=1;
// printf("a=%d",a);
 //1.73s

//int a=2;
//a=a+1;
//printf("a=%d",a); 
//1.74s

//在做赋值时 c=a++;为c=a+1    c=++a;为c=a（a改变之前的值） 


//强制类型转换
//double a=3.6;
//int f=a;
//printf("%d\t",f);
//int s=(int) a;
//printf("%d\t",s);
//double d= (double) f/2;
//double q=a/2;
//printf("%f \t%f",d,q);
			 
 
 
 // switch 语句： 
// int n;
// scanf("%d",&n);
// switch (n){
// 	case 1:
// 		printf("monday");
// 		break;
// 	case 2:
// 		printf("tuesday");
// 		break;
// 	case 3:
// 		printf("wednesday");
// 		break;
// 	case 4:
// 		printf("thursday");
// 		break;
// 	case 5:
// 		printf("friday");
// 		break;
// 	case 6:
// 		printf("saturday");
// 		break;
// 	case 7:
// 		printf("sunday");
// 		break;
// 	default :
// 	
// 		printf("What are you fucking for ?");
// 		
// } 
/* 注意点：1.switch 后有一个（）里面是变量
		   2.case x 后一定要加上：记住是：而不是;这是有很大区别的
		   3.default有与没有都可以
		   4.一定要在每种后面加 break  */ 


//for 的循环语句
// for 循环（）中的三个条件可以都不写， 但是要保留;
//for 中所做的计算不会改变它的值例如：
//  		char a='a';
//  		int i=0 ;
//		  for(;i<26;i++){
//		  	printf("%c\t",a+i);
//		  } 
//	 
//	 







 




//     double a=1.512;
//	 int c;
//	 double b;                             即使使用%.0f 输出double类型会做四舍五入；而int则不行 
//	 c=a;
//	 b=a;
//	 printf("c=%d\n",c);
//	 printf("b=%.0f",b);
	 



	 
	 
	
	return 0;
}	
