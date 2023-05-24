// Accept string from user and copy number of letter specified by user
#include<stdio.h>

void strcpyX(char *src , char *dest ,int iLength)
{
   while((*src != '\0')&& (iLength!=0))
   {
     *dest = *src ;
     src++;
     dest++;
     iLength--;
   }
   *dest = '\0';
}

   
int main()
{
   char Arr [20];
   char Brr [20] ="Demo";
   int iNo = 0;
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   printf("Enter the number of character  you want to copy\n");
   scanf("%d",&iNo);

   strcpyX(Arr , Brr ,iNo);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
