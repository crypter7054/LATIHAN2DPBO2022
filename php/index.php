<?php

// import file kelas Memory
include "Memory.php";

    // instansi objek kelas Memory menggunakan constructor
    $memo1 = new Memory();

    // isi atribut data pada kelas Memory menggunakan method Setter
    $memo1->setFreq(5600);
    $memo1->setSize(32);
    $memo1->setSupCuda("No");
    
    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    echo "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====". "<br>";
    $memo1->displayMemory();
    $memo1->displayHardware();
    $memo1->displayProduct();
    echo ">> Data berhasil ditampilkan\n". "<br>";
    echo "\n". "<br>";


    // instansi objek kelas Hardware menggunakan constructor
    $hard1 = new Hardware();

    // isi atribut data pada kelas Hardware menggunakan method Setter
    $hard1->setBrand("Corsair");
    $hard1->setModel("DOMINATOR");

    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    echo "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====". "<br>";
    $memo1->displayMemory();
    $hard1->displayHardware();
    $hard1->displayProduct();
    echo ">> Data berhasil ditampilkan\n". "<br>";
    echo "\n". "<br>";


    // instansi objek kelas Product menggunakan constructor
    $product1 = new Product();

    // isi atribut data pada kelas Hardware menggunakan method Setter
    $product1->setPrice(394);
    $product1->setID("GX5M2B5600C36W");

    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    echo "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====". "<br>";
    $memo1->displayMemory();
    $hard1->displayHardware();
    $product1->displayProduct();
    echo ">> Data berhasil ditampilkan\n". "<br>";
    echo "\n". "<br>";
?>