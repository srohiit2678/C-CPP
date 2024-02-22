#include <stdio.h>
int hcf_fun(int no,int no1);
void main()
{
    int no,no1,hcf;
    printf("Enter the numbers");
    scanf("%d%d",&no,&no1);
    hcf=hcf_fun(no,no1);
    printf("lcm of the number=%d",hcf);
 int hcf_fun(int no,int no1);
}
    hcf_fun(int no,int no1)
  {
      int i,hcf;
      for(i=1;i<=no&&i<=no1;i++)
      {
          if(no%i==0 &&no1%i==0)
          {
           hcf=i;
      }
      }
      return hcf ;
  }

