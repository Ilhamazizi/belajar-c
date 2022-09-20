## Pengantar Baca Tulis
Suatu program yang nilainya diberikan dengan assignment dan / atau konstanta, tidak akan dapat dijalankan untuk data lain tanpa mengubah programnya. Agar program dapat dijalankan dengan kata yang berbeda tanpa mengubah program, data diberikan dari luar program dengan instruksi baca yaitu scanf dari bahasa C, dengan menggunakan input standar.

Seperti halnya pada printf dimana kita disuruh harus mendefinisikan format output, untuk membaca suatu data yang diperlukan format input, yang pada umumnya sama dengan format output. Intruksi scanf juga harus disertai dengan %d %f %c sesuai dengan type data yang dibaca.

Perbedaan antara instruksi membaca dan menulis adalah dari cara menuliskan nama variable yang nilainya dibaca berikut contohnya :
1. Untuk membaca nilai sebuah variable integer bernama J, instruksinya adalah scanf ("%d", &J);
2. Untuk membaca nilai sebuah variable bilangan rill bernama X, instruksinya adalah scanf ("%f", &X);
3. Untuk membaca nilai sebuah variable bertype char bernama CX, instruksinya adalah scanf ("%c", &CX);

Untuk type integer, "%d" artinya adalah bahwa program akan membaca data deretan bilangan saja, misalnya 12 sedangkan untuk "%f" program akan membaca sederetan angka yang boleh mengandung titik desimal 34.5 atau dalam format eksponen 3.5E+2 (artinya 350). Batasan nilai yang dapat disimpan dalam type int dan float (baca spesifikasi bahasa C), biasanya integer terbatas dari -32768 s.d 32767 sedangkan bilangan rill antara 10^-38 s.d 10^38. Beberapa varian dari bilangan bulat adalah short, long sedangkan varian bilangan rill adalah double.