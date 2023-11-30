#include <stdio.h>

int main() {
    int n, o, sum = 0, product = 1, digit;

    
    scanf("%d", &n);

    o = n;

    
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    if (sum == product) {
        printf("Spy Number
", o);
    } else {
        printf("Not Spy Number
", o);
    }

    return 0;
}
