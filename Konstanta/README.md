## Apa itu Konstanta 
Konstanta secara konseptual adalah sebuah nama yang isinya tidak boleh diubah, berbeda dengan variabel yang isinya (nilainya) dapat diubah-ubah. Konstanta dapat dituliskan dalam bentuk literal sesuai dengan nilai yang dimaksud. Kenapa konstanta dituliskan sebagai nama dari pada sebagai literal ? agar sekali sebut nilainya dapat dipakai berkali-kali sesuai makna yang terkandung dalam nama konstanta, dan untuk menghindari literal yang bertebaran dalam sebuah program, yang dapat menimbulkan ke-tidak-konsisten-an dalam penulisan (jika salah ketik, maka konstanta yang maksudnya sama akan berbeda nilainya).

Ada tiga cara mendefinisikan konstanta dalam bahasa C, yaitu:

1. Dengan menuliskan nilainya secara langsung (disebut sebagai "literal" sesuai konvensi penulisan dalam bahasanya). Dengan cara ini, tidak mungkin muncul dalam deklarasi nama (karena tidak bernama), dan juga tidak mungkin ditulis di ruas kiri tanda assignment = karena akan menimbulkan salah sintaks.
2. Dengan memanfaatkan macro berkata kunci #define.
3. Dengan mendeklarasikan sebagai const kemudian menyebutkan type dan nilainya.
Best practices : tuliskan nama konstanta sesuai dengan artinya, dan biasanya dituliskan dalam huruf kapital.

### Rangkuman Kompetensi
1. Mendefinisikan nama konstanta yang nilainya tidak sesuai maknanya.
2. Cobalah untuk mengubah nilai konstanta pada badan program dengan melakukan assignment.

### Inilah Computational Thinking !
Konsep Konstanta adalah salah satu construct dalam bahasa pemrograman prosedural/imperatif, termasuk dalam bahasa C, yang harus dipahami bagaimana penulisan dan penggunaannya, serta  mekanisme pendefinisian dan penentuan nilai dalam program. Berbeda dengan variabel yang nilainya dapat diganti-ganti, sebuah nama yang dideklarasi sebagai konstanta akan dicegah untuk diubah nilainya.
