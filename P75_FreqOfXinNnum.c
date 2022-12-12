//accept n numbers and also accept one number check how many times it occures in the numbers

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iFreqCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreqCnt++;
        }
    }
    return iFreqCnt;
}
int main()
{
    int iValue=0;
    int iSize =0;
    int * ptr =NULL;
    int iCnt =0;
    int iRet =0;

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }
     printf("enter the one number whose frequency have to calculate:\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iSize,iValue);
    printf("Frequency is: %d",iRet);
    free(ptr);

    return 0;
}