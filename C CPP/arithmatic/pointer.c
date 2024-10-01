#include<stdio.h>
//if you want to store address of any variable than you have to make a pointer variable.to create a pointer variable we use astric(*) symbol befor its variable.
//* = value at the address.
void main()
{
   int a=1;
   int *b;
      b=&a;
b=(int *)malloc(5*sizeof(int));
for(int i=0;i<5;i++){
   printf("%d\n",b[i]);
}
      // printf("value of a=%d\n",a);
      // printf("address of a=%p\n",&a);
      // printf("address of a by b=%ds\n",b);
      // printf("value of a by pointer b=%d\n",*b);
}
