
/**�������ģʽ
 * ֻ������ĳһ���й���һ����Ա*/
package OneCaseDesignPattern;
/**����������װ
 * Ԥ�ȹ���һ��Ψһ�ĳ�Ա
 * ͨ��getInstance��������������������������*/
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
/**ģ�巽�����ģʽ
 * ���幦��ʱ�����ܵ�һ������ȷ���ģ�����һ���ֲ�ȷ����
 * ȷ���Ĳ���ʹ�õ���ȷ���Ĳ��֣�
 * ��ô�ͽ���ȷ���Ĳ��ֱ�¶��ȥ�����������
 * ���磺
 * ȷ���Ĳ��֣���ȡ�����㷨��ʱ��
 * ��ȷ�����֣���Ҫ���е��㷨*/
package TemplateMethodDesignPattern;
/**�������ڼ���ʱ��*/
abstract class Demo{
	public final void getTime(){
		long start=System.currentTimeMillis();
		function();
		long end=System.currentTimeMillis();
		System.out.println((end-start)+"ms");
	}
	public abstract void function();
}
/**�½������Ա�¶��ȷ���Ĳ���*/
class Test extends Demo{
	/**�˷��������Զ�������Ҫ����ʱ����㷨*/
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
		System.out.println("--������ѧ������--");
		Student[] arr=new Student[in.nextInt()];
		while(true){
			System.out.println("-------------------------");
			System.out.println("-------------------------");
			System.out.println("--��ѡ����Ҫִ�еĹ��ܣ�--");
			System.out.println("1�����ѧ��--------------");
			System.out.println("2������ѧ��--------------");
			System.out.println("3������ѧ����Ÿ�����Ϣ---");
			System.out.println("4��ɾ��ѧ��--------------");
			System.out.println("5�����ݱ������ѧ���ɼ�---");
			System.out.println("6������ĳ�Ƴɼ���������---");
			System.out.println("7�������ֽܷ�������-------");
			System.out.println("8���˳�------------------");
			System.out.println("-------------------------");
			int option=sc.nextInt();
			if(option==1){
				System.out.println("--���ѧ���Ļ�����Ϣ--");
				System.out.println("������ѧ����������");
				String name=in.next();
				System.out.println("������ѧ�������䣺");
				int age=0;
				try{
					age=in.nextInt();
				}catch(Exception e){
					System.out.println("���������밴������¸�����Ϣ��");
				}
				admin.create(name,age,arr);
			}
			else if(option==2){
				System.out.println("--��ѯѧ������Ϣ--");
				System.out.println("��������ѡ���ѧ����ţ�");
				int number=in.nextInt();
				admin.find(number, arr);
			}
			else if(option==3){
				System.out.println("--����ѧ������Ϣ--");
				System.out.println("��������ѡ���ѧ����ţ�");
				int number=in.nextInt();
				System.out.println("������ѧ����������");
				String name=in.next();
				System.out.println("������ѧ�������䣺");
				int age=in.nextInt();
				admin.replace(number, name, age,arr);
			}
			else if(option==4){
				System.out.println("--ɾ��ѧ������Ϣ--");
				System.out.println("��������ѡ���ѧ����ţ�");
				int number=in.nextInt();
				admin.delete(number, arr);
			}
			else if(option==5){
				System.out.println("--����ѧ���ĳɼ�--");
				System.out.println("��������ѡ���ѧ����ţ�");
				int number=in.nextInt();
				admin.score(number, arr);				
			}
			else if(option==6){
				System.out.println("--���ݵ��Ƴɼ�����--");
				System.out.println("��Ŀ��");
				System.out.println("1��java 2��c# 3��HTML 4��sql");
				int on=in.nextInt();
				admin.sortScore(on, arr);
			}
			else if(option==7){
				System.out.println("--�����ܳɼ�����--");
				admin.sortTotal(arr);
			}
			else if(option==8){
				System.out.println("--�������˳�������ɾ����--");
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
		System.out.println("�ӣ������ꣿ�£���");
		int year1=in.nextInt();
		int month1=in.nextInt();
		int day1=in.nextInt();
		System.out.println("���������ꣿ�£���");
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

