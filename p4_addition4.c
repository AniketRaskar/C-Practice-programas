//addition of two numbers using addition function
#include<stdio.h>

int Addition(int iValue1,int iValue2)
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    printf("Enter the first no:\n");
    scanf("%d",&iNo1);

    printf("Enter the second no: \n");
    scanf("%d",&iNo2);

    iNo3 = Addition(iNo1,iNo2);

    printf("Addition is:%d",iNo3);

    return 0;
}
