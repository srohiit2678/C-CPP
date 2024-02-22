#include<stdio.h> //
void show(); //proto type or function decleration.
void main()
{
    printf("i am in function.\n");
    show(); //function calling.
    printf("I AM BACK IN MAIN FUNCTION.\n");
}
void show()  //define the function
{
    printf("i am in show function.\n");
}
