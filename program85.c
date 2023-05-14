// Find Largest as well as smallest element from the Given N number (With 2N time Comlexity)

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management

int  Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin= Arr[0];
   
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    

    return iMin;
}

int  Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax= Arr[0];
   
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    

    return iMax;
}

int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iRet = 0;

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

    iRet=Maximum(ptr,iSize);
    printf("Largest Number is: %d \n" ,iRet);
    
    iRet=Minimum(ptr,iSize);
    printf("Smallest Number is:%d \n" ,iRet);

    free(ptr);

    return 0;    

}  