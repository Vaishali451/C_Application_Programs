//Accept N numbers from user and 

#include<stdio.h> // I/O
#include<stdlib.h>   // for memory management

void Demo(int Arr[], int iLenght)
{
  // step 5:Perform the operation on array
}

int main()           // Entry Point Function
{
     int iSize = 0 ;     // to Store size of array
     int *ptr = NULL;   // To store address of array
     int iCnt = 0;        // LOOP Counter


     //Step1: Accept the number of elements from user
     printf("Enter number of elements :\n");
     scanf("%d",&iSize);

     // Step2: Allocate the memory dynamically
     ptr = (int *)malloc (iSize *sizeof(int));

     // Step 3: Accept the values from user
     printf("Enter the elements:\n");
     for(iCnt =0; iCnt<iSize ;iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }
     
     printf("Elements of Array are:\n");
     for(iCnt =0; iCnt < iSize ;iCnt++)
     {
          printf("%d\n",ptr[iCnt]);
     }

      // step 4: Pass the array to the function
      Demo(ptr,iSize);

      // step6:Deallocate the memory of array
      free (ptr);

     return 0;       // Return success to OS 
}
