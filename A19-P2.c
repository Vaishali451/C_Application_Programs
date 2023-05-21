//Accept Number of rows and columns From user and Display Below Pattern 
/*
  Input:
  iRow = 4
  iCol = 4

  output:
  *  *  *   *
  *  *  *
  *  *
  *
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
 
    //    1       2        3
    for(i = iRow; i>= 1; i--)   // Outer    // 4    3   2   1   
    {  //    1         2       3 
        for(j = 1; j <= i; j++)  // Inner
        { 
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and Columns \n");
    scanf("%d %d ",&iValue1,& iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}