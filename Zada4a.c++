#include <stdio.h>
#include <stdlib.h>


int sum_iter(int n) {
    n = abs(n);
    int total = 0;

    while (n > 0) {
        total += n % 10;
        n /= 10;
    }

    return total;
}

int sum_rec(int n) {
    n = abs(n);

    if (n < 10)          
        return n;

    return (n % 10) + sum_rec(n / 10);
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Iterative sum: %d\n", sum_iter(n));
    printf("Recursive sum: %d\n", sum_rec(n));

    return 0;
}
