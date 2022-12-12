// Accept the N number from the user and writte the largest number from that

#include<stdio.h>
#include <stdlib.h>

int MaxofN(int Arr[],int iLength)
{
    register int iCnt=0;
    auto int iMax=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>=iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax;
}
int main()
{
    register int iCnt=0;
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

   iRet= MaxofN(ptr,iSize);
   printf("Largest number of given no is:%d",iRet);
   free(ptr);


    return 0;
}