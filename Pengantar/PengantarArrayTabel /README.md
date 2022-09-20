## Pengantar Array Tabel
Satu nama variabel yang pernah Anda deklarasikan, hanya berisi satu nilai saja. Ada kasus di mana kita membutuhkan untuk menyimpan sekumpulan nilai yang  merupakan himpunan nilai yang maknanya sejenis. Misalnya ada 5 anak, dan kita ingin menyimpan data umur masing-masing anak yang ber-type integer. Untuk menyimpan data umur kelima anak tersebut, kita dapat menuliskan 5 baris instruksi seperti berikut:
```
int umur1;
int umur2;
int umur3;
int umur4;
int umur5;
```
Cara tersebut tidak praktis, bayangkan jika nilai yang disimpan untuk 1000 anak atau bahkan lebih. Program Anda akan sangat panjang hanya untuk mendeklarasikan variabel saja.

Untuk mendefinisikan tabel umur yang dapat menampung 1000 nilai integer, Anda cukup membuat deklarasi.
```
int umur[1000];
```
Dan Anda akan dapat mengakses elemennya dengan indeks yang dimulai dari 0: umur[0], umur[1], … umur[999].
Tabel dikenal dengan istilah lain : array, vektor, larik,…

