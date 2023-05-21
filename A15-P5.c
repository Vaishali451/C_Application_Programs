/*
input:  iRow= 3   iCol = 4
Output :  1     1     1   1
          2     2     2   2
          3     3     3   3 
         
*/

#include<stdio.h>

void Pattern( int iRow , int iCol)
{
   int i = 0 , j = 0;

     //     1        2      3
     for(i = 1; i <= iRow ;i ++)//Outer loop

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