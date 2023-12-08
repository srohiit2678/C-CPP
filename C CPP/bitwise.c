#include <stdio.h>
void main()
{
  int a=5,b=4;
  printf("%d\n",a^b);       //a=5=0101
  //printf("%d\n",a+b);                          //b=4=0100                //'&'if all is one it return 1,if all is zero it return 0;                            b=4=0100        //'|' if one is true it return 1;
  //printf("%d\n",a-b);                          //a&b=0100=4     //'^' if bit are diffrent it return 1 and if bit are
  printf("%d\n",a|b);                           //same it return 0;
  //printf("%d\n",a*b);
  printf("%d\n",a&b);
  //printf("%d\n",a/b);
  //printf("%d\n",a%b);
}
