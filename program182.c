// Accept string from user and replace capital to small and small to capital(Toggle case)
#include<stdio.h>


void strtoggleX(char *str )
{

  int Gap = 'a'-'A';

  while(*str !='\0')
  {
    if((*str >='a' ) && (*str <='z') )
    {
       *str =*str - Gap;
    }
    else if((*str >='A' ) && (*str <='Z') )
    {
       *str =*str + Gap;
    }
    
   str++;
  }

}
   
int main()
{
   char Arr [20];
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   strtoggleX(Arr);

   printf("String After editing is:%s\n",Arr);

   return 0;
   
}
