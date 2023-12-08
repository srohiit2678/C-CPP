#include<stdio.h>
// pera matraise function = 'call by value/pass by value' in the call by value we pass all the copy of actual argumant which known as formal argumant.
 void max(int a,int b);
 void main()
 {
     int a,b;
     printf("Enter the value of a and b.\n");
     scanf("%d%d",&a,&b);
     max(a,b);
 }
 void max(int a,int b)
 {
     if(a>b)
     {
         printf("a is max.\n");
     }
     else if(a==b)
     {
         printf("both are same.\n");
     }
     else
     {
         printf("b is max.\n");
     }
 }
