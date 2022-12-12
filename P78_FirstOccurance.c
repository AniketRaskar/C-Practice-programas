//accept N numbers from user and one number from user and return the first occurance of No

#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int SearchFirstOccurence(int Arr[],int iLength,int iNo)
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
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iValue=0;
    int iSize =0;
    int * ptr =NULL;
    int iCnt =0;
    int iRet;
    

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

    iRet = SearchFirstOccurence(ptr,iSize,iValue);
    if(iRet== -1)
    {
        printf("There is no such element in the array");
    }
    else
    {
        printf("element is first occourd at :%d",iRet);
    }
    free(ptr);

    return 0;
}