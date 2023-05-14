//Accept N numbers from user and 

#include<stdio.h>
#include<stdlib.h>   // for malloc() and free function



int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of Elements:\n");// step1
    scanf("%d",&iSize);
   
    ptr = (int*)malloc(iSize*sizeof(int)); // step2
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return-1;
    }

    printf("Memory allocated Succesfully..\n");
    return 0;
}
