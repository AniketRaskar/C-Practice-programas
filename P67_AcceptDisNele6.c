//accept the n numbers from the user and stored it in the array

#include<stdio.h>

void Display(int iPtr[])
{
    int iCnt=0;
    printf("Elements of the array are :\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
        
    }

}
int main()
{
    register int iCnt=0;
   
    auto int Arr[5];
    printf("Enter elments:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);  //Display(100)
    

    return 0;
}

//Arr[2];
//*(Arr+2);
//*(2+Arr);
//2[Arr];