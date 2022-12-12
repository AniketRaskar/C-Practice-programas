//accept no from user and return summation of digits

#include<stdio.h>
int SumDigits(int iNo)
{
    if(iNo<0)
    {
        iNo= -iNo;
    }
    int iDigit=0;
    int iSum=0;
    int iCnt=0;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet=SumDigits(iValue);
    printf("Summation of digits in number %d are %d",iValue,iRet);
    return 0;
}