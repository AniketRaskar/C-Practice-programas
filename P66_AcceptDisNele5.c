#include<stdio.h>


void Display(int iPtr[])
{
    int iCnt=0;
    printf("Elements of the array are :\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",*(iPtr+iCnt));//aarray internally converted as pointer(pointer arithmatic)
        
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