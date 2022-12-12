//accept the number from user and rerturn the sum its factor

#include<iostream>
using namespace std;

int DisplaySumFact(int iNo)
{
    int iSum=0;
    int iCnt=0;
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
    cout<<("Enter the number:\n");
    cin>>iValue;

   iRet= DisplaySumFact(iValue);
   cout<<("Sum of factors of %d is %d",iValue,iRet);
    return 0;
}