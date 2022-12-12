//accept the number from user and break it into digits
#include<stdio.h>

//Input: 7856
//output: 6     5   8   7
void DisplayDigits(int iNo)
{
    int iDigit=0;

    while(iNo!=0)   // or (iNo > 0)
    {
        iDigit= iNo%10;
        printf("%d \n",iDigit);
        iNo=iNo/10;

    }

}
int main()
{
    int iValue=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

/*

*/