// Accept the string from user and print number of character using inbuilt function
#include<stdio.h>
#include<string.h>


int main()
{
   char Arr[10];//static memory allocation
   int iRet=0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   iRet=strlen(Arr);

   printf("Lenght of String is:%d \n",iRet);
   
   return 0;

}
