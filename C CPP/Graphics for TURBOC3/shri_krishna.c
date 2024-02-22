#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

// random screen saver loop kbhit

void main(){

	int a = DETECT;
	int b;
	int i=1,j,k;
 //	int x=100,y=100;
	char ch[3];
	clrscr();
	initgraph(&a,&b,"C:\\TURBOC3\\BGI");
	while(kbhit()==0){
	setcolor(random(15));
	if(i==100){
       i=1;
		cleardevice();
	}
	i++;
	delay(100);
	putpixel(random(500),random(400),i);
	circle(random(600),random(400),random(3));
   	settextstyle(random(50),0,0.5);
	outtextxy(random(600),random(400),"SHRI-KRISHNA");

	//up too here

      //	settextstyle(random(50),0,0.5);
      //	outtextxy(random(600),random(400),"KRISHNA");
      //	delay(random(500));
      //	cleardevice();
	}


getch();
}