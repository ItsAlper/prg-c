Otočené číslo

#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Zadejte celé číslo: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Obrácené číslo = %d", rev);
    return 0;
}