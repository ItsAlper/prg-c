Kontrola čísla, zda-li je liché nebo sudé

#include <stdio.h>
int main() {
    int num;
    printf("Zadejte celé číslo: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d je sudé číslo.", num);
    else
        printf("%d je liché číslo.", num);
    
    return 0;
}