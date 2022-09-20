#include <stdio.h>

int main() {

    /* Kamus */
    int a;

    /* Program */
    printf ("Contoh IF satu kasus \n");
    printf ("Ketikkan suatu nilai integer : ");
    scanf ("%d", &a);
    
    if (a > 0) {

        printf ("Nilai a positif %d \n", a);
        
    }
    /* Jika nilai a tidak posotif maka program tidak melakukkan apa-ap */
    return 0;

}