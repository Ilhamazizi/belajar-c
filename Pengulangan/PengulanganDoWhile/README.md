## Pengulangan do-while 
Pola kalimat while-do dalam bahasa C adalah sebagai berikut:
```
do {
      /* Badan loop */
     /* deretan instruksi yang diulang */
 
} while (<kondisi-pengulangan>) ;
```
Eksekusi dari pengulangan bentuk ini dapat diuraikan sebagai berikut:
[1] Program mengeksekusi deretan instruksi yang diulang.
[2] Program melakukan evaluasi kondisi-pengulangan. 
[3] Jika hasil evaluasinya benar, maka deretan instruksi dilaksanakan.
[1] Program megeksekusi deretan instruksi yang diulang.
[2] Program melakukan evaluasi kondisi-pengulangan. 
[3] Jika hasil evaluasinya benar, maka deretan instruksi dilaksanakan.

Diulang sampai evaluasi kondisi pengulangan hasilnya salah . . .
[1] Program megeksekusi deretan instruksi yang diulang.
[2] Program melakukan evaluasi kondisi- pengulangan. 
[3] Jika hasil evaluasinya salah, maka pengulangan dihentikan.

Deretan  eksekusi diatas dapat diringkas penulisannya menjadi:
Kerjakan deretan instruksi
Selama kondisi-pengulangan benar

### Rangkuman Kompetensi
Mengenal, dan memahami pola kalimat do{ } while (); dan mengaplikasikan untuk program contoh.
Mengenal pola eksekusi dan abstraksi dari do { } while ();.
Karena deretan instruksi dalam badan loop pasti dilaksanakan minimal satu kali, Anda perlu melakukan analisis yang cermat yaitu yakin bahwa instruksi dalam "badan loop" pasti dilaksanakan minimal satu kali tanpa perlu diperiksa sebelumnya

### Aktivitas Kreatif 
Ubahlah program contoh yang diberikan dalam bagian for menjadi bentuk pengulangan yang dijelaskan pada bagian ini.
Ubahlah program contoh yang diberikan dalam bentuk while (..) {...} menjadi bentuk pengulangan yang dijelaskan dalam bagian ini.

### Inilah Computational Thinking !
Anda lakukan dekomposisi suatu construct pengulangan, dan Anda akan menemukan bagian-bagian yang sama : kondisi pengulangan atau kondisi berhenti, dan kumpulan instruksi yang diulang, Anda akan memahami eksekusinya dari kata kunci yang diberikan.

Dengan melakukan dekonstruksi (dekomposisi program menjadi elemen-elemen pembangunnya), Anda dapat mengkonstruksi ulang suatu program menjadi bentuk yang lainnya, yang menghasilkan eksekusi yang sama. Anda mengenali elemen pembangun program dari kata kunci yang dipakai untuk menuliskan instruksi tersebut (aspek tekstual dan sintaktikal), dan juga memahami aspek eksekusi programnya. Sebuah program yang tampaknya berbeda akan sama efeknya (hasilnya) jika dieksekusi. Konstruksi program yang baik dan benar adalah yang dekat dengan maknanya.

Melalui berbagai bentuk loop, Anda mengenal bagaimana komputasi dijalankan oleh komputer untuk dipakai memecahkan persoalan anda.
