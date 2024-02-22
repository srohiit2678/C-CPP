#include<conio.h>
#include<stdio.h>
#include<graphics.h>

// complete introduction

void main(){
 int gd = DETECT;
       int gm;
       int i;
 clrscr();
       initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	  setcolor(14);
	  rectangle(0,0,639,479);
	  setcolor(3);
	  rectangle(1,1,638,478);
	  setcolor(3);
	  rectangle(2,2,637,477);
	  setcolor(14);
	  rectangle(3,3,636,476);
	  setcolor(4);
	  line(119,11,519,11);
	  setcolor(5);
	  outtextxy(240,19,"--> INTRODUCTION <--");
	  setcolor(4);
	  line(119,32,519,32);
	  setcolor(13);
	  outtextxy(35,55,"Good Evening All...");
	  setcolor(7);
	  outtextxy(55,75,"My name is");
	  setbkcolor(0);
	  settextstyle(0,0,0.5);
	  setcolor(14);
	  outtextxy(140,75,"ROHIT KUMAR OJHA");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(278,75,"and my father's name is");
	  settextstyle(0,0,0.5);
	  setcolor(14);
	  outtextxy(473,75,"Mr.SHREE GOPAL OJHA");
	  setcolor(7);
	  outtextxy(55,95,"and he is a");
	  settextstyle(0,0,0.2);
	  setcolor(6);
	  outtextxy(150,95,"FARMER.");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(210,95,"and my mother's name is");
	  settextstyle(0,0,0.5);
	  setcolor(14);
	  outtextxy(400,95,"Mrs.ANITA OJHA");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(520,95,"and she is");
	  settextstyle(0,0,0.5);
	  setcolor(6);
	  outtextxy(600,95," ho-");
	  outtextxy(55,115,"use wife.");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(130,115,"i have completed my 10th & 12th from");
	  settextstyle(0,0,0.5);
	  setcolor(2);
	  outtextxy(425,115,"RAJASTHAN BOARD.");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(562,115,"curently");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(55,135,"i am pursuing my bachelor's DEGREE in");
	  setcolor(4);
	  line(190,143,326,143);
	  settextstyle(0,0,0.5);
	  setcolor(3);
	  outtextxy(350,135," INFORMATION TECHNOLOGY.");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(530,135,"  i have mai-");
	  outtextxy(55,155,"ntained my CGPA more than 7.i continuously strive to enhance my profici-");
	  setcolor(4);
	  line(140,163,175,163);
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(55,175,"ency in programming. i have good knowladge of");
	  settextstyle(0,0,0.5);
	  setcolor(9);
	  outtextxy(415,175," C/CPP/JAVA");
	  setcolor(4);
	  line(422,183,503,183);
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(500,175," and");
	  settextstyle(0,0,0.5);
	  setcolor(9);
	  outtextxy(530,175," DSA.");
	  setcolor(4);
	  line(537,183,562,183);
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(80,200,"my goal is to become a");
	  settextstyle(0,0,0.5);
	  setcolor(BLUE);
	  outtextxy(265,200,"DEVELOPER");
	  settextstyle(0,0,0);
	  setcolor(7);
	  outtextxy(350,200,"at big MNC company. my HOBBIES are ");
	  settextstyle(0,0,0.8);
	  outtextxy(55,220,"PLAYING CRICKET and BADMINTON, LISTENING to MUSIC and CODING.");


	  setcolor(4);
	  line(119,300,519,300);
	  setcolor(5);
	  outtextxy(200,313,"--> THANK YOU FOR LISTENLING <--");
	  setcolor(4);
	  line(119,330,519,330);
	  line(0,405,650,405);
	  for(i=1;i<=10;i++){
	   setcolor(i+1);
	  if(i%2==1){
	  arc(100*i,405,0,180,50);
	 }
       else
	 {
	  arc(100*i,405,180,361,50);
	  }
	}

	// line(200,300,503,300);




      // outtextxy(632,472,"r");
 getch();
}



