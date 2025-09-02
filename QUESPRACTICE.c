// 
// 01) First Program in C
// #include <stdio.h>
// int main()
// {
//     printf("Hello World");
//     return 0;
// }
//

// // 02) Second program in C in this we will use printf function and it will be printed in the same line
// #include <stdio.h>
// int main(){
//     printf("Hello Abhishek");
//     printf("Good Morning");
//     printf("Thank You");
//     return 0;
// }

// // 03) Third program in C in this we will use printf function and it will be printed in the new line
// #include <stdio.h>
// int main(){
//     printf("Hello Abhishek \n");
//     printf("Good Morning \n");
//     printf("Thank You \n");
//     return 0;
// }

// // 04) practice question
// #include <stdio.h>
// int main()
// {
//     printf("nn\n\nnn\n");
//     printf("nn/n/nnn/n");
//     return 0;
// }

// // 05) Declairing a variable in c
// #include <stdio.h>
// int main()
// {
//     printf("Abhishek \n");
//     int a;
//     a = 10;
//     printf("%d", a);
//     a = 100;
//     printf("\n%d", a);// \n should always be used to print in the next line
//     return 0;
// }

// // 06) Find the Volume of a sphere
// #include <stdio.h>
// int main()
// {
//     int r = 5;
//     float v = 4/3 * 3.14 * r * r * r;
//     printf("Volume of the sphere is : %f", v);
//     return 0;
// }

// // 07) WAP To find the area of a cricle
// #include <stdio.h>
// int main(){
//     int r = 5;
//     float area = 3.14 * r * r;
//     printf("The area of cirlce is: %f", area);
//     return 0;
// }

// // 08) Find average of 5 subjects
// #include <stdio.h>
// int main(){
//     float a = 100;
//     float b = 50;
//     float c = 56;
//     float d = 78;
//     float e = 92;
//     float avg = (a+b+c+d+e)/5;
//     printf("The average of 5 subjects is: %f", avg);
//     return 0;
// }

// // 09) Calculating Simple Interest
// # include<stdio.h>
// int main(){
//     float p, r, t, si;
//     // printf("Enter the principal amount, rate and time: \n");
//     // scanf("%f %f %f", &p, &r, &t);
//     // si = (p * r * t) / 100;
//     p = 100;
//     r = 10;
//     t = 2;
//     si = (p*r*t)/100;
//     printf("The Simple Interest is : %f", si);
//     return 0;
// }

// // 10) Let us take a simple example of TAKING A INPUT FROM THE USER.
// #include <stdio.h>
// int main(){
//     float pi = 3.1415;
//     float radius;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);
//     float area = pi * radius * radius;
//     printf("The area of the circle is : %f", area);
//     return 0;
// }

// // 11) Calculate the si by taking the input from the user.
// #include <stdio.h>
// int main(){
//     float p,r,t,si;
//     // printf("Enter the principal amount, rate and time: ");    
//     // scanf("%f %f %f", &p, &r, &t);
//     printf("Enter the principal amount:");
//     scanf("%f", &p);
//     printf("Enter the rate: ");
//     scanf("%f", &r);
//     printf("Enter the time: ");
//     scanf("%f", &t);
//     si = (p * r * t) / 100;
//     printf("The Simple Interest is : %f", si);
//     return 0;
// }

// // 12) Sum of two even numbers.
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter second number: ");
//     scanf("%d",&b);
//     int sum = a + b;
//     printf("The sum is: %d", sum);
//     return 0;
// }

// // 13) Taking input of two numbers constantly
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter two number(p and q): ");  
//     scanf("%d %d", &a, &b);
//     printf("p = %d & q = %d", a,b);
//     return 0;
// }

// // 14) Take two integers input a,b : a>b, and find the remainder when a is divided by b.
// #include <stdio.h>
// int main(){
//     int a,b; // a > b
//     printf("Enter first number(a): ");
//     scanf("%d", &a);
//     printf("Enter second number(b): ");
//     scanf("%d", &b);
//     int remainder;
//     // i.e remainder = a - b * (a/b);
//     remainder = a % b; // either we can use the formulae Divisor(b) * Quotient(a/b) + Remainder = Divident(a).
//     printf("The remainder when %d is divided by %d is: %d", a,b,remainder);
//     return 0;
// }

// // 15) Take float input and print the fractional part of the real number. ex. 5.14 => 0.14
// #include <stdio.h>
// int main(){
//     float a;
//     printf("Enter the number in decimal: ");
//     scanf("%f", &a);
//     int b = a;
//     float result = a - b;
//     printf("The fractional part is: %f", result);
//     return 0;
// }

// *NOTE: when an integer divided by integer is in float it will give 0 ex. float x = 5/6 

// // 16) BODMAS RULE IS NOT ACCEPTABLE IN C IT ALWAYS PRINT FROM LEFT TO RIGHT.
// #include<stdio.h>
// int main(){
//     int i = 2*3/4+4/4+8-2+5/8;
//     printf("%d", i);
//     return 0;
// }

// // 17) Practice
// #include <stdio.h>
// int main(){
//     int i = 2, j = 3, k, l;
//     float a, b;
//     k = i / j * j ;
//     l = j / i * i;
//     a = i / j * j ;
//     b = j / i * i;
//     printf("%d \n%d \n%f \n%f", k, l, a, b);
// }

// // 18) Character Basics
// #include<stdio.h>
// int main(){
//     char ch = '@';
//     printf("%c", ch);
//     return 0;
// }


//  NOTE: ASCII values: 
//     0-9 => 48-57
//     A-Z => 65-90
//     a-z => 97-122

// // 19) Write a program to check whether a given input is integer or not.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a positive number : ");
//     scanf("%d", &a);
//     if(a%2 == 0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }
//     return 0;
// }

// // 20) Take positive integer input and tell if it is divisible by 5 or not.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a positive number : ");
//     scanf("%d", &n);
//     if(n%5 == 0){
//         printf("Divisible by 5");
//     }
//     else{
//         printf("Not Divisible by 5");
//     }
// }

// // 21) WAP to check whether a given year is a leap year or not.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a year: ");
//     scanf("%d", &n);
//     if(n%4 == 0 && n%100 != 0 || n % 400 == 0){
//         printf("Yes, %d is a leap year.", n);
//     }
//     else{
//         printf("No, %d is not a leap year.", n);
//     }
// }

// // 22) Take integer input and print the absolute value of the number.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n<0){
//         // int a;
//         // a = n * -1;
//         // printf("The absolute value of %d is %d", n, a);
//         printf("The absolute value of %d is %d", n, -n);
//     }
//     else{
//         printf("The absolute value of %d is %d", n, n);
//     }
// }

// // 23) WAP If cost price and selling price of an item is input through the keyboard, wap to determine whether the seller has made
// // profit or not. Also find how much profit or loss he made.
// #include<stdio.h>
// int main(){
//     int cp, sp;
//     printf("Enter the Cost price: ");
//     scanf("%d", &cp);
//     printf("Enter the Selling price: ");
//     scanf("%d", &sp);
//     if(sp>cp){
//         printf("The PROFIT is: %d", sp-cp);
//     }
//     else if(sp == cp){
//         printf("The PROFIT is: 0");
//     }
//     else{
//         printf("The LOSS is: %d", cp-sp);
//     }
//     printf("\nThank You.");
//     return 0;
// }

// // 24) Given the length and breadth of a rectangle, wap  to find whether the area of the rectangle is greater than its perimeter.
// #include<stdio.h>
// int main(){
//     int l,b,ar,per;
//     printf("Enter the Length: ");
//     scanf("%d", &l);
//     printf("Enter the Breadth: ");
//     scanf("%d", &b);
//     ar = l*b;
//     per = 2*(l+b);
//     if(ar>per){
//         printf("Area is greater than Perimeter");
//     }
//     else{
//         printf("Perimeter is greater than Area");
//     }
// }

// // 25)WAP to find whether a number is three digit number or not.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n>99 && n < 1000){
//         printf("Yes, %d is a three digit number.", n);
//     }
//     else{
//         printf("No, %d is not a three digit number.", n);
//     }
//     return 0;
// }

// // 26) Take a positive integer input and tell if it is divisible by 5 and 3.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%5 == 0 && n % 3 == 0 || n% 15 == 0){ //n%15 is complimentary you can remove it.
//         printf("Yes, %d is divisible by 5 and 3.", n);
//     }
//     else{
//         printf("No, %d is not divisible by 5 and 3.", n);
//     }
//     return 0;
// }

// // 27) Take 3 positive input and print greatest of them.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("Enter a number: ");
//     scanf("%d", &b);
//     printf("Enter a number: ");
//     scanf("%d", &c);
//     if(a>b && a>c){
//         printf("%d is the greatest number.", a);
//     }
//     else if(b>a && b>c){
//         printf("%d is the greatest number.", b);
//     }
//     else{
//         printf("%d is the greatest number.", c);
//     }
//     return 0;
// }

// // 28) Take 3 numbers input and tell if they can be the sides of triangle or not.
// // In Triangle 2 sides sum will always be greater than third side.
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Emter your First side: ");
//     scanf("%d", &a);
//     printf("Emter your Second side: ");
//     scanf("%d", &b);
//     printf("Emter your Third side: ");
//     scanf("%d", &c);
//     if((a+b)>c && (b+c)>a && (a+c)>b){
//         printf("Yes, %d, %d, %d can make a perfect triangle.", a,b,c);
//     }
//     // else if((b+c)>a){
//     //     printf("Yes, %d, %d, %d can make a perfect triangle.", a,b,c);
//     // }
//     // else if((a+c)>b){
//     //     printf("Yes, %d, %d, %d can make a perfect triangle.", a,b,c);
//     // }
//     else{
//         printf("NO, %d, %d, %d can make a perfect triangle.", a,b,c);
//     }
//     return 0;
// }

// // 29) Take a positive integer input from the user and check whether it is divisible by 3 or 5 but not divisible by 15.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     if((n%3==0 || n%5 == 0) && n % 15 != 0){
//         printf("YES, %d is divisible by 3,5. But not divisble by 15.", n);
//     }
//     else if(n % 15 ==0 ){
//         printf("YES, %d is divisible by 5 and 3. But also divisble by 15.", n);
//     }
//     return 0;
// }

// // 30)  Take input of three subjects maths,science and hindi from user and print the percentage
// // and then print the grade according to the percentage.
// #include<stdio.h>
// int main(){
//     int math,sc,hindi,per;
//     printf("Enter the marks of the Maths: ");
//     scanf("%d", &math);
//     printf("Enter the marks of the Science: ");
//     scanf("%d", &sc);
//     printf("Enter the marks of the Hindi: ");
//     scanf("%d", &hindi);
//     printf("Your Marks are: Maths: %d, Science: %d, Hindi: %d\n", math,sc,hindi);
//     per = (math+sc+hindi)/3;
//     printf("Your Percentage is: %d\n", per);
//     if(per >= 90 && per <= 100){
//         printf("Congratulation; Your grade is 'EXCELLENT'");
//     }
//     else if(per >= 80 && per < 90){
//         printf("Congratulation; Your grade is 'VERY GOOD'");
//     }
//     else if(per >= 70 && per < 80){
//         printf("Congratulation; Your grade is 'GOOD'");
//     }
//     else if(per >= 60 && per < 70){
//         printf("Congratulation; Your grade is 'CAN DO BETTER'");
//     }
//     else if(per >= 50 && per < 60){
//         printf("Congratulation; Your grade is 'AVERAGE'");
//     }
//     else if(per >= 50 && per < 60){
//         printf("Congratulation; Your grade is 'AVERAGE'");
//     }
//     else if(per >= 40 && per < 50){
//         printf("Congratulation; Your grade is 'BELOW AVERAGE'");
//     }
//     else{
//         printf("Sorry; You Failed");
//     }
// }
 

// // 31) Ternary Operator
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     // if(n%2 == 0){
//     //     printf("Even Number.");
//     // }
//     // else{
//     //     printf("Odd Number.");
//     // }
//     // we can use ternary operator.
//     // expression 1 ? expression 2 : expression 3
//     n % 2 == 0 ? printf("Even Number.") : printf("Odd Number.");
//     return 0;
// }

// // 32) FOR LOOP
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter your number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         printf("\n%d) Hello Abhishek", i);
//     }
//     return 0;
// }

// // 33) Print numbers from 1 to 100.
// #include<stdio.h>
// int main(){
//     for(int i = 1; i <= 100; i++){
//         printf("%d ", i);
//     }
// }

// // 34) Print all the even numbers from 1 to 100.
// #include<stdio.h>
// int main(){
//     for(int i = 0 ; i <= 100; i+=2){
//         printf("%d ", i);
//     }
//     return 0;
// }

// // 35) Print the table upto 10.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= 10; i++){
//         printf("%d X %d = %d\n", n,i,n*i);
//     }
//     return 0;
// }

// // 36) Print n even numbers.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     int even = 2;
//     for(int i = 1; i <= n; i++){
//         printf("%d) %d\n", i,even);
//         even += 2;
//     }
//     return 0;
// }

// // 37) Display this GP - 3,12,48,.... upto 'n' terms.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a = 3;
//     for(int i = 1; i <= n; i++){
//         printf("%d) %d\n", i,a);
//         a = a*4;
//     }
//     return 0;
// }

// // 38) Display this AP - 100,97,94,91,... upto all terms which are positive.
// #include<stdio.h>
// int main(){
//     for(int i = 100; i>=0; i-=3){
//         printf("%d ", i);
//     }
//     // OR
//     // int a = 100;
//     // for(int i=1; a > 0; i++){
//     //     printf("%d ", a);
//     //     a = a-3;
//     // }
//     return 0;
// }

// // 39) Display this GP - 100,50,25,... upto 'n' terms.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n terms: ");
//     scanf("%d", &n);
//     float a = 100;
//     for(int i = 1; i <= n; i++){
//         printf("%d) %f\n", i,a);
//         a = a * 1/2;
//     }
//     return 0;
// }

// // // 40) WAP to check if a number is PRIME NUMBER or not.
// #include<stdio.h>
// int main(){
//     int n, tempnumber = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 2; i <= n/2; i++){
//         if(n % i == 0){
//             tempnumber++;
//             break;
//         }
//     }
//     if(tempnumber == 0){
//         printf("Yes it is a prime number");
//     }
//     else{
//         printf("No it is not a prime number");
//     }
//     return 0;
// }
  
// // 41) Using Continue statement.
// #include<stdio.h>
// int main(){
//     for(int i = 1; i <= 100; i++){
//         if(i % 2 == 0){
//                 continue;
//         }
//         printf("%d ", i);
//     }
//     return 0;
// }

// // 42) WHILE LOOP.
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=10){
//         printf("%d ", i);
//         i++;
//     }
//     return 0;
// }

// // 43) Using a simple while loop
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=10){
//         printf("\n%d", i);
//         i++;
//     }
//     return 0;
// }

// // 43) Predict the Output.
// #include<stdio.h>
// int main(){
//     int x = 4,y,z;
//     y = --x;
//     z = x--;
//     printf("\n%d %d %d", x,y,z);
//     return 0;
// }

//  NOTE :- 
// X++ means, use x, then increase it
// ++X means first increase then, use the value of X.
// same like x-- and --x


// // 44)Predict the Output.
// #include<stdio.h>
// int main(){
//     int x = 4,y = 3,z;
//     z = x-- -y;
//     printf("\n%d %d %d", x,y,z);
//     return 0;
// }

// // 45)Predict the Output.
// #include<stdio.h>
// int main(){
// int x = 4, y = 0, z;
// while (x >= 0) {
//     if (x == y)
//         break;
//     else
//         printf("\n%d %d", x, y ) ;
//         x-- ;
//         y++;
//     }
//     return 0;
// }

// // 46) Use of Do-While Loop.
// #include<stdio.h>
// int main(){
//     int i = 10;
//     // while(i<10){
//     //     printf("This will not run.");
//     //     i++;
//     // }
//     do{
//        printf("This will run only 1 time.");
//         i++; 
//     }while (i<10);
//     return 0;
// }

// // 47) WAP to count digits of a given number.
// #include<stdio.h>
// int main(){
//     int i;
//     printf("Enter your digit: ");
//     scanf("%d", &i);
//     int count = 0;
//     while(i>0){
//         i = i/10;
//         count++;
//     }
//     printf("Your digit has %d number of digits.", count);
//     return 0;
// }

// // 48) WAP to print sum of digits of a given number.
// #include<stdio.h>
// int main(){
//     int i,lastdigit;
//     printf("Enter your digit: ");
//     scanf("%d", &i);
//     int sum = 0;
//     while(i!=0){
//         lastdigit = i%10;
//         i = i/10;
//         sum = sum + lastdigit;
//     }
//     printf("Your number sum is: %d.", sum);
//     return 0;
// }

// // 49) WAP to print sum of all the even digits of a given number.
// #include<stdio.h>
// int main(){
//     int i,lastdigit;
//     printf("Enter your digit: ");
//     scanf("%d", &i);
//     int sum = 0;
//     while(i!=0){
//         lastdigit = i%10;
//         i = i/10;
//         if(lastdigit % 2 == 0){
//             sum = sum + lastdigit;
//         }
//     }
//     printf("Your number even digit sum is: %d.", sum);
//     return 0;
// }

// // 50) WAP to print reverse of a given number.
// #include<stdio.h>
// int main(){
//     int i, reverse = 0;
//     printf("Enter your digit: ");
//     scanf("%d", &i);
//     while(i!=0){
//         reverse = reverse * 10 + (i % 10);
//         i = i / 10;    
//     }
//     printf("Reverse of the number is: %d\n", reverse);
//     return 0;
// }

// Doubt..........................
// // 50) WAP to print the sum of given number and its reverse.
// #include<stdio.h>
// int main(){
//     int a, b , sum = 0, rev = 0, remainder;
//     printf("Enter the number: ");
//     scanf("%d", &a);
    
//     while(a!=0){
//         remainder = a%10;
//         sum += remainder;
//         a /= 10;
//     }
//     printf("The sum of all digits of number %d is: %d", a, sum);
//     while (a!=0)
//     {
//         rev = rev * 10 + (a%10);
//         a /= 10;
//     }
//     printf("\nThe reverse of number %d is: %d", a,rev);
//     return 0;
// }

// // 51) WAP to print the sum of this series: 
// // 1 - 2 + 3 - 4 + 5 - 6.... upto 'n' terms.
// #include<stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter n terms: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         if(i%2!=0){
//             sum += i;
//         }
//         else{
//             sum -= i;
//         }
//     }
//     printf("The sum is: %d", sum);
//     return 0;
// }


// // 52) // Print the factorial of a given number 'n'.
// #include<stdio.h>
// int main(){
//     int n, product = 1;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         product = product * i;
//     }
//     printf("The factorial of number %d is : %d", n, product);
// }

// // 52) Print the factorials of first n numbers.
// #include<stdio.h>
// int main(){
//     int n, fact = 1;
//     printf("Enter the n term: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//         printf("\nThe factorial of number %d is : %d", i, fact);
//     }
//     return 0;
// }

// // 53) Print the nth FIBONACCI SERIES.
// #include<stdio.h>
// int main(){
//     int n,a = 1, b = 1, sum = 1;
//     printf("Enter the n term: ");
//     scanf("%d", &n);
//     printf("%d %d ", a,b);
//     for(int i = 3; i <= n; i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//         printf("%d ", sum);
//     }
//     printf("\nThe %d fibonacci term is: %d",n,sum);
//     return 0;
// }

// // 54) Two Numbers are entered through the keyboard. WAP to find the value of
// // one number raised to the power of another.
// #include<stdio.h>
// int main(){
//     int a,power;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     printf("Enter the power: ");
//     scanf("%d", &power);
//     // For Power we can use pow(base, exponent) function
//     int product = 1;
//     for(int i = 1; i <= power; i++){
//         product = product * a;
//     }
//     printf("%d raised to the power %d is: %d", a,power,product);
//     return 0;
// }

// // 55) WAP to print all the ASCII values and their equivalence characters of 26
// // alphabets using a while loop. (Capital Case)
// #include<stdio.h>
// int main(){
//     int i = 65;
//     while(i<=90){
//         char ch = (char)i; // TYPE CASTING>
//         printf("%c -> ", ch);
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// // 56) Write a program to print out all Armstrong number between 1 and 500. If sum of cubes of each digit of the
// // number is equal to the number itself, then the number is called the Armstrong number. For Example,
// // 153 = (1*1*1) + (5*5*5) + (3*3*3)
// #include<stdio.h>
// int main(){
//     int a,result = 0,remainder;
//     for(int i = 1; i <= 500; i++){
//         a = i;
//         result = 0;
//         while(a != 0){
//             remainder = a % 10;
//             result += remainder * remainder * remainder;
//             a /= 10;
//         }
//         if(result == i){
//             printf("%d is an Armstrong number.\n", i);
//         }
//     }
//     return 0; 
// }

// // FUNCTIONS

// #include<stdio.h>
// void greet(){ // FUNCTION
//     printf("Hello Sir\n");
//     printf("Good Morning\n");
//     return;
// }
// int main(){
//     greet(); // Calling a Function.
//     greet();
// }

// // SWITCH CASE
// #include<stdio.h>
// int main(){
//     int a;
//     switch(a){
//         case (1 || 2){

//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 0;
//     for(; a < 5; a++){
//         printf("%d ", a);
//     }
//     printf("\n%d", a);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int k=15;
//     for(int k=10;k<=15;k++)
//     {
//     if(k==15)
//         return 0;
//     else
//         printf("%d ",k);
//     }
// }

// #include <stdio.h> 
// int main() { 
//     for (int n = 1; n <= 3; n++) { 
//         if (n == 2) { 
//             break; 
//         } 
//         for (int m = 1; m <= 2; m++) { 
//             if (m == 2) { 
//                 continue; 
//             } 
//             printf("%d%d ", n, m); 
//         } 
//     } 
//     return 0; 
// }

// #include <stdio.h>
// int main() {
//     int i = 0;
//     loop_start:
//         if (i == 3) 
//             goto end;
//         printf("%d ", i);
//         i++;
//         if (i < 5) 
//             goto loop_start;
//     end:
//         return 0;
// }

// #include <stdio.h>

// int main() {
//     int i = 0, product = 10;

// start:
//     if (i < 4) {
//         product *= (i + 1);
//         i++;
//         if (i != 2)
//             goto start;
//     }

//     printf("%d", product);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, term = 20, diff = 40;
    
//     printf("Enter number of terms: ");
//     scanf("%d", &n);
    
//     for(int i = 1; i <= n; i++) {
//         printf("%d ", term);
//         term = term + diff;    // Update the term
//         diff = diff + 4;       // Update the difference
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b = 1;
//     printf("Enter an number: ");
//     scanf("%d", &a);
//     while(b <= 10){
//         printf("\n%d X %d = %d ",a,b,a*b);
//         b++;
//     }
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter an number: ");
//     scanf("%d", &a);
//     while(a!=0){
//         int rem = a%10;
//         a /= 10;
//         printf("%d ", rem);
//     }
// }


// //COUNT TOTAL NUMBER OF DIGITS.
// #include<stdio.h>
// int main(){
//     int a,digits = 0;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     while(a!=0){
//         a = a/10;
//         digits = digits + 1;
//     }
//     printf("Total digits in the number: %d", digits);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,rev = 0, digit,sum = 0;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     while(a!=0){
//         digit = a % 10;
//         rev = rev * 10 + digit;

//         a = a/10;
//     }
//     printf("The reverse of the number is : %d", rev);
// }

// // WAP TO CONVERT GIVVEN DECIMAL NUMBER TO BINARY

// #include<stdio.h>
// int main(){
//     int d,rem,bin=0,placevalue = 1;
//     scanf("%d", &d);
//     while(d>0){
//         rem = d%2;
//         d/=2;
//         bin += rem * placevalue;
//         placevalue *= 10;
//     }
//     printf("%d", bin);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     double x = 85.487;
//     float y = 52.41;
//     int z;

//     z = (int) x;
//     printf("%d", z);

//     z = (int) y;
//     printf("%d", z);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
    
//     // Read the integer input
//     scanf("%d", &n);

//     // Print the binary representation
//     printf("Binary: ");
//     int bit = 0;
//     int first = 1;  // Flag to skip leading zeros
//     for (bit = 31; bit >= 0; bit--) {
//         if ((n >> bit) & 1) {
//             printf("%d", 1);
//             first = 0;  // Once we print the first 1, turn off leading zero flag
//         } else if (!first) {
//             printf("%d", 0);
//         }
//     }
    
//     printf("\n");

//     // Print the hexadecimal representation
//     printf("Hexadecimal: %X\n", n);

//     return 0;
// }

// //WAP to convert octal decimal to decimal number.
// #include<stdio.h>
// int main(){
//     int oct_no, digit, decimal_no = 0, base = 1;
//     printf("Enter any octal no. where last digit <= 7: ");
//     scanf("%d", &oct_no);
//     while(oct_no != 0){
//         digit = oct_no % 10;
//         if(digit > 7){
//             printf("Not a valid octal number.");
//             return 1;
//         }
//         decimal_no = decimal_no + digit * base;
//         oct_no /= 10;
//         base = base * 8;
//     }
//     printf("The Decimal no. = %d", decimal_no);
// }


// //V V IP program
// #include<stdio.h>
// int main(){
//     int a,digit, rev = 0,forward = 0, base = 1;
//     printf("Enter any number: ");
//     scanf("%d", &a);
//     while(a != 0){
//         digit = a % 10;
//         if(digit != 0){
//             rev = rev * 10 + digit;
//             forward = forward + digit * base;
//             base = base * 10;
//         }
//         a = a/10;
//     }
//     printf("The new number is: %d", rev);
//     printf("\nThe new number is: %d", forward);
// }


// #include<stdio.h>
// int main(){
//     int a, b = 10,i = 1;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     do{
//         printf("%d X %d = %d\n", a,i,a*i);
//         i++;
//     }while(i<=b);
// }



// #include<stdio.h>
// int main(){
//     int i = 1, n = 4;
//     for(i, i <=)
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         /* code */
//         sum += i;
//     }
//     printf("Sum = %d", sum);
// }

// //PRIME NUMBER
// #include<stdio.h>
// int main(){
//     int n, tempnumber = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 2; i <= n/2; i++){
//         if(n % i == 0){
//             tempnumber++;
//             break;
//         }
//     }
//     if(tempnumber == 0){
//         printf("Yes it is a prime number");
//     }
//     else{
//         printf("No it is not a prime number");
//     }
// }


// // STRONG NUMBER factorial sum equals to original number.
// #include<stdio.h>
// int main(){
//     int a, digit, sum = 0;
//     scanf("%d", &a);
//     int n = a;
//     while(a!=0){
//         digit = a % 10;
//         int f_digit = 1;
//         for(int i = 2; i <= digit; i++){
//             f_digit = f_digit * i;
//         }
//         sum = sum + f_digit;
//         a /= 10;
//     }
//     if(sum == n){
//         printf("%d is a Strong Number", n);
//     }
//     else{
//         printf("%d is not a strong number.", n);
//     }
// }

// #include<stdio.h>
// int main(){
//     int i = 0;
//     do{
//         i++;
//         printf("%d\n", i);
//         if(i == 2)
//         continue;
//         printf("\nIn while loop");
//     }while(i<2);
//     printf(" %d\n", i);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	char ch = '1';
// 	for (ch = '5'; ch <= '8'; ch++)
// 		putchar(ch);

// 	return (0);
// }

// //FIND THE GREATEST PRIME FACTOR
// #include<stdio.h> 
// int main(){ 
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = n/2; i > 1; i--){
//         int prime = 1;
//         if(n % i == 0){
//             //printf("%d ", i);
//             for(int j = 2; j < i; j++){
//                 if(i % j == 0){
//                     prime = 0;
//                 }
//             }
//             if(prime){
//                 printf("%d", i);
//                 break;
//             }
//         }
//     }
// }

//SWAPPING OF TWO NUMBERS 
// #include<stdio.h>
// int main()
// {
//     /* code */
//     int a = 10 , b = 5;
//     // c = a;
//     // a = b;
//     // b = c;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("%d %d", a,b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         printf("%d - %d\n",i ,  i*i);
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             printf("%d ", i);
//         }
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,c = 0, sum = 0;
//     scanf("%d", &n);
//     int a = n;
//     while(a!=0){
//         a /= 10;
//         c++;
//     }

//     int b = n;
//     while(b!=0){
//         int digit = b % 10;
//         sum += pow(digit, c);
//         b/=10;
//     }
//     if(sum == n){
//         printf("Yes it is an armstrong number.");
//     }
//     else{
//         printf("No it is not an armstrong number.");
//     }
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int i = 1;
//     float total_time = 0, total_distance = 0, tm = 0, ts = 0;
//     while (i <= n)
//     {
//         float d,s;
//         scanf("%f %f", &d, &s);
//         total_distance += d;
//         ts += s;
//         tm = total_distance / ts;
//         i++;
//         total_time = total_time + tm;
//     }
    
//     printf("The total distance = %.2f", total_distance);
//     printf("\nTotal time taken = %.2f", tm);
// }

// #include<stdio.h> // function enhance the readability of the code and it also reduces the number of line of the code.
// int sum(int a, int b){
//     return a+b;
// }
// int main(){
//     int c = 5, d = 10;
//     printf("The sum is : %d", sum(c,d));
// }

// #include<stdio.h>
// int sum(int a, int b){
//     printf("The sum is : %d", a + b);
// }
// int main(){
//     int c = 10, d = 5;
//     sum(c,d);
// }

// //FUNCTION QUESTION
// #include<stdio.h>
// int even_odd(int e){
//     if(e % 2 == 0){
//         printf("\nYes %d is an even number.", e);
//     }
//     else{
//         printf("\nNo %d is an odd number.", e);
//     }
//     return 0;
// }

// void series(int s){
//     int sum = 0;
//     for(int i = 1; i <= s; i++){
//         sum += i;
//     }
//     printf("Sum of the series is : %d \n", sum);
// }

// double result(double a, double b, double c, double d, double e){
//     double per = (a+b+c+d+e)/5.0;
//     printf("Result = %.2lf", per);
//     return 0;
// }

// int main(){
//     int a,r;
//     printf("Enter an number to check whether the gievn number is even or odd: ");
//     scanf("%d", &a);
//     even_odd(a);


//     printf("\nEnter five subjects number: ");
//     double j,k,l,m,n;
//     scanf("%lf %lf %lf %lf %lf", &j, &k, &l, &m, &n);
//     result(j,k,l,m,n);


//     printf("\nEnter the range to find the sum: ");
//     scanf("%d", &r);
//     series(r);
    
//     even_odd(50);
//     even_odd(25);
// }

// #include<stdio.h>
// void cube(int a){ // in void we cannot recall the function
//     printf("Cube is %d", a*a*a);
// }
// int main(){
//     cube(3);
// }


// #include<stdio.h>
// int cube(int a){ 
//     return a*a*a;
// }
// int main(){
//     int b = 3;
//     printf("Cube = %d", cube(b));
// }


// #include<stdio.h>
// //double fun();
// int main(){
//     double fun();
//     printf("1");
//     fun();
//     //return 0;
// }
// double fun(){
//     printf("2");
// }

// #include<stdio.h>
// int count_3s(int n){
//     int c = 0;
//     while (n > 0)
//     {
//         if(n % 10 == 3){
//             c++;
//         }
//         n = n / 10;
//     }
//     return c;
// }

// int count_in_range(int j){
//     int c = 0;
//     for(int i = 2; i <= j; i++){
//         c+=count_3s(i);
//     }
//     return c;
// }
// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     printf("%d", count_in_range(n));
//     return 0;
// }

// #include<stdio.h>
// int count_3s(int n){
//     int c = 0;
//    for (int i = 2; i <= n; i++)
//    {
//     /* code */
//     while (i > 0)
//     {
//         if(i % 10 == 3){
//             c++;
//         }
//         i = i / 10;
//     }
//    }
   
//     return c;
// }

// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     printf("%d", count_3s(n));
//     return 0;
// }

// #include<stdio.h>
// void sum(int *a, int *b){
//     *a = 30;
//     *b = 50;
//     printf("user fn = %d", *a + *b);
// }

// int main(){
//     int i = 10, j = 20;
//     sum(&i, &j);
//     printf("\nMain fn = %d", i+j);
// }

// // recursion
// #include<stdio.h>
// int fact (int n){
//     if(n <= 1){
//         return 1;
//     }
//     else{
//        int res = n * fact(n-1);
//        return res;
//     }
    
// }
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d", &n);
//     printf("The factorial for this number is : %d", fact(n));
// }

// #include<stdio.h>
// int fib(int n){
//     if(n == 0 || n == 1 ){
//         return n;
//     }
//     else{
//         return fib(n-1) + fib(n-2);
//     }
// }

// int main(){
//     int n;
//     printf("enter the term: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", fib(i));
//     }
//     return 0;
    
// }

// #include<stdio.h>
// void mr(int n){
//     if(n==0){
//         return;
//     }
//     printf("%d", n);
//     mr(n-1);
// }
// int main(){
//     mr(5);
//     return 0;
// }

// #include<stdio.h>
// int fun(int n){
//     if(n==4){
//         return n;
//     }
//     else{
//         return 2*fun(n+1);
//     }
// }
// int main(){
//     printf("%d", fun(2));
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// void checkArmstrong(int *n){
//     int temp,d,c = 0, sum = 0;
//     temp = *n;
//     while(temp!=0){
//         temp/=10;
//         c++;
//     }
//     temp = *n;
//     while (temp!=0)
//     {
//         d = temp%10;
//         sum += pow(d,c);
//         temp = temp/10;
//     }
//     if(sum == *n){
//         printf("Armstrong number");
//     }
//     else{
//         printf("Not an armstrong number";)
//     }
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     double value = -7.8;
//     double rounded = round(value);
//     printf("%.2f\n", rounded);
//     return 0;
// }

// #include <stdio.h>

// int fun(int n) {
//     int x = 1, k;
//     if (n == 1)
//         return x;
//     for (k = 1; k < n; k++)
//         x = x + fun(k);
//     return x;
// }
// int main() {
//     int n;
//     n =3;
//     int result = fun(n);
//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int bd(int A) {
//     if (A == 0) {
//         return 0;
//     } else {
//         return (A % 10) + 2 * bd(A / 10);
//     }
// }

// int main() {
//     int n = 1011;
//     printf("%d\n",bd(n));
//     return 0;
// }

// #include <stdio.h>

// int func(int a, int b) {
//     if (b == 1)
//         return a;
//     else
//         return a + func(a, b - 1);
// }

// int main() {
//     int result = func(2, 3);
//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>
// int  Oddmultiply(int n){
//     int product = 1;
//     for(int i = 1; i <= n; i = i + 2){
//         product *= i;
//     }
//     return product;
// }
// int main() {
//     int n;
//     printf("Enter any number: ");
//     scanf("%d", &n);
//     printf("Product: %d", Oddmultiply(n));
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     static int x = 2;
//     printf("%d", x += x -= x * 2);
//     return 0;
// }

// ARRAYS

// #include<stdio.h>
// int main(){
//     int roll_number[] = {1,2,3,4,5,6,7};
//     printf("%d\n", roll_number[0]);
//     for(int i = 0; i <= 6; i++){
//         printf("%d\n", roll_number[i]);
//     }
//     return 0;
// }

// // WRITING USER DEFINED ARRAY
// #include<stdio.h>
// int main(){
//     printf("Enter the value one by one: ");
//     int roll_number[4];
//     for(int j = 0; j<= 3; j++){
//         scanf("%d", &roll_number[j]);
//     }

//     for(int i = 0; i <= 3; i++){
//         printf("%d ", roll_number[i]);
//     }
//     printf("\nTotal size: %d", sizeof(roll_number));
//     return 0;
// }

// // Count the numbers of element;
// #include<stdio.h>
// int main(){
//     int a[] = {1,2,3,4,5};
//     printf("Total size: %d", sizeof(a));
//     // 1 integer store 4 bit
//     int total = sizeof(a)/4;
//     printf("\nTotal elements: %d", total); 
// }

// // Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]
// // marks[10] = {95,65,21,35,23,78,91,41,22,58}
// #include<stdio.h>
// int main(){
//     int marks[10] = {95,65,21,35,23,78,91,41,22,58};
//     for(int i = 0; i < 10; i++){
//         int a = marks[i];
//         if(a<35){
//             printf("%d ", i);
//         }
//     }
// }

// // FIND THE MAXIMUM VALUE and minimum OUT OF ALL THE ELEMENTS IN THE ARRAY
// // arr[8] = {99,2,11,13,3,4,8,7}
// #include<stdio.h>
// int main(){ 
//     int arr[9] = {9,2,11,13,3,0,58,8,58};
//     int max = arr[0]; // first index wala number put kr do
//     int min = arr[0];
//     for(int i = 0; i < 8; i++){
//         if( max < arr[i]){
//             max = arr[i];
//         }
//         if( min > arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("The greatest number is : %d", max);
//     printf("\nThe smallest number is : %d", min);
// }

// //searching of the element in the array
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int loc = -1;
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your input array is : ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     printf("\nEnter the number you want to search for: ");
//     int b;
//     scanf("%d", &b);
//     for(int i = 0; i < a; i++){
//         if(arr[i] == b){
//             loc = i;
//         }
//     }

//     if(loc != -1){
//         printf("Your element %d is present at : %d.", b,loc);
//     }
//     else{
//         printf("Your element %d is not present in the given array.", b);
//     }
// }

// //SEARCHING OF THE ARRAY MULTIPLE TIMES
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int loc = -1;
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your input array is : ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\nEnter the number you want to search for: ");
//     int b;
//     scanf("%d", &b);
//     int c = 0;
//     for(int i = 0; i < a; i++){
//         if(arr[i] == b){
//             loc = i;
//             c++;
//         }
//         while(c!=0){
//             // if(loc != -1){
//             //     printf("\nYour element %d is present at : %d.", b,loc);
//             // }
//             printf("Your element %d is present at : %d.\n", b,loc);
//             c--;
//         }   
//     }
//     if(loc == -1){
//         printf("\nYour element %d is not present in the given array.", b);
//     }
// }

//2D ARRAY

// // for input
// #include<stdio.h>
// int main(){
//     printf("Enter the number of rows and columns: ");
//     int r,c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for(int i = 0; i< r; i++){
//         for(int j = 0; j < c; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(int i = 0; i< r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// // //printing the array
// #include<stdio.h>
// int main(){
//     int a[2][2] = {{3,6}, {2,8}};
//     // print the particular address of the particular element
//     printf("%d\n", a[1][1]);
//     for(int i = 0; i< 2; i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int two_array(int r, int c, a[r][c]){
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int r = 2, c = 2;
//     int k[2][2] = {{1,2},{4,8}};
//     two_array(r,c, k);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5];
//     arr[0] = 5;
//     arr[5] = 6;
//     printf("%d ", arr[0]);
//     printf("%d ", arr[5]);
// }

// Function to call 1d array
// #include<stdio.h>
// void fun(int a[]){
//     a[0] = 4;
//     return;
// }

// int main(){
//     int arr[3] = {1,2,3};
//     printf("%d ", arr[0]);
//     fun(arr);
//     printf("%d ", arr[0]);
//     return 0;
// }

// //SWAPPING OF TWO NUMBERS USING ARRAY CALL BY REFERENCE
// #include<stdio.h>
// void fun(int a[]){
//     int temp = a[0];
//     a[0] = a[1];
//     a[1] = temp;
//     return;
// }

// int main(){
//     int arr[2] = {1,2};
//     printf("%d %d", arr[0], arr[1]);
//     fun(arr);
//     printf("\n%d %d", arr[0], arr[1]);
//     return 0;
// }


// // GIVEN an array of integers, change the value of all odd indexed elements to its second
// // multiple and increment all even indexed value by 10;

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     for(int i = 0; i < a; i++){
//         if(i % 2 == 0){
//             arr[i] = arr[i] +10;
//         }
//         else{
//             arr[i] = arr[i]*2;
//         }
//     }
//     printf("\nAfter editing your array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
// }

// // find the difference between the sum of elements at even indices
// // to the sum of elemnents at the odd indices.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int sum_even = 0;
//     int sum_odd = 0;
//     for(int i = 0; i < a; i++){
//         if(i % 2 == 0){
//             sum_even += arr[i];
//         }
//         else{
//             sum_odd += arr[i];
//         }
//     }

//     int total_sum = sum_even - sum_odd;
//     printf("\nTotal = %d", total_sum);

// }


// // find the number of pairs in the array whose sum 
// // is equal to the given value x.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
    
//     int b;
//     printf("\nEnter the value of x: ");
//     scanf("%d", &b);

//     int sum = 0;
//     int count = 0;
//     for(int i = 0; i < a; i++){
//         for(int j = i+1; j < a ; j++){
//             sum = arr[i] + arr[j];
//             if(sum == b){
//                 count++;
//                 printf("(%d,%d) ", arr[i], arr[j]);
//             }
//         }
//     }
//     printf("\nTotal no. of pairs = %d", count);

// }


// // find the number of triplets in the array whose sum 
// // is equal to the given value x.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
    
//     int b;
//     printf("\nEnter the value of x: ");
//     scanf("%d", &b);

//     int sum = 0;
//     int count = 0;
//     for(int i = 0; i < a; i++){
//         for(int j = i+1; j < a ; j++){
//             for(int k = j+1 ; k < a; k++){
//                 sum = arr[i] + arr[j] + arr[k];
//                 if(sum == b){
//                     count++;
//                     printf("(%d,%d, %d),\n", arr[i], arr[j], arr[k]);
//                 }
//             }
//         }
//     }
//     printf("\nTotal no. of triplets = %d", count);

// }

// //find the second largest array of the array
// #include<stdio.h>
// //#include<limits.h>
// int main(){
//     int a;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter element no. %d - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");

//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int max = arr[0];
//     int sec_max = arr[0];

//     for (int i = 0; i < a; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     //max = 5
//     for (int i = 0; i < a; i++){
//         if(arr[i] != max && sec_max < arr[i]){
//             sec_max = arr[i];
//         }
//     }
    
//     printf("\nSecond maximum value is : %d", sec_max);
// }


//inserting of elements as a specific point.
// #include<stdio.h>
// int main(){
//     int arr[100];
//     int n;
//     printf("Enter how many elements you want: ");
//     scanf("%d", &n);
//     //int arr[n];
//     printf("Enter elements one by one: ");
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     int new_var;
//     printf("\nEnter a value to insert at start: ");
//     scanf("%d", &new_var);
//     arr[0] = new_var;
//     printf("Your new array is: ");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
// }


// //WAP to copy the contents of one array to another in the reverse order.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     printf("\nYour reverse array is: ");
//     int rev_arr[a];
//     for(int i = 0; i < a; i++){
//         rev_arr[i] = arr[a-1-i];
//     }
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d ", rev_arr[i]);
//     }
//     return 0;
// }

// //reverse an array 

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     printf("\nYour reverse array is: ");
//     // int rev_arr[a];
//     for(int i = a-1; i >= 0; i--){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

// // if an array arr contains n elements, then check if the 
// // given array is a palindrome or not.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int c = 0;
//     for(int i = 0; i < a; i++){
//         for(int j = a-1; j >= 0; j--){
//             if(arr[i] == arr[j]){
//                 c++;
//             }
//         }
//     }
//     if(c == a){
//         printf("\nYes it is a palindrome.");
//     }
//     else {
//         printf("\nNo the array is not palindrome.");
//     }
// }

// // DELETION of an element from the array.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int n;
//     printf("\nEnter the element you want to delete: ");
//     scanf("%d", &n);
    
//     int j = 0;
//     for(int i = 0; i < a; i++){
//         if(arr[i] != n){
//             arr[j] = arr[i];
//             j++;
//         }
//     }
//     a = j;
//     printf("Your new array after deleiton: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
// }

// #include<stdio.h>
// void area(int l, int b){
//     int area = l*b;
//     printf("Area: %d", area);
//     return;
// }

// int main(){
//     int length, breadth;
//     printf("Enter your desire length and breadth: ");
//     scanf("%d %d", &length, &breadth);

//     // area = length * breadth;
//     // printf("Area : %d", area);
//     area(length,breadth);
// }

// #include<stdio.h>
// int main(){
//     int a[5] = {4,5,6,7,8};
//     int s = 0;
//     for(int i = 0; i < 5; ++i){
//         a[i] = a[i] * 3;
//         s += a[i];
//     }
//     printf("%d ", s);
// }

// //BUBBLE SORTING IN ARRAY start comparing left element to the right element
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the size of the array: ");
//     scanf("%d", &a);
//     int arr[a];

//     for(int i = 0; i < a; i++){
//         printf("Enter the %d element - ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Your given array is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }

//     int n = a;
//     int temp;

//     for(int i = 0; i < n - 1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         } 
//     }

//     printf("\nYour array after sorting is: ");
//     for(int i = 0; i < a; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// //POINTERS
// syntax of pointers = datatype* name of the variable
// #include<stdio.h>
// int main(){
//     int a = 10;
//     printf("Address of A is = %d", &a);
//     int* k;
//     k = &a;
//     printf("\nAddress of k = %d", k);
//     printf("\nValue %d a", *k);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float b = 10.54;
//     printf("Address of A is = %p", &b);
//     float* k = &b;
//     printf("\nAddress of k = %p", k);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int* a;
//     float* b;
//     char* c;
//     double* d;
//     long* e;
//     printf("\nSize of integer pointer = %d", sizeof(a));
//     printf("\nSize of float pointer = %d", sizeof(b));
//     printf("\nSize of character pointer = %d", sizeof(c));
//     printf("\nSize of double pointer = %d", sizeof(d));
//     printf("\nSize of long pointer = %d", sizeof(e));
// }

// //store the user defined value with the help of pointer
// #include<stdio.h>
// int main(){
//     int a;
//     int *k = &a;
//     printf("Enter the value for variable a: ");
//     scanf("%d", k);
//     printf("The number you gave: %d", *k);
//     printf("\nThe address is %p", k);
//     int b;
//     int *p_b = &b;
//     printf("\nEnter the value for variable b: ");
//     scanf("%d", p_b);
//     printf("Addition of a and b is : %d", *k + *p_b);
//     int res = *k + *p_b;
//     printf("\nADDITION USING THIRD VARIABLE: %d", res);
    
// }

// #include<stdio.h>
// int main(){
//     int a = 1;
//     int *k = &a;
//     printf("\n%d", k);
//     k++;
//     printf("\n%d", k);
//     printf("\n%d", a);
//     k = k + 4;
//     printf("\nAfter 4 bite: %d", k);
// }

// //WAP TO FIND THE FACTORIAL OF A NUMBER USING POINTER.
// #include<stdio.h>
// int main(){
//     int i, n, fact = 1;
//     int* p_n = &n, *p_fact = &fact;
//     printf("Enter a number for factorial: ");
//     scanf("%d", p_n);
//     for ( i = 1; i <=*p_n; i++)
//     {
//         *p_fact = *p_fact * i;
//     }
//     printf("Factorial of number %d is %d", *p_n, *p_fact );
// }

// //WAP WITH THE HELP OF POINTER FIND THE REVERSE OF A NUMBER;
// #include<stdio.h>
// int main(){
//     int n,digit,reverse = 0;
//     int *p_n = &n, *p_digit = &digit, *p_reverse = &reverse;
//     printf("Enter a number: ");
//     scanf("%d", p_n);
//     while(*p_n != 0){
//         *p_digit = *p_n % 10;
//         *p_reverse = *p_reverse * 10 + *p_digit;
//         *p_n/=10;
//     }
//     printf("The reverse of the digit is : %d", *p_reverse);
// }

// #include<stdio.h>
// int main(){
//     int x = 10;
//     char ch = 'A';
//     void *gp;
//     gp = &x;
//     printf("Generic pointer points to the integer value = %d", *(int*)gp);
//     gp = &ch;
//     printf("\nGeneric pointer points to the cahracter value = %c", *(char*)gp);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n = 1;
//     int *ptr = (int *)malloc(n*sizeof(int));
//     *ptr = 6;
//     printf("%d", *ptr);// 6 is printed
//     printf("\n%d", ptr); // printing address hold by pointer before deallocation;
//     free(ptr);
//     printf("\n%d", ptr);// same address will be printed
//     ptr = NULL;
//     printf("\n%d", ptr); // pointer is now changed to null pointer
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     // int *ptr, a = 10;
//     // ptr = &a;
//     // *ptr+=1;
//     // printf("%d %d", *ptr, a);

//     // int *ptr = &x;
//     // printf("%p", ptr);
//     // x++;
//     // printf("\n%p", ptr);
//     // return 0;

//     // int x = 10;
//     // int *p1 = &x, *p2;
//     // *p1 = x + 3;
//     // p2 = p1;
//     // *p2 = *p1 + 2;
//     // printf("%d", x);

//     // char *p = NULL;
//     // char *q = 0;
//     // if(p){
//     //     printf("p");
//     // }
//     // else{
//     //     printf("nullp");
//     // }
//     // if(q){
//     //     printf("q\n");
//     // }
//     // else{
//     //     printf("\nnullq");
//     // }

//     // int i = 10;
//     // void *p = &i;
//     // printf("%f\n", *(float*)p);
//     // return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>

// void foo(int *p)
// {
//     int j = 2;
//     p = &j;
//     printf("%d", *p);
// }
// int main(){
//     int i = 97, *p = &i;
//     foo(&i);
//     printf(" %d", *p);
// }

// #include<stdio.h>
// #include<stdlib.h>

// void foo(int *p, int *q)
// {
//     p = q;
//     *p = 8;
//     *q = 7;
// }
// int main(){
//     int a = 6, b = 5;;
//     foo(&a, &b);
//     printf(" %d  %d", a,b);
// }

// #include<stdio.h>
// int main(){
//     int n;
//     int *num = &n;
//     printf("Enter total val you want to store: ");
//     scanf("%d", num);
//     int arr[*num];
//     for(int i = 0; i < *num; i++){
//         int *a = arr;
//         scanf("%d", a+i); 
//     }
//     for(int i = 0; i < *num; i++){
//         int *a = arr;
//         printf("%d ", *a+i);
//     }


// #include<stdio.h>
// int main(){
//     int a[] = {1,2,3,4};
//     int *p = a, i;
//     p++;
//     *(p+1) = 29;
//     p = p + 1;
//     *p = 23;
//     p--;
//     *(p+0) = 12;
//     p = a;
//     for(i = 0; i < 4; i++){
//         printf("%d ", *(p+i));
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[] = {1,2,3,4};
//     int *p1 = a, i;
//     int *p2 = &a[2];
//     p2--;
//     *(p2-1) = 90;
//     p1 = p2;
//     *p1 = 100;
    
//     for(i = 0; i < 4; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));
//     for(int i = 0 ; i < n; i++){
//         scanf("%d", arr + i);
//     }
//     for(int i = 0 ; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Enter the number of integers to be entered: ");
//     scanf("%d", &n);
//     int *p = (int *)malloc(n * sizeof(int));
//     if(p == NULL){
//         printf("Memmory not available");
//         exit(1);
//     }
//     else{
//         printf("\nMemory allocation was successful.");
//         printf("\nEnter integer values.");
//         for(int i = 0; i < n; i++){
//             scanf("%d", p+i);
//         }
//         for(int i = 0; i < n; i++){
//             printf("\n%d", *(p+i));
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *p;
//     p = (int *)malloc(1*sizeof(int));
//     *p = 6;
//     printf("%d", *p);
//     free(p);
// }

// STRINGS

// #include<stdio.h>
// int main(){
//     char arr[5] = {'a', 'e', 'i', 'o', 'u'};
//     printf("%c ", arr[0]);
//     printf("%c ", arr[1]);
//     printf("%c ", arr[2]);
//     printf("%c ", arr[3]);
//     printf("%c ", arr[4]);
// }

// #include<stdio.h>
// int main(){
//     char arr[5] = {'a', 'e', 'i', 'o', 'u'};
//     printf("%c ", arr[0]);
//     printf("%c ", arr[1]);
//     printf("%c ", arr[2]);
//     printf("%c ", arr[3]);
//     printf("%c ", arr[4]);
//     // print the address of all elements (character stores only 1 byte of storage)
//     printf("\n%p ", &arr[0]);
//     printf("\n%p ", &arr[1]);
//     printf("\n%p ", &arr[2]);
//     printf("\n%p ", &arr[3]);
//     printf("\n%p ", &arr[4]);
// }

// // ASCII value
// // A = 65;
// // a = 97;
// // '0' = 48;
// // '9' = 57;
// #include<stdio.h>
// int main(){
//     char ch = 'A';
//     // 1st method
//     printf("%d ", ch); // use %d for printing ascii value;
//     // 2nd method
//     int x = (int)ch;
//     printf("%d ", x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[] = "Abhishek is the best boy.";
//     int i = 0;
//     while(arr[i] != '\0'){
//         printf("%c", arr[i]);
//         i++;
//     }
// }

// //input of the string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[] = "Abhishek is a good guy";
//     printf("%s\n", str);
//     puts(str); // puts is also used for printing the array of string
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[90];
//     //scanf("%s", str);// only the first word will be consider.
//     fgets(str, 50, stdin);
//     puts(str);
// }

// // reversing an string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%[^\n]s", str);
//     printf("The reverse string is: ");
//     int size = 0;
//     int i = 0;
//     while(str[i] != '\0'){
//         size++;
//         i++;
//     }
//     // printf("%d", size);
//     for(int i = 0, j = size - 1; i <= j; i++, j--){
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     puts(str);
    
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     char str1[100];
//     printf("Enter first string: ");
//     // gets(str); // gets is also used to get the input of the string
//     fgets(str1, 30, stdin);

//     char str2[30];
//     printf("Enter the second string: ");
//     fgets(str2, 30, stdin);
//     // puts(str1); // puts is used to print the string in the next line.
//     // puts(str2);
//     printf("%s", str1);
//     printf("%s", str2);
// }


// // copy a string to another string
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1[20] = "Welcome programming";
//     char str2[20] = "Abhishek Kumar";
//     printf("%s", strcpy(str1, str2));
// }


// // copy 3 character of string 2 to string 1
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1[20] = "Welcome programming";
//     char str2[20] = "Abhishek Kumar";
//     printf("%s", strncpy(str1, str2, 3));
// }


// // String Comaparison based on ascii value
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str1[20] = "Abhishek";
//     char str2[20] = "Abhishek Kumar";
//     if(strcmp(str1, str2) == 0){
//         printf("Same");
//     }else{
//         printf("Not Same");
//     }

//     if(strncmp(str1, str2, 8) == 0){ // Comparinf only 8 characters using strncmp
//         printf("\n8 Characters are same.");
//     }
//     else{
//         printf("\n8 characters are not same");
//     }
// }

// //reversing a string
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<stdlib.h>
// int main(){
//     char s[20];
//     printf("Enter your string: ");
//     fgets(s, 20, stdin);
//     int l = strlen(s);
//     printf("Your input string is: %s", s);
//     printf("your string length is: %d", l);
//     printf("\nYour reverse string is: ");
//     for(int i = l; i >=0; i--){
//         printf("%c", s[i]);
//     }
// }



// #include<stdio.h>
// struct Pythagorean
// {
//     int a;
//     int b;
//     int c;
//     int r;
// };
// int main(){
//     struct Pythagorean p;
//     int a,b,c;
//     int *pa = &a;
//     scanf("%d %d %d", pa, &b, &c);
//     p.r = (a*a) + (b*b);
//     if(p.r == c*c){
//         printf("Pythagorean triple.");
//         if(a == 3 && b == 4 && c == 5 || a == 4 && b == 3 && c == 5 || a == 5 && b == 3 && c == 4){
//             printf("\nSpecial triple.");
//         }
//         else{
//             printf("\nNot a special triple");
//         }
//     }
//     else{
//         printf("\nNot a pythagorean triple.");
//     }
//     return 0;
// }


// 


// // find if a letter is upper case or not
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter any character: ");
//     scanf("%c", &ch);
//     if(ch >= 'A' && ch <= 'Z'){
//         printf("Upper Case Letter");
//     }
//     else if(ch >='a' && ch <= 'z'){
//         printf("Lower Case Letter");
//     }
//     else{
//         printf("Not a letter");
//     }
//     return 0;
// }


// //use recursion to find the sum of n natural numbers.
// #include<stdio.h>

// int sum(int n){
//     if(n == 0){
//         return 0;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     return n + sum(n-1);
// }

// int main(){
//     printf("%d ", sum(3));
//     //sum(5);
//     return 0;
// }

// // use recursion to find the factorial of a number
// #include<stdio.h>
// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     else if(n == 1){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     printf("The factorial of %d is : %d", n, fact(n));
// }


// // use recursion to find the fibonacci series of n numbers
// #include <stdio.h>

// // Recursive function to return the nth Fibonacci number
// int fibonacci(int n) {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series up to %d terms:\n", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }

//     return 0;
// }
 

// // fibonacci series without recursion
// #include<stdio.h>
// int main(){
//     int n, a = 0, b = 1, c;
//     printf("Enter n terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series up to %d terms:\n", n);
//     for(int i = 0; i < n; i++){
//         if( i == 0){
//             c = 0;
//         }
//         else if(i == 1){
//             c = 1;
//         }
//         else{
//             c = a + b;
//         }
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }


// // GCD AND LCM of two numbers
// #include <stdio.h>

// int main() {
//     int a, b, i, gcd, lcm;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Find GCD
//     for (i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }

//     // Find LCM
//     lcm = (a * b) / gcd;

//     printf("GCD = %d\n", gcd);
//     printf("LCM = %d\n", lcm);

//     return 0;
// }


// // pointers use
// #include<stdio.h>

// void work(int a, int b, int *sum, int *prod, int* avg){
//     *sum = a + b;
//     *prod = a * b;
//     *avg = (a + b) / 2;
// }
// int main(){
//     int a = 10, b = 20, sum, prod, avg;
//     work(a, b, &sum, &prod, &avg);

//     printf("Sum = %d\n", sum);
//     printf("Product = %d\n", prod);
//     printf("Average = %d\n", avg);
//     return 0;
// }

// check if a number is prime or not
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     int c = 0;
//     for(int i = 1; i <= a; i++){
//         if(a%i == 0){
//             c++;
//         }
//     }
//     if(c == 2){
//         printf("The %d number is prime", a);
//     }
//     else{
//         printf("Not prime");
//     }
// }


