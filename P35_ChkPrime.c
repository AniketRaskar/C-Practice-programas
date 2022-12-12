//Accept the number from user and cheak wheather it is prime or not, which dosen't have any factor except itself and 1

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=2;iCnt<= iNo/2; iCnt++)
    {
        if((iNo%iCnt)==0)
        iFactCnt++;

    }
    return iFactCnt;
}
bool CheakPrime(int iNo)
{
    int iRet=0;
    iRet=CountFactor(iNo);
        if(iRet==0)
        {
            return true;
        }
        else
        {
            return false;
        }
}
int main()
{
    bool bRet;
    int iValue=0;
    int iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheakPrime(iValue);

    if(bRet==true)
    {
        printf("%d Number is perfect",iValue);
    }
    else
    {
        printf("%d Number is not perfect",iValue);
    }

    return 0;
}