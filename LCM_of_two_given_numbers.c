#include <stdio.h>

// Function to calculate GCD
int calculateGCD(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return calculateGCD(num2, num1 % num2);
}

// Function to calculate LCM using GCD
int calculateLCM(int num1, int num2) {
    int gcd = calculateGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

// Main function
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int lcm = calculateLCM(num1, num2);
    printf("%d",lcm);
    return 0;
}