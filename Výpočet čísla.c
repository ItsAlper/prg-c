#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Zadejte kladné celé číslo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Součet = %d", sum);
    return 0;
}
