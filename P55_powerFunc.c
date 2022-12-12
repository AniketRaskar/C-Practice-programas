//Accept 2 numbers from user as a & b and return the no as a^b

#include<stdio.h>

unsigned long int DisplayPower(int iNo1, int iNo2)
{
    unsigned long int lMult=1;
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
    auto unsigned long int lRet =0;  //by unsigned long int size of integer becomes 32 bytes else for signed it is 31 bytes
    printf("Enter the base:\n");
    scanf("%d",&iValue1);

    printf("Enter the Power:\n");
    scanf("%d",&iValue2);

    lRet = DisplayPower(iValue1,iValue2);
    printf("Result is: %ld \n",lRet);

    return 0;
}