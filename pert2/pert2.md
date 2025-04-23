# TIPE DATA

>Data types atau tipe data adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan. Untuk mengembangkan sebuah program, ada beberapa tipe data. Di antaranya adalah Character, String, Array, Numbers dan Booleans.

* Bilangan Bulat (integer)
>>Tipe bilangan bulat (Integer) adalah tipe data numerik yang biasa digunakan apabila bertemu dengan bilangan bulat, seperti 1, 27, 100, dll. Bilangan ini juga mengenal nilai positif dan negatif (signed number). Terdiri dari :
>>- Byte (8 bit)
>>Tipe byte biasa digunakan pada saat kita bekerja dengan data stream pada file maupun jaringan. Tipe ini diperlukan saat kita melakukan proses seperti membaca dan menulis. Selain itu, byte juga digunakan saat kita menggunakan data biner yang tidak kompatibel dengan tipe lainnya pada program bahasa Java.
>>- Short (16 bit)
>>Tipe short sangat umum digunakan pada komputer yang berkapasitas 16-bit, sehingga sangat jarang sekali kita temui dengan kapasitas laptop saat ini.
>>- Int (32 bit)
>>Tipe int termasuk tipe yang sangat sering dipakai saat ini karena merepresentasikan angka dalam pemrograman. Sebab tipe data int dianggap paling efisien daripada tipe bilangan bulat lainnya. Tipe int digunakan pada indeks dalam struktur perulangan maupun dalam array.
>>- Long (64)
>>Tipe long biasa digunakan saat nilainya berada di luar kapasitas rentang tipe int karena tipe long punya range sangat tinggi dibanding tipe data lainnya. Dengan kata lain, tipe long dibutuhkan saat data memiliki range di luar jangkauan tipe int, short, maupun byte.
* Bilangan Pecahan (Floating Point)
>>Tipe bilangan pecahan atau floating point adalah bilangan yang menangani bilangan desimal atau perhitungan secara detail. Karena kemampuannya, float point berbanding terbalik dengan integer. Terdapat dua tipe pada bilangan pecahan ini :
>>- Float (4 bytes dan 32 bit)
>>Tipe float biasa digunakan untuk menandai nilai yang presisi seperti ketelitian tunggal (single precision) dengan menggunakan penyimpanan 32-bit. Tipe ini memiliki kemampuan yang lebih cepat jika digunakan pada prosesor-prosesor tertentu dan pastinya memakan ruang penyimpanan yang lebih kecil dari tipe double.
>>- Double (8 bytes dan 64 bit)
>>Tipe double memiliki tingkat ketelitian secara ganda atau double precision dengan menggunakan ruang penyimpanan 64-bit dalam menyimpan nilainya. Tipe tersebut pastinya memberikan kemampuan menghitung matematis secara lebih cepat dari tipe float. Dalam perhitungan yang bersifat bilangan riil dan menginginkan hasil yang lebih akurat, sebaiknya menggunakan tipe ini.
* Karakter (Char)
>>Tipe data karakter tunggal yang biasa didefinisikan dengan tanda petik (‘) di awal dan di akhir karakternya. Tipe ini mengikuti aturan “unicode” sehingga bilangan harus diawali kode “/u”. Tetapi juga biasa menggunakan bilangan heksadesimal dari 0000 sampai FFFF.
* Boolean
>>Tipe data boolean merupakan tipe yang memiliki dua nilai yaitu benar (true) atau salah (false). Nilai yang digunakan pada tipe ini sangat penting dalam mengambil keputusan suatu kejadian tertentu.