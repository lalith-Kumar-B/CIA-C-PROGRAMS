//computation in C to calculate NCR = N!/( N-R)! *R!
#include <stdio.h>
// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
	int i;
    unsigned long long fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate NCR
unsigned long long calculateNCR(int n, int r) {
    if (r < 0 || r > n) {
        return 0; // NCR is not defined for these values of n and r
    }
    unsigned long long nFactorial = factorial(n);
    unsigned long long rFactorial = factorial(r);
    unsigned long long nMinusRFactorial = factorial(n - r);
    
    return nFactorial / (rFactorial * nMinusRFactorial);
}

int main() {
    int n, r;
    printf("Enter the values of N and R: ");
    scanf("%d %d", &n, &r);

    unsigned long long result = calculateNCR(n, r);

    printf("%dC%d = %llu\n", n, r, result);

    return 0;
}

