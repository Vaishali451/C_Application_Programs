// Accept two string from user and concate number of letter specified by user
#include<stdio.h>

void strNcatX(char *src , char *dest ,int iLength)
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
       iLength--;
       if(iLength==0)
       {
        break;
       }
  }
   //steps 3 : write'\0' at the end of dest
  *dest = '\0';
}
   
int main()
{
   char Arr [20];
   char Brr [20] ="Demo";
   int iNo = 0;
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   printf("Enter the number of letter you want to concate\n");
   scanf("%d",&iNo);

   strNcatX(Arr , Brr ,iNo);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
