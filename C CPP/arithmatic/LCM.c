#include <stdio.h>
int lcm_fun(int no,int no1);
void main()
{
    int no,no1,lcm;
    printf("Enter the numbers");
    scanf("%d%d",&no,&no1);
    lcm=lcm_fun(no,no1);
    printf("lcm of the number=%d",lcm);
 int lcm_fun(int no,int no1);
}
    lcm_fun(int no,int no1)
  {
      int i,lcm;
      for(i=1;i<=no&&i<=no1;i++)
      {
          lcm=i;
      }
      return lcm ;
  }
