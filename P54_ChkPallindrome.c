//accept number from user cheak wheather it is palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool CheakPallindrome(int iNo)
{
    int iDigit =0;
    int iRev=0;
    int iTemp=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iTemp=iNo;
    while(iNo > 0)
    {
        iDigit=iNo% 10;
        iRev = iRev *10+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
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
    int iValue=0;
    bool bRet;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet= CheakPallindrome(iValue);

    if(bRet==true)
    {
        printf(" %d Number is pallindrome",iValue);
    }
    else
    {
        printf("%d number is not pallindroem",iValue);
    }
    return 0;
}