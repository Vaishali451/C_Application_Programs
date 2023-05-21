/*
input:  iRow= 4   iCol = 5
Output :  4       4       4       4       4
          3       3       3       3       3
          2       2       2       2       2
          1       1       1       1       1

*/

#include<stdio.h>

void Pattern( int iRow , int iCol)
{
   int i = 0 , j = 0;

     //     1        2      3
     for(i = iRow; i >= 1 ;i --)//Outer loop

     {
        //     1        2     3
        for(j = 1;j<= iCol ; j++)// Inner loop
        {
            printf("%d\t",i);// 4
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