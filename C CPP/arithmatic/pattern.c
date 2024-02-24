#include <stdio.h>
void main()
{
  int i,j,no;

  for (i=1;i<=31;i++)
  {
      no=1;
    for(j=1;j>=i;j++)
    {

        printf("%d",no);
        no++;

    }
    printf("\n");
  }

}



/*
int n = 5 ,a,b,c;
  for(int i = 0; i < n; i++)
    {
          printf("1 ");
          a=0;
          b=1;
      for(int j = 1; j <= i; j++)
        {
            c = a+b;    
            printf("%d ",c);
              a=b;
              b=c;
              c=a;
      }
      printf("\n");
}

*/

















// int main()
// { 
//   int n=11;
// for (int i = 1; i <= n; i++)
// {
//   for (int j = 1; j <= n; j++)
//   {
//    if((j-i == (n/2))|| (i-j == (n/2)) || (i+j == (n+(n/2+1))) || (i+j ==(n/2+2)))
//    {
//     printf("* ");
//    }
//    else{
//     printf("  ");
//    }
//   }
//    printf("\n");
// }
// return 0;
// }



// for (int i = 1; i <= 9; i++)
//  { 
//    for (int j = 1; j <=i; j++)
//    {if (i+j<=10)
//    {
   
//     printf("*");
    
//    }
//  } 
//   printf("\n");

// }
