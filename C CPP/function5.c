#include<stdio.h>
// call by refrance
// in call by rafrance if we change the value of formal argumant than value of actual arumant will change.
void show(int *ptr);
void main()
{
    int a=5;
    show(&a);
    printf("value of a=%d.\n",a);
}
void show(int *ptr)
{
    printf("value of a by pointer variable ptr=%d.\n",*ptr);
}
