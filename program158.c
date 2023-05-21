// Accept the string from user and print that complete name

#include<stdio.h>


int main()
{
   char Arr[20];//static memory allocation

   printf("Enter your name:\n");
   scanf("%[^'\n']s",Arr); // giving instuction to scanf Accept the input until get enter

   printf("your name is: %s\n",Arr);
   
   return 0;

}
