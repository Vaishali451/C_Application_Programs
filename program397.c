/*

Read the data From the file

int read(int FD , char*Data , int Size);

FD:File Descriptor returned by open
Data:Name of array/String which is Empty
Size:Number of bytes that you want to read

Return Value:Number of bytes successfully written in the file

*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int fd=0;
   char Fname[30];
   int iRet=0;
   char Arr[50] = {'\0'};

   printf("Enter the file name that you want to open \n");
   scanf("%s",Fname);

   fd= open(Fname,O_RDWR ) ;

   if(fd==-1)
   {

    printf("Unable to open the file\n");
    return -1;

   }
   iRet = read(fd,Arr,5);

   printf("%d bytes gets successfully fetched from the file\n",iRet);
  
   printf("Data  from file is: %s\n" , Arr);

   close(fd);
   return 0;
}