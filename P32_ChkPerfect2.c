//Accept the number from user and wheather it is perfect no or not

#include<stdio.h>
#include<stdbool.h>

bool PerfectNo(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo= -iNo;
    }
    for(iCnt=1;((iCnt<=(iNo/2)) && (iSum <= iNo));iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
        
    }
    if(iSum==iNo)
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
    bool iRet;
    int iValue=0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    iRet = PerfectNo(iValue);
    if(iRet==true)
    {
        printf("Number is perfect number");
    }
    else
    {
        printf("Number is not a perfect number");
    }

    return 0;

}