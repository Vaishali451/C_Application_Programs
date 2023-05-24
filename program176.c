// Accept string from user and replace every whitespace by _
#include<stdio.h>

void EditString(char *str )
{

  while(*str !='\0')
  {
    if((*str ==' ' ) )
    {
       *str ='_';
    }

   str++;
  }

}
   
int main()
{
   char Arr [20];
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   EditString(Arr);

   printf("String After editing is:%s\n",Arr);

   return 0;
   
}
