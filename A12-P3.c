// Accept N number from user and return Smallest number 

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management

int Difference(int Arr[], int iLength)
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


  return iMax-iMin;
}



int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *p = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iRet = 0;

    // Step1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);   

    // Step2 : Allocate memory dynamically
    p = (int *)malloc(iSize * sizeof(int));
    
    // Step3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    
    iRet=Difference(p,iSize);
    printf("Difference  %d \n" ,iRet);

    free(p);

    return 0;    

}  