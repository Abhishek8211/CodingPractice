#include<stdio.h>
int main()
{
    int marks;
    printf("Enter merks(0-100) : ");
    scanf("%d", &marks);
    if( marks>= 0 && marks< 30)
    {
        printf("C (FAIL- TRY AGAIN LATER) \n");
    }
    else if( marks>= 30 && marks< 70)
    {
        printf("A (PASS- YOU CAN DO IT BETTER) \n");
    }
    else if( marks>=70 && marks<100 )
    {
        printf("A+ (PASS- GOOD WORK) \n");
    }
    else
    {
        printf("Wrong Marks - please check it again \n");
    }
    printf("Thank You \n");
    return 0;
}