// Accept string from user and check frequency of capital as well as small character
#include<stdio.h>
#define ERR_NOTFOUND -1

void Frequency(char *str )
{
  int iCapCnt = 0;
  int ismallCnt = 0;
 

  while(*str !='\0')
  {
    if((*str >='a' ) && (*str <='z' ))
    {
       ismallCnt++;
    }
    else if((*str >='A' ) && (*str <='Z' ))
    {
      iCapCnt++;
    }

   str++;

  }
  printf("Small Case characters count:%d\n",ismallCnt);
  printf("capital Case characters count:%d\n",iCapCnt);
}
   
int main()
{
   char Arr [20];
  
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   Frequency(Arr);

   return 0;
   
}
