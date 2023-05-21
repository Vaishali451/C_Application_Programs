/*
    Input : 

    Row : 5
    Col : 5

    Output : 
    1       2       3       4       5
    1       2                       5
    1               3               5
    1                       4       5
    1       2       3       4       5
            
            
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
    for(i = 1; i<= iRow; i++)   // Outer
    {   //    1         2       3 
        for(j = 1; j <= iCol; j++)  // Inner
        {
            if((i==1)  || (i==iRow) || ( (i==j) ))
            {
                printf("%d\t",j);
            }
           
            else if((j==1)||(j==iCol))
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}
    

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and Columns : \n");
    scanf("%d %d",&iValue1 , &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}