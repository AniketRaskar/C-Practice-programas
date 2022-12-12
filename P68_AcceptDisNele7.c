#include<stdio.h>

//in this code nothing only we have remove concept of pointer in all ways
void Display(int Arr[])
{
    int iCnt=0;
    printf("Elements of the array are :\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
        
    }

}
int main()
{
    register int iCnt=0;
   
    auto int Brr[5];
    printf("Enter elments:\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Display(Brr);  //Display(100)
    

    return 0;
}