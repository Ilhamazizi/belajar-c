#include<stdio.h>

int main() {

    /* Kamus */
    int a;
    float x;

    /* Program */
    printf ("Contoh membaca dan menulis, ketik nilai integer : ");
    scanf ("%d", &a); //Membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dg &a
    printf ("Nilai yang dibaca : %d \n", a);

    printf ("Ketikan nilai sebuah bilangan rill : ");
    scanf ("%f", &x); //Membaca nilai a yang bertype integer
    printf ("Nilai yang dibaca : %f \n", x);

}