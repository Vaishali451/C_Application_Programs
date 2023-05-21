// Accept N number from user and return all such a element which contains 3 digit in it

#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management


 bool Digit(intArr[],int iLength)
 {
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iLength)
        {
            break;
        }
        iNo = iNo / 10;
    }
    
    if(iNo == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}




int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *p = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter
    int iLength=0;
   
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);   

  
    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
      printf("Unable to allocate memory");
      return -1;
    }
    
    printf("Enter the elements %d : ",iLength);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    
   bRet = Digit(iValue);
    if(bRet == true)
    {
        printf("Digit 3 is present in number\n");
    }
    else
    {
        printf("Digit 3 is not present in number\n");
    }



    free(p);

    return 0;    

}  