// Find Largest as well as smallest element from the Given N number ( With N Time Complexity)

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management

void  MinimumMaximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin= Arr[0];
    int iMax= Arr[0];
   
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMin)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Largest Element is:%d\n",iMax);
    printf("Smallest Element is:%d\n",iMin);
   
}

int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter

    // Step1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);   

    // Step2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));
    
    // Step3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
 
    MinimumMaximum(ptr, iSize);

    free(ptr);

    return 0;    

}  