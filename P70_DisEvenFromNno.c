//accept the n numbers from the user and display even numbers from it

#include <stdio.h>
#include <stdlib.h>


void DisplayEven(int Arr[],int iLength)
{
    int iCnt=0;
    printf("Even integers are:\n");
    for(iCnt=0;iCnt< iLength; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
        printf("%d\n",Arr[iCnt]);
        }
    }

}
int main()
{
    int iCnt=0;
    int *iPtr=NULL;
    int iSize=0;

    printf("Enter the number of elemnts:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt=0;iCnt <iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    DisplayEven(iPtr,iSize);
    free(iPtr);


    return 0;
}
