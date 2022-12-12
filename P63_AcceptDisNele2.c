////accept the n numbers from the user and stored it in the array

#include<stdio.h>

int main()
{
    register int iCnt=0;
   
    auto int Arr[5];
    printf("Enter elments:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of the array are :\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}