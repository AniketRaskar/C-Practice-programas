//forward declaration and backward declaration

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d \n",iCnt);
    }
}
void DisplayB(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    printf("Forward display");
    DisplayF(iValue);

    printf("Backward Display");
    DisplayB(iValue);
    return 0;
}