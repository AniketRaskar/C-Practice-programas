#include<iostream>
using namespace std;

void DispalyFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            cout<<("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    cout<<"Enter the Number: \n";
    cin>>iValue;

    DispalyFact(iValue);
    return 0;
}