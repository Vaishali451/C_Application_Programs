// Accept N mumber from user and Accept one another number and check whether that number conatain in that N number or not (Linear Searching)
// with flag
#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management
#include<stdbool.h> // for true and false

bool Search(int Arr[], int iLength, int iNo)
{
    bool bFlag= false;

    int iCnt = 0;
    
   
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;

            break;
        }
    }
    return bFlag;

}

int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iValue = 0;
    bool bRet = false;
    
    
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
    
    printf("Enter the element that you want to search:\n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    bRet=Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the Array\n",iValue);
    }
    else
    {
        printf("%d is not present in the Array\n",iValue);
    }
    free(ptr);

    return 0;    

}  