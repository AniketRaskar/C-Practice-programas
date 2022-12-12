//accept the number from the user and wheatner it is amstrong number number or not
//eg 1634 = 1^4+6^4+3^4+4^3 =1634
//153 =  1^3 + 5^3 + 3^3  =153
//8208
//370
//1741725

#include<stdio.h>
#include <stdbool.h>

bool CheckArmostrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0;
    int iDigit =0;
    int iSum =0;
    int iCnt =0;
    int iMult =0;
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
        iMult =1;
        iDigit = iNo % 10;
       for(iCnt=1;iCnt<=iDigCnt;iCnt++)
       {
          iMult = iMult * iDigit;
       }
       
        iSum = iSum+iMult;
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