#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>


// table

void main(){
	int a = DETECT;
	int b;
	int i,j,k=1;
	int x = 100;
	int y = 100;
	char ch[3];
	clrscr();
	initgraph(&a,&b,"C:\\TURBOC3\\BGI");//graphics.h
	for(i=1;i<=10;i++){
	for(j=1;j<=10;j++){
	delay(100); //dos.h
	if(k==16){
	  k=1;
	  }
	setcolor(k++); //graphics.h
	sprintf(ch,"%d",i*j); //stdio.h
	outtextxy(x,y,ch); //graphics.h
	x+=40;
	}
	x=100;
	y+=30;
       }

	getch();
}
