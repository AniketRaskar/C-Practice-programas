//accept the number from the user and wheatner it is amstrong number number or not
//eg 1634 = 1^4+6^4+3^4+4^3 =1634
//153 =  1^3 + 5^3 + 3^3  =153
//8208
//370
//1741725

#include<stdio.h>
#include <stdbool.h>

int DisplayPower(int iNo1, int iNo2)
{
    int iMult=1;
    register int iCnt=0;
    for(iCnt=1;iCnt<=iNo2;iCnt++)
      {
          iMult = iMult * iNo1;
      }
    return iMult;
}


bool CheckArmostrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0;
    int iDigit =0;
    int iSum =0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;

    //Calculate number of digits
    while(iNo !=0)
    {
        iDigCnt++;
        iNo = iNo /10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum+DisplayPower(iDigit,iDigCnt);
        iNo = iNo /10;
    }
    if(iSum == iTemp)
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
    bool iRet;
    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet= CheckArmostrong(iValue);
    if(iRet == true)
    {
        printf("%d number is amostrong number",iValue);
    }
    else
    {
        printf("%d is not the amostrong numbe",iValue);
    }
    return 0;
}