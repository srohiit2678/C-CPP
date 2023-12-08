#include <stdio.h>
void main()
{
 int amt,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
  printf("Enter the amount");
  scanf("%d",&amt);

 if (amt>=2000)
 {
   n2000=amt/2000;
   printf("2000/- note is = %d\n",n2000);
   amt=amt-n2000*2000;
 }
 if (amt>=500)
 {
     n500=amt/500;
     printf("500/- note is = %d\n",n500);
     amt=amt-n500*500;
 }
 if (amt>=200)
 {
     n200=amt/200;
     printf("200/- note is = %d\n",n200);
     amt=amt-n200*200;
 }
 if (amt>=100)
 {
     n100=amt/100;
     printf("100/- note is = %d\n",n100);
     amt=amt-n100*100;
 }
 if (amt>=50)
 {
     n50=amt/50;
     printf("50/- note is = %d\n",n50);
     amt=amt-n50*50;
 }
 if (amt>=20)
 {
    n20=amt/20;
    printf("20/- note is = %d\n",n20);
    amt=amt-n20*20;
 }
 if (amt>=10)
 {
     n10=amt/10;
     printf("10/- note is = %d\n",n10);
     amt=amt-n10*10;
 }
 if (amt>=5)
   {
     n5=amt/5;
     printf("5/- note is = %d\n",n5);
     amt=amt-n5*5;
   }
 if (amt>=2)
   {
       n2=amt/2;
       printf("2/- note is = %d\n",n2);
       amt=amt-n2*2;
   }
 if (amt>=1)
   {
       n1=amt/1;
       printf("1/- note is = %d\n",n1);
   }
}
