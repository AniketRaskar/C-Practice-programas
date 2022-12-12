//Accept the number from user and cheak wheather it is prime or not, which dosen't have any factor except itself and 1

#include<stdio.h>
#include<stdbool.h>

bool CheakPrime(int iNo)
{
   int iCnt=0;
   bool bFlag=true;

   for(iCnt=2; iCnt<=(iNo/2); iCnt++)
   {
       if(iNo % iCnt==0)
       {
           bFlag=false;
       }
   }
   return bFlag;
}
int main()
{
    bool bRet;
    int iValue=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheakPrime(iValue);

    if(bRet==true)
    {
        printf("%d Number is prime",iValue);
    }
    else
    {
        printf("%d Number is not prime",iValue);
    }

    return 0;
}