#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void generate_items(float array[], size_t size);
void show_items(float array[], size_t size);
void round_items(float array[], size_t size);

int main() {
    srand((unsigned int)time(NULL));
    float array[10];
    generate_items(array, 10);
    show_items(array, 10);

    round_items(array, 10);
    show_items(array, 10);

    return 0;
}

void generate_items(float array[], size_t size)
{
    float a = 50.0;
    for (size_t i=0; i<size; i++)
    {
        array[i] = (float)rand()/(float)(RAND_MAX/a);
    }
}

void show_items(float array[], size_t size)
{
    for (size_t i=0; i<size; i++)
    {
        printf("%f, ", array[i]);
    }
    printf("\n");
}

void round_items(float array[], size_t size)
{
    for (size_t i=0; i<size; i++)
    {
        array[i] = roundf(array[i]);
    }
}