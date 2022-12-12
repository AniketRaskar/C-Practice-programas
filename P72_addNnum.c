//accept n numbers and perform the addition of those numbers

#include<stdio.h>
#include <stdlib.h>

int SumofN(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iCnt=0;
    int iSize=0;
    int *ptr=NULL;
    int iRet=0;
    printf("Enter the numbers of elements:\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(sizeof(int)*iSize);

    printf("Enter the values:");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

   iRet= SumofN(ptr,iSize);
   printf("Sum of given no is:%d",iRet);
   free(ptr);


    return 0;
}