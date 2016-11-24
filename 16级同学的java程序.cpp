
/**单例设计模式
 * 只允许在某一类中构造一个成员*/
package OneCaseDesignPattern;
/**将构造器封装
 * 预先构造一个唯一的成员
 * 通过getInstance方法返回以满足主函数的需求*/
class AA{
	String name;
	private AA(){

	}
	static AA i=new AA();
	public static AA getInstance(){
		return i;
	}
}
public class OneCase {
	public static void main(String[] args){
		AA one=AA.getInstance();
		one.name="name";
		AA two=AA.getInstance();
		System.out.println(two.name);
	}
}
/**模板方法设计模式
 * 定义功能时，功能的一部分是确定的，而另一部分不确定，
 * 确定的部分使用到不确定的部分，
 * 那么就将不确定的部分暴露出去，由子类完成
 * 例如：
 * 确定的部分：获取运行算法的时间
 * 不确定部分：所要运行的算法*/
package TemplateMethodDesignPattern;
/**此类用于计算时间*/
abstract class Demo{
	public final void getTime(){
		long start=System.currentTimeMillis();
		function();
		long end=System.currentTimeMillis();
		System.out.println((end-start)+"ms");
	}
	public abstract void function();
}
/**新建此类以暴露不确定的部分*/
class Test extends Demo{
	/**此方法用于自定义你所要计算时间的算法*/
	public void function(){
		for(int i=1;i<9999;i++){
			System.out.println(i);
		}
	}
}
public class TemplateMethod {
	public static void main(String[] args){
		new Test().getTime();
	}
}
public class Student {
	private int number;
	private String name;
	private int age;
	private int java;
	private int c_shar;
	private int html;
	private int sql;
	private int sum;
	private int aver;
	public int getNumber() {
		return number;
	}
	public void setNumber(int number) {
		this.number = number;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public int getJava() {
		return java;
	}
	public void setJava(int java) {
		this.java = java;
	}
	public int getC_shar() {
		return c_shar;
	}
	public void setC_shar(int c_shar) {
		this.c_shar = c_shar;
	}
	public int getHtml() {
		return html;
	}
	public void setHtml(int html) {
		this.html = html;
	}
	public int getSql() {
		return sql;
	}
	public void setSql(int sql) {
		this.sql = sql;
	}
	public int getSum() {
		return sum;
	}
	public void setSum() {
		this.sum=this.java+this.c_shar+this.html+this.sql;
	}
	public int getAver() {
		return aver;
	}
	public void setAver() {
		this.aver=sum/4;
	}
	public String toString(){
		return "\t"+this.number+"\t"+this.name+"\t"+
		this.age+"\t"+this.java+"\t"+this.c_shar+"\t"+
		this.html+"\t"+this.sql+"\t"+this.sum+"\t"+this.aver;
	}
}
import java.util.Scanner;
public class Test {
	public static void main(String[] args){
		Scanner in=new Scanner(System.in);
		Scanner sc=new Scanner(System.in);
		Admin admin=new Admin();
		System.out.println("--请输入学生数：--");
		Student[] arr=new Student[in.nextInt()];
		while(true){
			System.out.println("-------------------------");
			System.out.println("-------------------------");
			System.out.println("--请选择你要执行的功能：--");
			System.out.println("1：添加学生--------------");
			System.out.println("2：查找学生--------------");
			System.out.println("3：根据学生编号更新信息---");
			System.out.println("4：删除学生--------------");
			System.out.println("5：根据编号输入学生成绩---");
			System.out.println("6：根据某科成绩进行排序---");
			System.out.println("7：根据总分进行排序-------");
			System.out.println("8：退出------------------");
			System.out.println("-------------------------");
			int option=sc.nextInt();
			if(option==1){
				System.out.println("--添加学生的基本信息--");
				System.out.println("请输入学生的姓名：");
				String name=in.next();
				System.out.println("请输入学生的年龄：");
				int age=0;
				try{
					age=in.nextInt();
				}catch(Exception e){
					System.out.println("输入有误！请按编号重新更新信息！");
				}
				admin.create(name,age,arr);
			}
			else if(option==2){
				System.out.println("--查询学生的信息--");
				System.out.println("请输入所选择的学生编号：");
				int number=in.nextInt();
				admin.find(number, arr);
			}
			else if(option==3){
				System.out.println("--更新学生的信息--");
				System.out.println("请输入所选择的学生编号：");
				int number=in.nextInt();
				System.out.println("请输入学生的姓名：");
				String name=in.next();
				System.out.println("请输入学生的年龄：");
				int age=in.nextInt();
				admin.replace(number, name, age,arr);
			}
			else if(option==4){
				System.out.println("--删除学生的信息--");
				System.out.println("请输入所选择的学生编号：");
				int number=in.nextInt();
				admin.delete(number, arr);
			}
			else if(option==5){
				System.out.println("--更新学生的成绩--");
				System.out.println("请输入所选择的学生编号：");
				int number=in.nextInt();
				admin.score(number, arr);				
			}
			else if(option==6){
				System.out.println("--根据单科成绩排序--");
				System.out.println("科目：");
				System.out.println("1：java 2：c# 3：HTML 4：sql");
				int on=in.nextInt();
				admin.sortScore(on, arr);
			}
			else if(option==7){
				System.out.println("--根据总成绩排序--");
				admin.sortTotal(arr);
			}
			else if(option==8){
				System.out.println("--程序已退出，数据删除！--");
				break;
			}
		}		
		in.close();
		sc.close();
	}
}
package Finish;

import java.util.Scanner;
public class IntervalDays{
	public static void main(String []args){
		Scanner in=new Scanner(System.in);
		System.out.println("从？？？年？月？日");
		int year1=in.nextInt();
		int month1=in.nextInt();
		int day1=in.nextInt();
		System.out.println("到？？？年？月？日");
		int year2=in.nextInt();
		int month2=in.nextInt();
		int day2=in.nextInt();
		int sum=0;
		for(;year1<year2;year1++){
			if(year1%4==0&&year1%100!=0||year1%400==0){
				sum+=366;
			}else{
				sum+=365;
			}
		}
		for(int month0=1;month0<month2;month0++){
			if(month0==2){
				if(year2%4==0&&year2%100!=0||year2%400==0){
					sum+=29;
				}else{
					sum+=28;
				}
			}else{
				if(month0==4||month0==6||month0==9||month0==11){
					sum+=30;
				}else{
					sum+=31;
				}
			}
		}
		sum+=day2;
		int sum1=0;
		for(int month0=1;month0<month1;month0++){
			if(month0==2){
				if(year2%4==0&&year2%100!=0||year2%400==0){
					sum1+=29;
				}else{
					sum1+=28;
				}
			}else{
				if(month0==4||month0==6||month0==9||month0==11){
					sum1+=30;
				}else{
					sum1+=31;
				}
			}
		}
		System.out.println(sum-sum1-day1);
		in.close();
	}
}

