//accept number from user return no of digits of that number
#include<stdio.h>
int CountDigits(int iNo)
{
    int iCnt=0;
    while(iNo !=0)
    {
        iNo=iNo/10;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);
    printf("Number of digits in number %d are %d",iValue,iRet);
    return 0;
}