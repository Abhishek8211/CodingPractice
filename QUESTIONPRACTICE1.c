#include <stdio.h>
int main()
{
    int n, num, r = 0 , a;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    printf("Reversed number is : %d", r);
    //return 0;

    if (r == num)
    {
        printf("\nNumber is Palindrome");
    }
    else
    {
        printf("\nNumber is not Palindrome");
    }
}