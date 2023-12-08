#include<stdio.h>
void main()
{
    int a[]={2,3,5,7,9,11,13,17};
    int no,f,l,m;
    f=0;
    l=7;
    m=(f+l)/2;
    printf("Enter the number.\n");
    scanf("%d",&no);
    while(f<=l)
    {
        if(a[m]<no)
        {
            f=m+1;
        }
        else if(a[m]==no)
        {
            printf("no found");
            break;
        }
        else
        {
         l=m-1;
        }
        m=(f+l)/2;
    }
    if (f>l)
    {
        printf("not found");
    }
  }
