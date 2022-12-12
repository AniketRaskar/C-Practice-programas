#include<stdio.h>
#include <stdlib.h> //standard library.h for malloc and free
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    printf("Elements of the array are :\n");
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
        
    }

}
int main()
{
    register int iCnt=0;
    int *ptr=NULL;
    int iSize=0;
   
    printf("Enter the number of elments:\n");
    scanf("%d",&iSize);

   ptr =(int*) malloc(iSize *sizeof(int));
   printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);  //Display(100,4)
    free(ptr);

    return 0;
}