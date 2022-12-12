#include<iostream>
using namespace std;

 bool Cheak(int iNo)
{
    if(
        ((iNo % 3)==0) &&
        ((iNo % 5)==0)
    )
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
    int iValue =0;
    cout<<"Enter the number \n"<<"\n";
    cin>>iValue;

    Cheak(iValue);
    return 0;
}