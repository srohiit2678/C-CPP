#include<stdio.h>
void area_c();
void area_r();
void main()
{
     area_c();
     area_r();
}
void area_c()
{
    float pi=3.14,r,a;
    printf("Enter the value of r.\n");
    scanf("%f",&r);
    a=pi*r*r;
    printf("area of circle=%f\n",a);
}
void area_r()
{
    float a,l,b;
    printf("Enter the l and b.\n");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("area of ractangle=%f\n",a);
}
