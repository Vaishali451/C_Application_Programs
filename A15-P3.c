/*
input:  iRow= 3   iCol = 5
Output : 5     4   3    2    1
         5     4   3    2    1
         5     4   3    2    1
*/

#include<stdio.h>

void Pattern( int iRow , int iCol)
{
   int i = 0 , j = 0;

     //     1        2      3
     for(i = 1; i <= iRow ;i ++)//Outer loop

     {
        //     1        2     3
        for(j = iCol;j>= 1 ; j--)// Inner loop
        {
            printf("%d\t",j);// 4
        }
         printf("\n");
     }
}

int main()
{
    int iValue1= 0;  int iValue2 = 0;
    printf("Enter Number of Rows and Columns");
    scanf("%d %d",& iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}