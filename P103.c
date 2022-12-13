
/*
row-4,col-4
*
*   *
*   *   *
*   *   *   *

*/

//program 101 with ankhi best complevity about n/2
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=i;j++)  
        {
            
                printf("*\t");
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the no of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the no of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}