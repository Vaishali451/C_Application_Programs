/*
input: 8
Output : 2 4  6  8  10 12 16
*/

#include<stdio.h>

void Pattern( int iNo)
{
      int iCnt = 0;

     for (iCnt=1 ; iCnt <= iNo ; iCnt ++)
     {

        printf(" %d \t  ", 2*iCnt);
        
     } 
    printf("\n");
}

int main()
{
    int iValue= 0;
    printf("Enter Number of elements");
    scanf("%d",& iValue);

    Pattern(iValue);

    return 0;
}