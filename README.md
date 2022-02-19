# LATIHAN2DPBO2022
## Identitas
- Nama : Yosafat
- NIM  : 2009929
- Prodi : Ilmu Komputer C2

## Janji
Saya Yosafat (2009929) mengerjakan evaluasi Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Soal
1. _Diberikan kelas-kelas berikut: Memory : frequency, memorySize, supportsCuda, Product : price, idProduct, dan Hardware : brand, model. Setiap kelas dalam file terpisah. Semua 
   kelas memiliki metode get set. Buatlah kelas Main yang menampilkan data tersebut._

2. _Kerjakan nomor 1 menggunakan bahasa lainnya (C++, PHP, dan Python)._

### Analisis
Berdasarkan soal, maka dapat diidentifikasi beberapa hal yaitu sebagai berikut:
1. Membuat program menggunakan paradigma pemrograman berorientasi objek atau OOP dan menerapkan konsep pewarisan atau inheritance pada bahasa Java, C++, PHP, dan Python. Dikarenakan akan menggunakan paradigma pemrograman berorientasi objek, maka pada program ini akan membutuhkan lebih dari satu kelas untuk menerapkan konsep inheritance multilevel dan atribut sesuai dengan ketentuan soal. Berdasarkan kondisi nyata, maka model inheritance dari soal ini adalah Product <- Hardware <- Memory. Hal ini karena Memory merupakan bagian dari Hardware dan dapat dikatakan merupakan objek yang hampir sama. Namun terdapat beberapa perbedaan spefisik dari segi atribut yang terikat pada kelasnya sehingga akan lebih tepat jika kelas Memory dijadikan turunan dari kelas Hardware begitu juga dengan kelas Hardware yang merupakan turunan dari kelas Product.
2. Pada program ini terdapat beberapa kelas yaitu Memory, Hardware, dan Product yang masing-masing kelasnya terdapat atribut. Kelas-kelas tersebut harus memiliki method Setter dan Getter. Kelas Memory terdapat atribut frequency dan memorySize yang pada program ini memiliki tipe data integer dikarenakan data yang akan dimasukkan berupa angka. Sedangkan untuk atribut supportsCuda akan bertipe data string dikarenakan data yang akan dimasukkan berupa string atau kumpulan karakter misalnya : Yes/No. Kemudian untuk kelas Hardware, atribut brand dan model bertipe data string dikarenakan pada representasi nyatanya data yang akan dimasukkan berupa kumpulan karakter atau string. Sedangkan untuk kelas Product, atribut price bertipe data integer yang sesuai dengan representasi data nyatanya bahwa harga dinyatakan sebagai angka, kemudian untuk atribut idProduct bertipe data string karena lebih cocok jika direpresentasikan menjadi kumpulan karakter. 
3. Method yang digunakan pada program ini antara lain, Constructor, Setter dan Getter, Display serta Destructor. Terdapat dua jenis Constructor pada program ini yaitu Constructor tanpa parameter dan Constructor dengan parameter. Beberapa bahasa program yang digunakan menerapkan kedua jenis Constructor, tetapi pada bahasa tertentu hanya menggunakan Constructor dengan parameter. Method Setter dan Getter yang akan digunakan pada program bertujuan untuk menerapkan konsep enkapsulasi. Kemudian, method Display adalah method yang dibuat untuk menampilkan data pada kelas tertentu. Method Display ini dirancang untuk menerapkan konsep inheritance multilevel, karena pada fungsi driver utama setiap objek turunan/anak yang dibuat akan memanggil method Display pada kelas orang tuanya. Hal ini bertujuan untuk mengecek apakah objek dari kelas turunan/anak dapat mengakses method yang terdapat pada kelas orangtuanya. Asumsinya jika objek kelas turunan/anak dapat mengakses method kelas orangtuanya maka konsep inherintance multilevel berhasil diterapkan.

### Desain
Berdasarkan analisis terhadap soal, maka program dapat didesain sebagai berikut:
1. Program terdiri dari file kelas yaitu, Memory, Hardware, dan Product serta file driver utama yaitu Main
2. Setiap bahasa program yang digunakan dibuat untuk dapat menerima inputan user, kecuali bahasa PHP data yang dimasukkan secara hardcode.
4. File kelas Memory terdapat deklarasi dan inisialiasi atribut private yaitu frequency, memorySize, dan supportsCuda dengan tipe data yang telah ditentukan sebelumnya. Selanjutnya, terdapat deklarasi method Constructor, Setter dan Getter, Display, serta Destructor (pada bahasa tertentu). Sedangkan kelas Hardware terdapat deklarasi dan inisialiasi atribut private yaitu brand dan model dengan tipe data yang telah ditentukan, seperti halnya dengan kelas Memory maka selanjutnya terdapat deklarasi method yang sama. Terakhir, kelas Product terdapat deklarasi dan inisialiasi atribut private yaitu price dan idProduct dengan tipe data yang telah ditentukan serta dilanjutkan dengan deklarasi method yang digunakan.
5. File Main menjadi driver utama yang terdapat deklarasi untuk import file kelas yang dibutuhkan. Pada kasus ini, bahasa C++ dan PHP deklarasi untuk import file kelas hanya dilakukan pada file Memory. Sedangkan Python deklarasi untuk import file kelas dilakukan pada seluruh file kelas yaitu Memory, Hardware, dan Product. Selanjutnya, terdapat deklarasi variabel inputan user untuk menerima inputan data pada setiap kelas. Setelah menerima inputan user, maka proses instanti objek menggunakan Constructor dengan parameter dilakukan. Terakhir, data pada obek akan ditampilkan menggunakan method Display sekaligus menguji konsep inheritance multilevel. 

## Screenshot
### C++
#### Bagian 1
![c++ (1)](https://user-images.githubusercontent.com/77567907/154723536-d7e392f0-1262-4d09-b167-ec98c45540d0.jpg)
#### Bagian 2
![c++ (2)](https://user-images.githubusercontent.com/77567907/154723918-3a1754f6-5d7c-42bc-ab25-766f494e6c57.jpg)

### Java
#### Bagian 1
![java (1)](https://user-images.githubusercontent.com/77567907/154723923-ca0e6f3f-ee2a-4208-b221-ff36218f1353.jpg)
#### Bagian 2
![java (2)](https://user-images.githubusercontent.com/77567907/154723926-b74866d2-e3e7-4203-b94b-704097922190.jpg)

### Python
#### Bagian 1
![python (1)](https://user-images.githubusercontent.com/77567907/154723933-3375156d-16b7-4fcf-83db-0df658c44b93.jpg)
#### Bagian 2
![python (2)](https://user-images.githubusercontent.com/77567907/154723934-7895736f-1d1e-4b8e-89b0-e59184db7a82.jpg)

### PHP
![php](https://user-images.githubusercontent.com/77567907/154723928-51d62df6-0f65-4107-94ed-2545af12e260.jpg)
