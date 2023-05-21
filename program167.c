// Accept the string from user and count z  in it 
#include<stdio.h>


int Countz(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      if(*str== 'z')  
      {
          iCount++;
      }
        str++;
   }
   return iCount;
}

int main()
{
   char Arr[10];//static memory allocation
   int iRet=0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   iRet=Countz(Arr);

   printf("number  of z in String :%d \n",iRet);
   
   return 0;

}
