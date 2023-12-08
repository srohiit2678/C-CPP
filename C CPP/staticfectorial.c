#include<stdio.h>
void show(no);
void main()
 {
    int no;
     printf("enter the num");
     scanf("%d",&no);
     show(no);
 }
  void show(int no)
  {
      static int fect=1;

    if(no>0)
      {
          fect=fect*no;
          show(no-1);
      }
    else
      {
        printf("fect=%d",fect);
      }
  }
