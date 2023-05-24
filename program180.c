// Accept string from user and replace small with its respective Capital letter  a->A
#include<stdio.h>


void struprX(char *str )
{

  while(*str !='\0')
  {
    if((*str >='a' ) &&(*str<='z') )
    {
       *str =*str-32;
    }
    
   str++;
  }

}
   
int main()
{
   char Arr [20];
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   struprX(Arr);

   printf("String After editing is:%s\n",Arr);

   return 0;
   
}
