// Accept string from user and concate that strings
#include<stdio.h>

 //steps 1 : till end of dest
 //steps 2 : copy the data from src to dest
  //steps 3 : write'\0' at the end of dest
void strcatX(char *src , char *dest )
{
   
 //steps 1 : till end of dest
 while(*dest !='\0')
 {
   dest++;
 }

  //steps 2 : copy the data from src to dest
  while(*src !='\0')
  {
   *dest=*src;
   dest++;
   src++;
  }
   //steps 3 : write'\0' at the end of dest
  *dest = '\0';
}
   
int main()
{
   char Arr [20];
   char Brr [20] ="Demo";
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   strcatX(Arr , Brr);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
