//acceppt no from user and wheather it is divisible by 3 &5
#include<stdio.h>
#include<stdbool.h>

bool cheak(int iNo)
{
    if(
        ((iNo % 3)==0) && 
        ((iNo %5) ==0)
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
    bool iRet =false;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet=cheak(iValue);
    if(iRet==true)
    {
        printf("number is divisible by 3 &5");
    }
    else
    {
        printf("number not divisible by 3&5");
    }
    return 0;
}