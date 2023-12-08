#include<stdio.h>
void main()
{
  int si,p,r,t;
  printf("Enter the princpal rate and time");
  scanf("%d%d%d",&p,&r,&t);
  si=(p*r*t)/100;
  printf("simple intrest = %d",si);
}
