#include <stdio.h>
#include <string.h>

// Function to check if n is odd or even
const char* check_odd_even(long long n) {
    char buf[32];
    
   sprintf(buf, "%lld", n);
    
    size_t len = strlen(buf);
    if (len == 0) {
        return "even"; 
    }
    char last_char = buf[len - 1];
    
    if (last_char == '0' || last_char == '2' || last_char == '4' ||
        last_char == '6' || last_char == '8') {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld: %s\n", n, check_odd_even(n));
    
    
    return 0;
}