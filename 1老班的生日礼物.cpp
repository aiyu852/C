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
void play_music();//奏乐
int main(int argc, char *argv[])
{
	int q=0,w=0;
	system("title 送给杨老师的生日祝福 BY EricALan Luo Shijie");
	printf("请您选择字体颜色！（请敲入数字后按回车）；\n\
	1=淡绿色\t\
	2=淡浅绿色\n\
	3=淡红色\t\
	4=淡紫色\n\
	5=淡黄色\t\
	6=亮白色\n");
	scanf("%d",&q);
	switch(q)
	{
		case 1:system("color 0A");Beep(1000,100);break;
		case 2:system("color 0B");Beep(1000,100);break;
		case 3:system("color 0C");Beep(1000,100);break;
		case 4:system("color 0D");Beep(1000,100);break;
		case 5:system("color 0E");Beep(1000,100);break;
		case 6:system("color 0F");Beep(1000,100);break;
		default:printf("您输入错误！");break; 
	}
	system("cls");
	Sleep(100);
	printf("\t\t杨老师！您好。其实我也没啥想说的话。\n\n\t\t总之是非常感谢您在高考前陪着我们一起奋斗！\n\n\t\t是您的热情让我爱上物理，不说多的送上我的生日祝福吧\n\n");
	play_music();
	
	
	
	
	system("pause");
	printf("您想打开一下文件吗？\n1 打开“回忆”\t2 打开同学们的祝福\n3 打开 张笑寒的视频\t 4打开蒋丽颖的视频\n 0 关闭");
	
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
		case 1:system(buffer1);printf("如果无图像显示请换用播放器！！！");break;
		case 2:system(buffer2);printf("如果无图像显示请换用播放器！！！");break;
		case 3:system(buffer3);printf("如果无图像显示请换用播放器！！！");break;
		case 4:system(buffer4);printf("如果无图像显示请换用播放器！！！");break;
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


