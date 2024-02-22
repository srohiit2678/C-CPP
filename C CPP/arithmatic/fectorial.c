#include<stdio.h>
void main()
{
    int no,f;
       printf("Enter the number");
       scanf("%d",&no);
       f=fect(no);
       printf("fectorial=%d",f);
}
  fect(int no)
  {
    int f=1,i;
    for(i=1;i<=no;i++)
    {
        f=f*i;
    }
    return f;
  }
