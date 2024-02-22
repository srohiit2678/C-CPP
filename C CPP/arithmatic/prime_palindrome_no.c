#include <stdio.h>
#include <conio.h>

//prime palindrome no in any range

    int isPrime(int n){
      int i,c= 1;
        for(i=2;i<n;i++){
         if(n%i == 0){
	     c = 0;
       }
      }
    return c;
     }
   int isPalindrome(int n){
      int n1=n;
      int a,s=0;
       while(n != 0){
         a= n%10;
         s=s*10+a;
         n=n/10;
      }
   return n1==s;
    }

void main()
{       int i;
	
      
       for(i=1;i<=100000;i++){
        if(isPrime(i)&&isPalindrome(i)){
	        printf("%d\n",i);
         }
       }
}






