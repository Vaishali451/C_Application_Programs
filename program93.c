// Accept N mumber from user and Accept one another numberand if that number contain in that N number  then 
// return its Last index value (Backward Traversal)

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management
#define ERR_NOTFOUND -1 

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
 int iCnt = 0;

 for(iCnt = iLength-1; iCnt >= 0 ;iCnt--)
 {
    if(Arr[iCnt]== iNo)
    {
        break;
    }
 }
 return iCnt;
}
int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iValue = 0;
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
    
    printf("Enter the element that you want to search:\n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet=SearchLastOccurance(ptr,iSize,iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("%d occured at index %d\n",iValue ,iRet);
    }

    free(ptr);

    return 0;    

}  