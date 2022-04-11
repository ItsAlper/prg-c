#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main () {
int x[2][4], v = 0, vv = 0, z = 0;

void vycisteni() {
    int i;
    for (i = 1; i <= 4; i++){
        x[1][i] = 0;
    }
    for (i = 1 ; i <= 4; i++){
        x[2][i] = 0;
    }
}

void miny() {
    int i;
   srand(time(NULL));
   for (i = 1; i <= 4; i++){
        x[1][i] = rand() % 5 + 1;
        }
    for (i = 1 ; i <= 4; i++){
        x[2][i] = rand() % 5 + 1;
    }
}

void vyber() {
    printf("Vyber radku (1-5):");
    scanf("%d", &v);
    printf("Vyber sloupce (1-5):");
    scanf("%d", &vv);
}

int porovnani() {
    int i;
    for (i = 1; i <= 4; i++)
    {
        if(x[1][i] == v && x[2][i] == vv)
        {
            printf("Game Over!");
            z = 1;
            return(0);
        }
    
    }
    
}
vycisteni();
miny();

while (z == 0)
{
    vyber();
    porovnani();
    if (z == 0)
    {
        printf("Nevybouchl jsi! Pokracuj!\n");
    }
}


   return(0);
}
