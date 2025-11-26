#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;  

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("The factorial is: %lld\n", factorial);
}