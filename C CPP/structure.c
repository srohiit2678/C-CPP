#include<stdio.h>
// in this program we store data of same students.
struct student
{
 char name[25];
 int age;
 int rollno;
// int total_fees=75000;
  struct std_fees
   {
    int fees;
    }f[2];
}s[2];

void main()
{
    int i;
    int total_fees=75000;
    for(i=0;i<=1;i++)
    {
        printf("Enter the student name age and rollNo & fees\n");
        scanf("%s%d%d%d",s[i].name,&s[i].age,&s[i].rollno,&s[i].f[i].fees);
    }
    printf("name\t age\t rollNo\t fees\n");
    for(i=0;i<=1;i++)
      {
          if(s[i].f[i].fees<total_fees)
          {
            printf("%s\t%d\t%d\t%d\n",s[i].name,s[i].age,s[i].rollno,s[i].f[i].fees);
          }
      }
}
