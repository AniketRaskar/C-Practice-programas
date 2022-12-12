//accept N numbers from user and one number from user and cheak wheather it is present in it or not
//without using flag
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0,iFreqCnt=0;
    
    for(iCnt=0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           break;
        }
    }
    if(iCnt==iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iValue=0;
    int iSize =0;
    int * ptr =NULL;
    int iCnt =0;
    bool bRet;
    

    printf("Enter the number of elements you want to accept:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(sizeof(int)*iSize);
    printf("Enter the elements to search:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
    scanf("%d",&ptr[iCnt]);
    }
     printf("enter the one number which we have to search:\n");
    scanf("%d",&iValue);

    bRet = Search(ptr,iSize,iValue);
    if(bRet==true)
    {
        printf("Number is present in the given numbers");
    }
    else
    {
        printf("Numbers is not present in the given numbers");
    }
    free(ptr);

    return 0;
}