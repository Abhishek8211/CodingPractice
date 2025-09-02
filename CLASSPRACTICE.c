// // WAP TO CHECK THE ELEGIBILITY OF A STUDENT TO SIT FOR THE EXAM.(USE OF AND OPERATOR (&&) )
// #include<stdio.h>
// int main(){
//     int fee, att ;
//     printf("Enter your pending fee and your present attendace: ");
//     scanf("%d%d", &fee, &att);
//     if (fee == 0 && att >= 75)
//     {
//         printf("Elegible");
//     }
//     else{
//         printf("Not Elegible");
//     }
    
//     return 0;
// }

// // USE OF OR ( || ) OPERATOR.
// #include<stdio.h>
// int main(){
//     int offer, cashback;
//     printf("Enter Offer and Cashback: ");
//     scanf("%d%d", &offer, &cashback);
//     if (offer >= 45  || cashback >= 1000)
//     {
//         printf("\nCan Buy Smartphone");
//     }
//     else{
//         printf("\nNO, Dont Purchase smarthphone");
//     }
//     return 0;
// }

// // EXAMPLE OF LOGICAL OPERATOR.
// #include<stdio.h>
// int main(){
//     int a = 10, b = 0, c = 2, d;
//     d = a && b || c - 2;
//     printf("%d", d);
//     return 0;
// }

// // EXAMPLE OF LOGICAL OPERATOR.
// #include<stdio.h>
// int main(){
//     int x = 1, y = 0, z = 5;
//     int a = x && y || z++;
//     printf("%d", z);
//     return 0;
// }

// // EXAMPLE OF LOGICAL OPERATOR.
// #include<stdio.h>
// int main(){
//     int x = 1, y = 0, z = 5;
//     int a = x && y && z++;
//     printf("%d", z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age = 24;
//     age >= 18 ? printf("You can vote.") : printf("You can not vote.");
//     return 0;
// }

#include<stdio.h>
int main(){
    int a, b, c, sum = 0;
    printf("Input first term: ");
    scanf("%d", &a);
    printf("\nInput common difference: ");
    scanf("%d", &b);
    printf("\nInput number of terms: ");
    scanf("%d", &c);
    sum = (c * (2 * a + c))
    return 0;
}