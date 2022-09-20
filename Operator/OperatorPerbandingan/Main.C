#include <stdio.h>

int main() {

    /* Kamus */
    int x = 5;
    int y = 8;

    /* Program */
    printf ("Hasil X < Y : %d \n", x > y);
    printf ("Hasil X > Y : %d \n", x < y);
    printf ("Hasil X <= Y : %d \n", x <= y);
    printf ("Hasil X >= Y : %d \n", x >= y);
    printf ("Hasil X == Y : %d \n", x == y); //Operator kesamaan : ==
    printf ("Hasil X != Y : %d \n", x != y); //Operator ke-tidaksamaan : !=

    printf ("Hasil X == X : %d \n", x == x); //Operator kesamaan : ==
    printf ("Hasil X != X : %d \n", x != x); //operator Ke-tidaksamaan : != 

    return 0;
    
}