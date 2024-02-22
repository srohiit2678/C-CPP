#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int* ptr,i;
    ptr = &a[0];
    for(i=1;i<=5;i++)
    {
        if(*ptr%2==0)
        {
       // printf("%d\n",*ptr);
        ptr++;
        }
        else if (i==2)
         {
          printf("%d\n",*ptr);
          ptr++;
         }
         else
         {
             printf("%d\n",*ptr);
             ptr++;
         }
    }
}
