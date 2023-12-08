#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a,b;
    printf("Enter the value of a and b.\n");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d befor swap in main.\n",a,b);
    swap(a,b);
    printf("a=%d and b=%d after swap in main.\n");
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d after swap in function.\n",a,b);
}
