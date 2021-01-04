Prvočíslo

#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Zadejte kladné celé číslo: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {
       
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 není ani primární, ani složený.");
    }
    else {
        if (flag == 0)
            printf("%d je prvočíslo", n);
        else
            printf("%d není prvočíslo", n);
    }

    return 0;
}