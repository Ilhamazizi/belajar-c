## Pengisian Nilai dengan Inisialisasi 
Pengisian nilai dapat dilakukan saat suatu variabel dideklarasi melalui kalimat int i; yang artinya Anda menyatakan (declare) bahwa Anda akan memakai sebuah variabel bernama i.

Dengan mendeklarasikan suatu variabel berjenis int maka variabel tersebut dapat menampung nilai bilangan bulat antara -32767 dan 32767 pada compiler 16 bit seperti Turbo C. Sedangkan untuk compiler 32 bit, batasan nilai bilangan bulat adalah –2147483648 hingga 2147483647. Jika Anda membutuhkan untuk nilai yang lebih besar, akan dibahas nanti pada modul selanjutnya.

Selain ditentukan nilainya, nilai tersebut akan dicetak ke layar. Untuk mencetak, komputer perlu diberitahu bagaimana suatu nilai dicetak. %d pada teks program akan digantikan oleh nilai I di layar.

### Rangkuman Kompetensi
1. Memahami nama variabel dan bagaimana memperkenalkannya ke program.
2. Memahami makna dan dampak konstruksi   “=” dalam bahasa C, dalam sebuah deklarasi variabel.
3. Memahami dampak eksekusi  “%d” dan hubungannya dengan nilai variabel, pada perintah printf dalam bahasa C. 

### Aktivitas kreatif
Latihan pemahaman nama variabel: gantilah teks program int i; menjadi  int I; atau int radius;int umur;int jumlah; dan amatilah apa yang terjadi saat eksekusi.
Latihan pemahaman eksekusi:
Gantilah baris int i=5; dengan int i; dan amatilah apa yang terjadi.
Tuliskan beberapa baris nama variabel integer, misalnya j, k dan cetaklah setelah deklarasinya. Kesimpulan apa yang di dapat?
**Contoh :**
```
int bebek=10; /* bebekku ada 10 */
float luas=2.5; /* luas kebunkan 2.5 hektar */
float keliling= 2* 3.14* 5.5; /* keliling dari sebuah lingkaran yang jari-jarinya 5.5. cm */
```

### Inilah Computational Thinking!

Nama "Variabel" dan isi (nilai yang disimpannya) merupakan construct paling mendasar dalam pemrograman prosedural/imperatif, termasuk bahasa C. Nama variabel ini dipakai sebagai pengenal dari alamat memori yang akan dipakai menyimpan nilai, yang type-nya ditunjukkan sebelum namanya. Pada contoh di atas, nama i bertype integer (bilangan bulat, disingkat int), artinya akan menyimpan nilai bilangan bulat. Tanda "=" dalam konteks ini adalah sebuah "construct" (konstruksi) paling mendasar dalam bahasa C, yang artinya : simpanlah nilai di ruas kanan ke dalam nama variabel di ruas kiri. 

Ada 3 tahapan yang dilakukan kompiler melalui instruksi int i=5; yaitu tahapan pendefinisian nama (i), alokasi memori untuk menyimpan nilai, dan inisialisasi nilai variabel tersebut dengan nilai yang ada di ruas kiri. Nilai tersebut dapat berupa hasil perhitungan, misalnya anda dapat menuliskan:

int nilaiku=3*5; artinya komputer akan menghitung 3x5 (hasilnya 15) dan akan menyimpan nilai 15 dalam variabel nilaiku.