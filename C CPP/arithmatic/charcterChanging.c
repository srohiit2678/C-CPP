#include<stdio.h>
 int main()
 {
     char ch;

     printf("Enter the charcter ");
     scanf("%c",&ch);

     if(ch>='A' && ch<='Z')
     {
         printf("upper case char.\n\n");
     }
     else if (ch>='a' && ch<='z')
     {
         printf("lower case char.\n\n");
     }
     else
     {
         printf("not an alphabate\n");
     }
     if(ch>='A' && ch<='Z')
     {
     ch=ch+32;
     printf("lower case is %c\n",ch);
     }
     else if(ch>='a' && ch<='z')
     {
         ch=ch-32;
         printf("upper case is %c\n",ch);
     }
     else
     {
         printf("not an alphabate");
     }


return 0;
 }
