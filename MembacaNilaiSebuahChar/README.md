## Membaca Nilai Sebuah Karakter
Variabel bertipekan karakter, dapat dibaca dari kode ASCII atau karakter yang diketikkan. Untuk memasukkan nilai karakter, Anda tidak perlu mengetikkan tanda petik, cukup ketikkan nilainya. Misalnya ketikkan Z untuk mengisi nilai variabel bertype char dengan nilai  ‘Z’. Format untuk membaca disesuaikan dengan input-nya:

Jika dibaca dari kode ASCII, maka format pembacaannya adalah %d.

Jika dibaca dari huruf/angka atau karakternya, maka format pembacaannya adalah %c.

### Rangkuman Kompetensi
Mengenal, memahami, dan mengaplikasikan cara memasukkan (input) dan bertype kan char.

### Aktifitas Kreatif
1. Setiap pembacaan selalu diakhiri dengan mengetikkan [Enter] yang pada kenyataanya tidak di simpan. Lalu, bagaiman caranya untuk mempunyai variable yang isinya [Enter]? 
2. Amatilah dan jelaskan apa yang terjadi jika dituliskan dua buah instruksi sebagai berikut :
```
scanf("%c", &cc); scanf ("%c", &cc);
```
3. Apa yang harus diketikkan sebagai input jika dituliskan sebagai berikut :
```
scanf("%c %c", &cc, &c);
```

### Inilah Computational Thinking !
Setelah saya memahami perintah baca dan tulis untuk bilangan numerik, saya sekarang dapat mengenali pola untuk membaca dan menulis variabel berjenis "karakter" yaitu sebuah huruf yang dikenali kode ASCII nya.

saya juga akan mengenali pola untuk format masing-masing type, yaitu %d, %f, dan %c. Sayajuga akan mampu membaca spesifikasi type yang lain dalam  tutorial di Internet terkait kompiler bahasa C yang saya pakai, untuk membaca dan menuliskan variabel bertype lain yang tersedia dalam bahasa tersebut.