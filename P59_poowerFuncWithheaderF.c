#include"header59.h"

int main()
{
    auto int iValue1 =0;
    auto int iValue2 =0;
    auto ULONG lRet =0;
    printf("Enter the base:\n");
    scanf("%d",&iValue1);

    printf("Enter the Power:\n");
    scanf("%d",&iValue2);

    lRet = DisplayPower(iValue1,iValue2);
    printf("Result is: %ld \n",lRet);

    return 0;
}

//gcc program59.c helper59.c -o myexe
// apply this command for execution