//Input:7
// Output: a b c d e f

//Input: 3
// Output: a b c 

#include<stdio.h>   

void Display(int iNo)
{
     int iCnt = 0;
     char ch = 'a';

     for (iCnt=1 ; iCnt <= iNo ; iCnt ++)
     {

        printf(" %C \t ", ch);
        ch++;
     } 
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of Symbol:\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}
