//accept the number from user and rerturn the sum its factor

#include<stdio.h>

int DisplaySumFact(int iNo)
{
    int iSum=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

   iRet= DisplaySumFact(iValue);
   printf("Sum of factors of %d is %d",iValue,iRet);
    return 0;
}