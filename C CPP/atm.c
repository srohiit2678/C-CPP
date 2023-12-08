#include<stdio.h>
void main()
{
 int amt,ch,bal=5000;
 char choice;
   {
    printf("press 1 for deposit amount\n");
    printf("press 2 for withdrawal cash\n");
    printf("press 3 for showing balance\n");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
        {
            printf("Enter the amount to be deposit");
            scanf("%d",&amt);
          if(amt>0)
           {
             bal=bal+amt;
             printf("amount deposit =%d,\n",amt);
             printf("total amount is =%d\n",bal);
           }
          else
           {
             printf("invalid amount");
           }

       break;
        }
     case 2:
        {
            printf("Enter the amount to be withdrawal\n");
            scanf("%d",&amt);
          if(amt>0 && amt<=bal)
           {
             bal=bal-amt;
             printf("amount withdrawal =%d\n",amt);
             printf("total balance =%d\n",bal);
           }
           else
            {
              printf("invalid amount");
            }
       break;
        }
     case 3:
        {
         printf("total balance =%d\n",bal);
        }
       break;
        }
    getchar();  //for enroll 'char'
       scanf("%c",&choice);
    }
    while (choice=='y'||choice=='Y');
}
