#include<stdio.h>
 void main()
 {
   float unit;                       //MP light bill calculator
       printf("Enter the unit");
       scanf("%f",&unit);
   if(unit>=0 && unit<=50)
   {
       unit=(unit*3.25)+45;
       printf("your amount is %f\n",unit);
   }
   else if(unit>50 && unit<=150)
   {
       unit=(unit*4.95)+100;
       printf("your amount is %f\n",unit);
   }
   else if(unit>150 && unit<=300)
   {
       unit=(unit*6.3)+(unit/15)*23;
       printf("your amount is %f\n",unit);
   }
    else if(unit>300)
      {
        unit=(unit*6.5)+(unit/15)*25;
        printf("your amount is %f\n",unit);
      }
   else
   {
       printf("not valid");
   }
 }
