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
