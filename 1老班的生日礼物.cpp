#include<windows.h>
#include<stdio.h>
unsigned int rhythm[] = {
 0x188, 0x188, 0x1B8, 0x188, 0x20B, 0x1EE,
 0x188, 0x188, 0x1B8, 0x188, 0x24B, 0x20B,
 0x188, 0x188, 0x310, 0x293, 0x20B, 0x1EE,
 0x1B8, 0x2BA, 0x2BA, 0x293, 0x20B, 0x24B,
 0x20B
};
unsigned int delay[] = {
 0x177, 0x07D, 0x1F4, 0x1F4, 0x1F4, 0x3E8,
 0x177, 0x07D, 0x1F4, 0x1F4, 0x1F4, 0x3E8,
 0x177, 0x07D, 0x1F4, 0x1F4, 0x1F4, 0x1F4, 0x3E8,
 0x177, 0x07D, 0x1F4, 0x1F4, 0x1F4, 0x3E8,
};
void play_music();//����
int main(int argc, char *argv[])
{
	int q=0,w=0;
	system("title �͸�����ʦ������ף�� BY EricALan Luo Shijie");
	printf("����ѡ��������ɫ�������������ֺ󰴻س�����\n\
	1=����ɫ\t\
	2=��ǳ��ɫ\n\
	3=����ɫ\t\
	4=����ɫ\n\
	5=����ɫ\t\
	6=����ɫ\n");
	scanf("%d",&q);
	switch(q)
	{
		case 1:system("color 0A");Beep(1000,100);break;
		case 2:system("color 0B");Beep(1000,100);break;
		case 3:system("color 0C");Beep(1000,100);break;
		case 4:system("color 0D");Beep(1000,100);break;
		case 5:system("color 0E");Beep(1000,100);break;
		case 6:system("color 0F");Beep(1000,100);break;
		default:printf("���������");break; 
	}
	system("cls");
	Sleep(100);
	printf("\t\t����ʦ�����á���ʵ��Ҳûɶ��˵�Ļ���\n\n\t\t��֮�Ƿǳ���л���ڸ߿�ǰ��������һ��ܶ���\n\n\t\t�������������Ұ���������˵��������ҵ�����ף����\n\n");
	play_music();
	
	
	
	
	system("pause");
	printf("�����һ���ļ���\n1 �򿪡����䡱\t2 ��ͬѧ�ǵ�ף��\n3 �� ��Ц������Ƶ\t 4�򿪽���ӱ����Ƶ\n 0 �ر�");
	
	char s[100];
	int r=0;
	strcpy(s,argv[0]);
	for(r=strlen(s);r>0;r--)
	if(s[r]=='1')
	{
		s[r]='\0';
		break;
	}

	char buffer1[100] buffer2[100];
	sprintf(buffer1,"%s1.mp4",s);
	sprintf(buffer2,"%s1.html",s);
	sprintf(buffer3,"%s2.mp4",s);
	sprintf(buffer4,"%s4.mp4",s);
	
	int i=0;
	scanf("%d",&i);
	switch(i)
	{
		case 1:system(buffer1);printf("�����ͼ����ʾ�뻻�ò�����������");break;
		case 2:system(buffer2);printf("�����ͼ����ʾ�뻻�ò�����������");break;
		case 3:system(buffer3);printf("�����ͼ����ʾ�뻻�ò�����������");break;
		case 4:system(buffer4);printf("�����ͼ����ʾ�뻻�ò�����������");break;
		case 0:system("exit");break;
		default:break;
	} 
	system("pause");
	return 0;
}
void play_music()
{
 int i = 0; 
 for(; i < 25; ++i)
 {
 Beep(rhythm[i]*5, delay[i]);
 if(i == 24)
 {
 Sleep(500);
 i = 0;break; 
 }
 }
}


