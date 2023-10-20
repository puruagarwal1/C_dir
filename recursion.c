#include <stdio.h>

unsigned long long factorial(int n) {
    // Base case: 0! = 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    unsigned long long result = factorial(num);
    printf("Factorial of %d is %llu\n", num, result);
    return 0;
}
