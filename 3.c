#include <stdio.h>
int main() {
    int n;
    float factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d = %f\n", n, factorial);
    return 0;
}