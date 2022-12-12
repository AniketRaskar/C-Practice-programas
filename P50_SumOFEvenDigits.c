//accept no from user and find summation of even digits in it
#include<stdio.h>
int SumEvenDigits(int iNo)
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
        if((iDigit%2)==0)
        {
        iSum=iSum+iDigit;
        printf("%d \n",iDigit);
        }
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

    iRet=SumEvenDigits(iValue);
    printf("Summation of even digits in number %d are %d",iValue,iRet);
    return 0;
}