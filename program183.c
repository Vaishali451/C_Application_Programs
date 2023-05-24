// Accept string from user and copy that data into another string
#include<stdio.h>

void strcpyX(char *src , char *dest )
{
   while(*src != '\0')
   {
   *dest = *src ;
   src++;
   dest++;
   }
   *dest = '\0';
}

   
int main()
{
   char Arr [20];
   char Brr [20];
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   strcpyX(Arr , Brr);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
