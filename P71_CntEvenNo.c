//accept the n numbers from the user and count even numbers from it

#include <stdio.h>
#include <stdlib.h>


int CountEven(int Arr[],int iLength)
{
    int iCnt=0, iEvenCnt=0;
    
    for(iCnt=0;iCnt< iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
        iEvenCnt++;
        }
    }
    return iEvenCnt;

}
int main()
{
    int iCnt=0;
    int *iPtr=NULL;
    int iSize=0;
    int iRet=0;

    printf("Enter the number of elemnts:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt=0;iCnt <iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = CountEven(iPtr,iSize);
    printf("Number of even elements are: %d",iRet);
    free(iPtr);


    return 0;
}
