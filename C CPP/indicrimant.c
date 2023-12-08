#include<stdio.h>
 void main()
 {
   int a=5;
   printf("%d\n",++a);   //'pre incrimant' incress value by adding 'one' in the same line.'6'
   printf("%d\n",a++);    //this line remans same becouse we had used 'post incrimant' this 'opreater' add value in next line'6'
   printf("%d\n",a);       //in this line value incress by one and value will be '7'
   printf("%d\n",--a);   //'pre dicrimant' dicress value by 'one' and value will be '6'
   printf("%d\n",++a);    //'7'
   printf("%d\n",++a);     //'8'
   printf("%d\n",++a);    //'9'
   printf("%d\n",++a);   //'10'
   printf("%d\n",++a);   //  '11'
   printf("%d\n",a--);    //'11'
   printf("%d\n",a--);  //'10'
   printf("%d\n",a);    //'9'
   printf("%d\n",a--);   //'9'
   printf("%d\n",a--);    //'8'
   printf("%d\n",a--);  //'7'
   printf("%d\n",a--);   //'6' becouse after this line we are adding one more line
   printf("%d\n",a--);   //'5' due to post dicrimant value does not dicress.
 }
