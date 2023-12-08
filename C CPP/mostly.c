#include <stdio.h>
void main()
{
    int r,a,l,b,ch,ar,sum,sub,mult,div,mod,tot,m,s,per,si,c,num,no,no1,no2,n,count,i,sq  ;
    char choice,pi  ;
    do
   {

    printf("select 1 for area of circle.\n");
    printf("select 2 for area of square.\n");
    printf("select 3 for area of rectangle.\n");
    printf("select 4 for addition of two numb.\n");
    printf("select 5 for subtraction.\n");
    printf("select 6 for multiplication.\n");
    printf("select 7 for division.\n");
    printf("select 8 for modulus.\n");
    printf("select 9 for percentage.\n");
    printf("select 10 for tamprechar.\n");
    printf("select 11 for simple interest.\n");
    printf("select 12 for swap two number.\n");
    printf("select 13 for find even or odd no.\n");
    printf("select 14 for find maximum of number.\n");
    printf("select 15 for find pass or fail with division.\n");
    printf("select 16 for find the sum of first and last digit of any number.\n");
    printf("select 17 for find the sum of all digits.\n");
    printf("select 18 for return the reverse print of number.\n");
    printf("select 19 for find the number is palindrome.\n");
    printf("select 20 for find the number is armstrong.\n");
    printf("select 21 for count the digits in number.\n");
    printf("select 22 for print a number series.\n");
    printf("select 23 for print a square series.\n");
    printf("select 24 for print a tabale.\n");
    printf("select 25 for print a fibonacci number series.\n");
    printf("select 26 for print natural number series with skip some number you want to skip.\n");
    printf("select 27 for print prime number series.\n");
    scanf("%d",&ch);


    switch (ch)
    {
    {
        case 1:
            {
               //const pi= 3.14;
               printf("Enter the value of r");
               scanf("%d",&r);
               const float pi= 3.14;
               ar=pi*r*r;
               printf("area of the circle =%d",ar);
            }
        break;

        case 2:
            {
               printf("Enter the value of a");
               scanf("%d",&a);
               ar=a*a;
               printf("area of square =%d",ar);
            }
        break;

        case 3:
              {
               printf("Enter the value of l and b");
               scanf("%d%d",&l,&b);
               ar=l*b;
               printf("area of rectangle =%d",ar);
              }
        break;

        case 4:
            {
               printf("Enter the value of a and b");
               scanf("%d%d",&a,&b);
               sum=a+b;
               printf("addition =%d",sum);
            }
        break;

        case 5:
            {
               printf("Enter the value of a and b");
               scanf("%d%d",&a,&b);
               sub=a-b;
               printf("subtraction =%d",sub);
            }
        break;

        case 6:
             {
               printf("Enter the value of a and b");
               scanf("%d%d",&a,&b);
               mult=a+b;
               printf("multiplication =%d",mult);
             }
        break;

        case 7:
            {
               printf("Enter the value of a and b");
               scanf("%d%d",&a,&b);
               div=a/b;
               printf("division =%d",div);
            }
        break;

        case 8:
            {
               printf("Enter the value of a and b");
               scanf("%d%d",&a,&b);
               mod=a%b;
               printf("modulus =%d",mod);
            }
        break;

        case 9:
            {
               printf("Enter the marks as per subjects \n hindi \neng.\nmath\nsst\nscience\ncumputer\n");
               scanf("%d%d%d%d%d%d",&a,&b,&r,&l,&m,&s);
               tot=a+b+r+l+m+s;
               printf("your total marks is =%d",tot);
               per=tot/6;
               printf("persantge is =%d",per);
            }
        break;

        case 10:
            {
                printf("Enter the ferehenite temperature(you will get output only in integer)");
                scanf("%d",&s);
                a=(s-32)*5/9;
                printf("temperature in centigrade=%d",a);
            }
        break;

        case 11:
            {
                printf("Enter the principal(rs)\nrate(p.a) and\ntime(yr) in sequance");
                scanf("%d%d%d",&a,&r,&b);
                si=(a*r*b)/100;
                printf("principal is =%d\nyour interest is =%d\n",a,si);
                tot=si+a;
                printf("total amount is =%d",tot);
             }
           break;

        case 12:
            {
            printf("Enter the two no. you want to swap no1,no2\n");  //by using two variable = a=a+b; b=a-b; a=a-b; or a=a*b/a;   b= a*b/b; or a=a*b; b=a/b; a=a/b;
            scanf("%d%d",&a,&b);
            printf("no1=%d and no2=%d before swap\n");
            c=a;
            a=b;
            b=c;
            printf("now no1 is = %d and no2 is = %d",a,b);
           }
           break;

        case 13:
            {
                printf("Enter the noumber.");
                scanf("%d",&a);
             if (a%2==0)
             {
                 printf("noumber is even."); // a%2==0? printf("even"):printf("odd");
             }
             else
             {
                 printf("number is odd.");
             }
            }
           break;

        case 14:
            {
              printf("Enter two noumbers no1,no2.\n");
              scanf("%d%d",&a,&b);
              if(a>b)
              {
                  printf("no1 %d is max than no2 %d.",a,b);
              }
              else if (a==b)  // (a>b)?printf("a is max"):a==b?printf("a and b are equal"):printf("b is max");
              {
                  printf("no1 %d and no2 %d are equal.",a,b);
              }
              else
              {
                  printf("no2 %d is max than no1%d.",b,a);
              }
            }
           break;

        case 15:
            {
            printf("Enter the persantag");
            scanf("%d",&per);
            if (per>=0 && per<33)
              {
                  printf("fail");
              }
            else if (per>=33 && per<45)
              {
                  printf("pass by 4th divesion");
              }
            else if (per>=45 && per<60)
              {
                printf("pass by 3rd divesion");
              }
            else if (per>=60 && per<75)
              {
                printf("pass by 2nd divesion");
              }
            else if (per>=75 && per<100)
              {
                printf("pass by 1st divesion");
              }
            else
              {
                printf("invalid");
              }
             }
          break;

        case 16:
            {
                printf("Enter the number");
                scanf("%d",&no);
                no1=no%10;
            while(no>=10)
                 {
                   no=no/10;
                 }
                 sum=no1+no;
                 printf("sum=%d",sum);
               }
          break;
        case 17:
            {
                 printf("Enter the digits to be add.");
                 scanf("%d",&n);
                 sum=0;
                 while (n>0)
                   {
                    a=n%10;
                    sum=sum+a;
                    n=n/10;
                   }
                   printf("sum of all digits=%d",sum);
                }
           break;
        case 18:
            {
              printf("Enter the number");
              scanf("%d",&n);
              sum=0;
            while(n>0)
               {
                a=n%10;
                sum=sum*10+a;
                n=n/10;
               }
            printf("reverse of number=%d",sum);
            }
           break;
        case 19:
            {
             printf("Enter the number.");
             scanf("%d",&n);
             sum=0;
              b = n;
           while(n>0)
             {
                 a=n%10;
                 sum=sum*10+a;
                 n=n/10;

             }
            if (sum == b)
                {
                printf("palindrome");
              }
            else
                {
                  printf("not a palindrome");
                }

             }
           break;
        case 20:
            {
              printf("Enter the number.");
              scanf("%d",&n);
               sum=0;
               b = n;
              while(n>0)
              {
                a=n%10;
                sum=sum+a*a*a;
                n=n/10;
              }
            if (sum==b)
            {
             printf("number is armstrong");
            }
            else
                {
                 printf("not a armstrong number");
                }
            }
           break;

         case 21:
             {
               printf("Enter the number.");
               scanf("%d",&n);
               count=0;
              while (n>0)
              {
                n=n/10;
                count++;
              }
                printf("total digits in number is = %d\n",count);
              }
            break;
         case 22:
             {
                   printf("Enter the number want to print until the number.\n");
                   scanf("%d",&n);
                for(i=1;i<=n;i++)
                  {
                    printf("%d\n",i);
                  }
              }
            break;

         case 23:
             {
                  printf("Enter the number want to print until the number.\n");           //  printf("Enter the number");
                  scanf("%d",&n);                                                          // scanf("%d",&n);
                for(i=1;i<=n;i++)                                                         //for(i=1;i<=n;i++)
                {                                                                         //  {
                    printf("square of %d=%d\n",i,i*i);                                     //   if(i<0){
                }                                                                            //          printf("%d",i*i);
                                                                                            //         }
                                                                                            // else
                                                                                            //    {
                                                                                            //    printf("%d",i*i);
                                                                                            //}
                                                                                            //   }
              }
            break;
         case 24:
             {
                printf("Enter the number");
                scanf("%d",&n);
              for (i=1;i<=10;i++)
                {
                  sq=n*i;
                  printf("%dX%d=%d\n",n,i,sq);
                }
              }
            break;
         case 25:
             {
                 printf("Enter the no. to print fibonacci number.");
                 scanf("%d",&no);
                 int f1=-1,f2=1,f,i;
                 for(i=1;i<=no;i++)
                 {
                     f=f1+f2;
                     printf("%d\n",f);
                       f1=f2;
                       f2=f;

                 }
             }
            break;
         case 26:
             {
                 int i,no,no1;
               printf("Enter two numbers you want to skip.\n");
               scanf("%d%d",&no,&no1);
               for (i=1;i<=1000;i++)
               {
                   if(i==no||i==no1)
                    {
                      continue;
                    }
                printf("%d\t",i);
               }
             }
            break;
         case 27:
             {
                 int i,j,no;
                 printf("Enter the number up to series.");
                 scanf("%d",&no);
                 for(i=2;i<=no;i++)
                  {
                 for(j=2;j<=i;j++)
                  {
                    if(i%j==0)
                        {
                         break;
                        }
                  }
                    if(i==j)
                        {
                         printf("%d\n",i);
                        }
                  }
             }
            break;
    }













    }
            printf("\n press c for main manu.\n");
           getchar();
           scanf("%c",&choice);
    }

    while (choice=='c' || choice=='C');
    }




    /*#include<stdio.h>
void main()

{

int a,b,ch;

            printf("Enter the number");
            scanf("%d%d",&a,&b);
            ch=a<b;
        switch (ch)
        {
            case 0:
                 {
                     ch=a>b;
                  switch(ch)
                    {
                     case 0:
                         {
                            printf("%d and %d are equal",a,b);
                         }
                       break;
                     case 1:
                        {
                          printf("%d is max",a);
                        }
                       break;
                    }
                 }
                break;
            case 1:
                {
                  printf("%d is max",b);
            }
        }
}
            printf("Enter the number");
            scanf("%d",&j);
            for(i=1;i<=j;i++)
            {
                k=k+i;
                printf("sum=%d\n",k);
            }
*/







            //default:
         //   printf("invlid choice");
  // }
//}
             /*{
             printf("Enter the number");
             scanf("%d",&num);
             if (num>0)
             {
               printf("number is positive.");
             }
             else if (num<0)
             {
                 printf("number is negative.");
             }
             else if (num==0)
             {
                 printf("unsigned number.");
             }

             else
             {
                 printf("not a number");
             }
            }*/

