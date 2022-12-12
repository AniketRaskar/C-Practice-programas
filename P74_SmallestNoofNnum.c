// Accept the N number from the user and writte the smallest number from that

#include<stdio.h>
#include <stdlib.h>

int MinofN(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<=iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }
    return iMin;
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

   iRet= MinofN(ptr,iSize);
   printf("Smallest number of given no is:%d",iRet);
   free(ptr);


    return 0;
}