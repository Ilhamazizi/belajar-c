## Rangkuman Kompetensi
Mengenal perbedaan Anda instruksi kondisional if (...) {....} yang dijelaskan sebelumnya dengan instruksi kondisional if (...) {....}  else { .... } yang dijelaskan pada bagian ini. 
Memahami eksekusi "sekuensial" yang akan dilakukan sebuah instruksi  if (...) {....}  else { .... }.

### Aktivitas kreatif 
Anda dapat menuliskan eksekusi yang sama dari sebuah instruksi  if (...) {....}  else { .... }  dengan menuliskannya menjadi dua buah instruksi if yang berurutan sebagai berikut :  if ( <kondisi. ) {....}; if (<!kondisi>) { .... } dengan melakukan transformasi kode pada contoh program di atas. Namun, maknanya akan berbeda (lihat penjelasan pada bagian "Inilah Computational Thinking!").

### Inilah Computational Thinking!
Instruksi if() { }  else { } adalah salah satu “tools” untuk melakukan dekomposisi. Anda melakukan dekomposisi persoalan menjadi dua bagian yang “disjoint”, yaitu bagian yang memenuhi syarat, dan yang tidak memenuhi syarat. Masing-masing bagian ditangani dengan instruksi (solusi) yang berbeda. Pola ini akan sering Anda perlukan, misalnya untuk menuliskan instruksi yang menangani data valid dan data tidak valid (error condition).

Dari segi eksekusi, sebuah instruksi if (...) {....}  else { .... } dapat dituliskan menjadi dua buah instruksi if yang berturutan dengan kondisi yang saling menegasi. Dalam hal ini, Anda menuliskan konstruksi program yang salah karena makna dari analisis if ... else .... adalah menentukan dalam satu analisis, dua kondisi yang bertentangan. Program Anda benar dalam eksekusinya, namun salah konstruksinya. Inilah Computational Thinking, di mana dekomposisi suatu program menjadi elemen pemrograman harus sesuai dengan analisis persoalannya. Misalnya saat Anda menganalisis data yang valid dan tidak valid, Anda melakukan peninjauan terhadap data valid, dan menentukan tindakan (dalam bentuk sederetan instruksi) terhadap dua kasus tersebut berdasarkan satu analisis.

Kalimat if (...) {...} mempunyai pola analisis persoalan yang berbeda dengan if (...) {... }  else {... }.