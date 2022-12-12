//Accept 2 numbers from user as a & b and return the no as a^b

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG DisplayPower(int iNo1, int iNo2)
{
    ULONG lMult=1;
    register int iCnt=0;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
      {
          lMult = lMult * iNo1;
      }
    return lMult;
}

int main()
{
    auto int iValue1 =0;
    auto int iValue2 =0;
    auto ULONG lRet =0;
    printf("Enter the base:\n");
    scanf("%d",&iValue1);

    printf("Enter the Power:\n");
    scanf("%d",&iValue2);

    lRet = DisplayPower(iValue1,iValue2);
    printf("Result is: %ld \n",lRet);

    return 0;
}