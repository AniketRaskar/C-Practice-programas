// program to accept a number from user and finding sum of numbers up to this

/*
Algorithm
     Start
     Accept number from user
     Cheak wheather that number is negative or not
     If it is negative then make it positive

    create one variable as sum set it 0
    crate one variable as iCnt and set it to 1

    Iterate till Cnt is less than or equal to iNo
    add the value of cnt into the sum
    Increment value of cnt by 1

    Loop

    Dispaly the value of sum
   End
*/

#include<stdio.h>

int Summation(int iNo)
{
    int iSum=0;
    int iCnt=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt=0; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
         
    }
    return iSum;

}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter the number\n");
    scanf("%d \n",&iValue);

   iRet= Summation(iValue);
   printf(" Summation is:%d \n",iRet);
    return 0;
}