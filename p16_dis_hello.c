//Program to dispaly Hello dyanamically on screen
#include<stdio.h>

 void Display(int iNo) 
{
    int iCnt = 0;
    if(iNo < 0)   //filter
    {
        printf("plz enter positive value \n");
        return;
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Hello \n");   
    }

}
int main()  
{
    int iValue=0;

    printf("Enter the number \n");
    scanf("%d \n",&iValue);

    Display(iValue);  
    return 0;
}