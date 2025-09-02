// PATTERN PRINTING QUESTIONS.

// // 01)
// ***
// ***
// ***
// ***
// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter number of ROWS: ");
//     scanf("%d", &n);
//     printf("Enter number of COLUNMS: ");
//     scanf("%d", &m);
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // 02)
// // 123
// // 123
// // 123
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of Rows and Columns: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 03)
// *
// **
// ***
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of ROWS: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}