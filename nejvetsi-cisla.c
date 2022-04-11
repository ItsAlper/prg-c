#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Zadejte tři čísla: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f je největší číslo.", n1);

    if (n2 >= n1 && n2 >= n3)
        printf("%.2f je největší číslo.", n2);

    if (n3 >= n1 && n3 >= n2)
        printf("%.2f je největší číslo.", n3);

    return 0;
}
