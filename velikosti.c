#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Velikost int: %zu bytes\n", sizeof(intType));
    printf("Velikost float: %zu bytes\n", sizeof(floatType));
    printf("Velikost double: %zu bytes\n", sizeof(doubleType));
    printf("Velikost char: %zu byte\n", sizeof(charType));
    
    return 0;
}
