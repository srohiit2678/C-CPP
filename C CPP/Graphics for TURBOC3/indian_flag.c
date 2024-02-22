
#include<conio.h>
#include<stdio.h>
#include<graphics.h>

// flag and emojis

void main(){
 int gd = DETECT;
 int gm;

 int i;


 int poll[]={90,50,100,50,100,480,90,480,90,50};

 int bs1[]={10,469,180,469,180,479,10,479,10,469};
 int bs2[]={30,459,160,459,160,469,30,469,30,459};
 int bs3[]={50,449,140,449,140,459,50,459,50,449};

 int tr1[]={100,52,350,52,350,117,100,117,100,52};
 int tr2[]={100,117,350,117,350,182,100,182,100,117};
 int tr3[]={100,182,350,182,350,247,100,247,100,182};
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");



   setfillstyle(1,6);
   setcolor(6);
   pieslice(95,40,0,360,10);

    setcolor(0);
   setfillstyle(1,6);
   fillpoly(5,tr1);
   drawpoly(5,tr1);

   setfillstyle(1,15);
   fillpoly(5,tr2);
   drawpoly(5,tr2);

   for(i=1;i<=360;i+=15){
       setcolor(1);
   pieslice(225,149.5,i,360,27.5);
   }

   circle(225,149.5,27.5);

   setfillstyle(1,2);
   fillpoly(5,tr3);
   drawpoly(5,tr3);

   setfillstyle(1,14);
   fillpoly(5,poll);
   drawpoly(5,poll);


   setfillstyle(1,6);
   fillpoly(5,bs3);
   drawpoly(5,bs3);

   setfillstyle(1,15);
   fillpoly(5,bs2);
   drawpoly(5,bs2);

   setfillstyle(1,2);
   fillpoly(5,bs1);
   drawpoly(5,bs1);
   setcolor(7);

	 arc(90,99,90,270,50);
	 arc(90,199,270,90,50);
	 arc(90,299,90,270,50);
	 arc(90,399,270,90,50);
	 arc(90,499,90,270,50);

	 setcolor(14);
	 setfillstyle(1,14);
	 pieslice(500,300,0,360,60);
	 setcolor(0);
	 line(470,285,480,285);
	 line(520,285,530,285);
	 arc(500,285,275-45,275+45,50);


	   setcolor(4);
	   setfillstyle(1,4);
	 pieslice(350,350,0,360,60);
	 setcolor(15);
	 circle(325,325,5);
	 circle(375,325,5);
	 line(350,345,350,365);
	 arc(350,335,275-45,275+45,50);

	 setcolor(14);
	 setfillstyle(0,1);
	 settextstyle(10,0,0.5);
	 outtextxy(400,100,"JAI HIND");

getch();
}