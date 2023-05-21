/*Input:
  rows:3
  Columns :5
 Output: 
        * * * * *
        * * * * *
        * * * * *
        

*/
#include<stdio.h>   

void Display(int iRow , int iCol)
{
     int i = 0 , j = 0;

     //     1        2      3
     for(i = 1; i <= iRow ;i ++)//Outer loop

     {
        //     1        2     3
        for(j = 1;j<= iCol ; j++)// Inner loop
        {
            printf("*\t");// 4
        }
         printf("\n");
     }
    
    
    
}

int main()
{
    int iValue1 = 0 ; 
    int iValue2 = 0;

    printf("Enter the no of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the no of Columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}
