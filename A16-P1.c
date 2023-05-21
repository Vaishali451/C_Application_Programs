/*
input:  iRow= 4   iCol = 4
Output : A B C D
         A B C D
         A B C D
         A B C D
  
*/

#include<stdio.h>

void Pattern( int iRow , int iCol)
{
   int i = 0, j = 0;

    char ch = '\0';

    //    1       2        3
    for(i = 1; i<= iRow; i++)   // Outer
    {   //    1         2       3 
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)  // Inner
        {
            printf("%c\t",ch);  // 4
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