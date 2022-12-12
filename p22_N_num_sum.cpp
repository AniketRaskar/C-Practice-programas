#include<iostream>
using namespace std;

int Suammation(int iNo1)
{
    int iCnt =0;
    int iSum=0;
    for(iCnt=0;iCnt <=iNo1;iCnt++)
    {
        iSum=iSum + iCnt;
    }
    return iSum;

}
int main()
{
    int iNo =0;
    int iRet =0;
    cout<<"Enter the number"<<endl;
    cin>>iNo;

    iRet=Suammation(iNo);
    printf("Sum of numbers up to %d is %d",iNo,iRet);

    return 0;
}