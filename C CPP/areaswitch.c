#include <stdio.h>
void main()
{
    int pi,r,a,l,b,ch,ar;
    printf("sleact 1 for area of circle.\n");
    printf("sleact 2 for area of square.\n");
    printf("sleact 3 for area of ractangle.\n");

    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
               printf("Enter the value of r");
               scanf("%d",&r);
               const pi=3.14;
               ar=pi*r*r;
               printf("area of the circle=%d",ar);
        break;

        case 2:
               printf("Enter the value of a");
               scanf("%d",&a);
               ar=a*a;
               printf("area of square =%d",ar);
        break;

        case 3:
               printf("Enter the value of l and b");
               scanf("%d%d",&l,&b);
               ar=l*b;
               printf("area of ractangle =%d",ar);
        break;
        default:
                printf("invlid choice");
    }
}
