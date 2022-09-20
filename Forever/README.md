## Forever 
Program berikut ini adalah contoh program yang akan dijalankan terus menerus, yang kelak akan berguna. Misalnya, program sistem operasi, akan berjalan terus menerus menunggu sampai pengguna menekan suatu tanda “exit”. sebuah "screen saver" juga akan menggambarkan sesuatu di layar secara terus menerus.

Untuk saat ini, cara menghentikan program adalah dengan menginterupsi eksekusi yaitu dengan menekan tombol [Ctrl] dan tombol "c" secara bersamaan.

Instruksi while (1)  akan selalu menghasilkan benar sehingga instruksi dalam badan loop while tersebut akan dieksekusi terus menerus.

Sedangkan for (;;) biasa dibaca sebagai forever artinya tidak ada yang dilakukan pada awal, tidak ada definisi kondisi berhenti, dan tidak ada instruksi pengubah. Artinya adalah badan loop akan dijalankan terus menerus karena tidak ada awal dan tidak ada akhir.

JIka dalam badan loop tidak ada instruksi menulis, maka Anda tidak akan tahu bahwa program sedang aktif menjalankan instruksi dalam badan loop.

### Rangkuman Kompetensi
Mengenal kerangka program yang akan berjalan tanpa henti, yaitu program yang hidup terus menerus yang terkadang justru dibutuhkan kelak.

### Aktivitas Kreatif 
Anda dapat menambahkan instruksi untuk menangani ketukan tombol/kunci yang lain (bukan interupsi) dalam badan loop.

### Inilah Computational Thinking !
Pada contoh ini, Anda mempelajari pola sebuah program yang hidup terus menerus (infinite loop), yang memang sengaja diprogram seperti contoh di atas. Sebuah loop yang terus menerus akibat kesalahan program tidak boleh terjadi. 
Misalnya program sebagai berikut (class Main2.C).
Program pada class Main2.C mengakibatkan program tidak pernah berhenti karena instruksi if (a=5) akan mengakibatkan evaluasi kondisi pada if selalu true dan a bernilai 5. Setelah instruksi if, a akan bernilai 6.
