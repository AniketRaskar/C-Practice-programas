//accept number from user and dispaly it's factor
//Input:10
//Output:1  2   5

//Input:17
//output:1

//INput:-20
//Output: 1 2   4   5   10
#include<stdio.h>

void DisplayFact(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue =0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayFact(iValue);
    return 0;
}

//Time complexity : O(N/2)