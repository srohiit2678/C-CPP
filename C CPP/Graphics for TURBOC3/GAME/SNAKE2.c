#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void snake();
void set();
void food();
void score_border();
void end();


int x[100][4]={{100,100,110,110},{90,100,100,110},{80,100,90,110}};
int e1,e2;
int r1,r2,c,n=3;
char ch[4];
int score;


void main(){
     int a=DETECT;
     int b;
     r1 = 50+random(500);
     r2 = 50+random(400);
     clrscr();
       initgraph(&a,&b,"C:\\TURBOC3\\BGI");

       do{
	  c=getch();
	  snake();


       }while(c!=101);
     getch();
}
void snake(){
while(!kbhit()){


int i;  food();    score_border();


for(i=0;i<n;i++){
   rectangle(x[i][0],x[i][1],x[i][2],x[i][3]);

   setcolor(7);
   setfillstyle(1,4);
//   bar(x[0][0]+6,x[0][1]+2,x[0][2]-2,x[0][3]-6);
//   bar(x[0][0]+6,x[0][1]+6,x[0][2]-2,x[0][3]-2);

   setcolor(15);

}
if(c==72){
 set();
 x[0][1] -=10;
 x[0][3] -=10;

}
if(c==80){
 set();
 x[0][1] +=10;
 x[0][3] +=10;

}
if(c==77){
 set();
 x[0][0] +=10;
 x[0][2] +=10;

}
if(c==75){
 set();
 x[0][0] -=10;
 x[0][2] -=10;

}
if(x[0][0] == r1 && x[0][1]==r2){
 n++;
 r1=50+random(500);
 r2=50+random(400);
 score+=10;
}
delay(100);
cleardevice();
}
}
void set(){
 int i;
 for(i=n-1;i>0;i--){
  x[i][0]=x[i-1][0];
  x[i][1]=x[i-1][1];
  x[i][2]=x[i-1][2];
  x[i][3]=x[i-1][3];
 }


}
void food(){
 r1-=r1%10;
 r2-=r2%10;
 bar(r1,r2,r1+10,r2+10);

}

void score_border(){
 setcolor(4);
 rectangle(5,5,635,475);
 setcolor(14);
 sprintf(ch,"%d",score);
 outtextxy(550,25,"SCORE:");
 outtextxy(600,25,ch);


 setcolor(15);


}

