// Accept N mumber from user and Accept one another number and check whether that number conatain in that N number or not return index of Last occurance
#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management


int LastOcc(int Arr[], int iLength, int iNo)
{
 int iCnt = 0;
 int iPos = -1;

 for(iCnt = 0; iCnt <iLength ;iCnt++)
 {
    if(Arr[iCnt]== iNo)
    {
        iPos = iCnt;
    }
 }
 return iPos;
}


int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iValue = 0;
    int iRet=0;
    
    
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
    
    iRet=LastOcc(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such a number");
    }
    else
    {
        printf("First occurance of numberis %d ",iRet);
    }
    free(ptr);

    return 0;    

}  