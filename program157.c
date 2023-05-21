// Accept the string from user and print name until space


#include<stdio.h>


int main()
{
   char Arr[20];//static memory allocation

   printf("Enter your name:\n");
   scanf("%s",Arr);

   printf("your name is: %s\n",Arr);
   
   return 0;

}
