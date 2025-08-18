#include <stdio.h>
/*
if(-00){
printf("true");
}
*/

int is_prime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

struct Rect{
  int len; // 4byte
  int bre; // 4byte
  char x;  // 4byte
}r;

int main()
{
  
  int pattern = 1;
  int n = 5;
  printf("Enter the number of rows");
  //.     scanf("%d",&n);



  
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 1; j <= 5; j++)
  
      {
        printf(" %d", i*j);
      }
      printf("\n");
    }
    
  

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = i; k > 1; k--)
    {
      printf(" ");
    }
    for (int j = n; j >= i; j--)
    {
      printf("%d", j);
    }
    for (int x = i + 1; x <= n; x++)
    {
      printf("%d", x);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = i; k > 1; k--)
    {
      printf(" ");
    }
    for (int j = (n - i + 1); j <= ((n - i) * 2) + 1; j++)
    {
      printf("%d", j);
    }
    for (int x = (n - i) * 2; x > n - i; x--)
    {
      printf("%d", x);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = i; k > 1; k--)
    {
      printf(" ");
    }
    for (int j = 1; j <= ((n - i) * 2 + 1); j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j < i * 2; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (int j = n; j > n - i; j--)
    {
      printf("%d", j);
    }
    for (int x = 1; x <= n; x++)
    {
      if (x > n - i + 1)
      {
        printf("%d", x);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (int j = i; j < (i * 2); j++)
    {
      printf("%d", j);
    }
    for (int x = (i * 2 - 2); x >= i; x--)
    {
      printf("%d", x);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= (i * 2) - 1; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n * 2; i++, i++)
  {
    for (int k = 1; k <= n * 2 - i; k++, k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i % 2 == 0)
      {
        printf(" %d", j);
      }
      else
      {
        printf(" %d", i);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == 2)
      {
        printf(" %d", j);
      }
      else if (i % 4 == 0)
      {
        printf(" %d", (i / 2 * j));
      }
      else
      {
        printf(" %d", i * j);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((i == 1 || i == n) || (j == 1 || j == n))
      {
        printf(" *");
      }
      else
      {
        printf(" %d", j);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      for (int j = 1; j <= n; j++)
      {
        printf("%d", j);
      }
      printf("\n");
    }
    if (i % 2 == 0)
    {
      for (int j = n; j >= 1; j--)
      {
        printf("%d", j);
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i % 2 != 0)
      {
        if (j % 2 == 0)
        {
          printf(" *");
        }
        else
        {
          printf(" %d", j);
        }
      }
      if (i % 2 == 0)
      {
        if (j % 2 != 0)
          printf(" *");
        else
        {
          printf(" %d", j);
        }
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
      {
        printf(" 0");
      }
      else
      {
        printf(" %d", j);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n * 2; i++)
  {
    for (int k = 1; k <= i; k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= n * 2; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n * 2; i++)
  {
    if (i % 2 == 0)
    {
      printf(" ");
    }
    for (int j = 1; j <= n * 2; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  {
    int number = 0;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        if (number == 3)
        {
          number = 0;
        }
        printf(" %d", number);
        number++;
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  {
    int number = 0;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        if (number == 5)
        {
          number = 0;
        }
        printf(" %d", number);
        number++;
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  int not_prime_number = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      // function at line number 8
      while (is_prime(not_prime_number))
      {
        not_prime_number++;
      }
      printf(" %d", not_prime_number);
      not_prime_number++;
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  int prime_number = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      // function at line number 8
      while (!is_prime(prime_number))
      {
        prime_number++;
      }
      printf(" %d", prime_number);
      prime_number++;
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  {
    long int fibo1 = -1, fibo2 = 1, fibonacci = 0;

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf(" %ld ", fibonacci);
        fibo1 = fibo2;
        fibo2 = fibonacci;
        fibonacci = fibo1 + fibo2;
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = n; j >= i; j--)
    {
      printf(" %d", i);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" %d", i);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf(" %d", i);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
        printf(" 1");
      else
        printf(" 0");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      if ((i + j) % 2 != 0)
        printf(" 1");
      else
        printf(" 0");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
        printf(" 1");
      else
        printf(" 0");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j % 2 == 0)
        printf(" 0");
      else
        printf(" 1");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  {
    int same;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        same = i;
        if (j <= i)
          printf(" %d", same);
        else
          printf(" %d", j);
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i % 2 != 0)
        printf(" %d", j);
      else
        printf(" *");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j <= i)
        printf(" %d", j);
      else
        printf(" *");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      printf(" *");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" *");
    }
    printf("\n");
  }

  printf("%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf(" *");
    }
    printf("\n");
  }

  printf("%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = (i + 1); j <= (n + i); j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = i; j <= n; j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = n; j >= i; j--)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n + 1; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if ((j >= i) == 1)
      {
        printf(" %d", (n + 1));
      }
      else
      {
        printf(" %d", j);
      }
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= i; j--)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = n; j >= 1; j--)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = i; j >= 1; j--)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n + 1 - i); j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      printf(" %d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int k = i; k <= (n - 1); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int k = i; k <= (n - 1); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  {
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf(" %d", x);
        x++;
      }
      printf("\n");
    }
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= (n - i); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int k = i; k <= (n - 1); k++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" %c", 64 + j);
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n%d.\n\n", pattern++);

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" %c", 64 + j);
    }
    printf("\n");
  }
  printf("\n");
  {

    int number, count = 0,  sum = 0, reminder = 1, temp;
    printf("enter the no : ");
    scanf(" %d", &number);
    temp = number;
    while (number > 0)
    {
      count++;
      reminder = number % 10;
      // int bh = 0
      // r=bh;
      sum = sum + (reminder * reminder * reminder);
      number = number / 10;

      // printf("%d\n",bh);
    }
    // printf("%d\n",cot);
    // printf("%d",sum);
    if (sum == temp)
    {
      printf("yes armstrong ");
    }
    else
    {
      printf("not armstrong ");
    }
  }

  return 0;
}