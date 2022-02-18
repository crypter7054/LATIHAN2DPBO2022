<?php

class Product{ 

    // deklarasi dan inisialisasi atribut private
    private $price = 0;
    private $idProduct = "-";


    // constructor dengan parameter
    public function __construct($inputPrice = 0, $inputID = ""){
        $this->price = $inputPrice;
        $this->idProduct = $inputID;
    }


    // deklarasi setter sebagai method (Write)
    public function setPrice($price){
        $this->price = $price;
    }

    public function setID($idProduct){
        $this->idProduct = $idProduct;
    }


    // deklarasi getter sebagai method (Read Only)
    public function getPrice(){
        return $this->price;
    }

    public function getID(){
        return $this->idProduct;
    }

    
    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayProduct(){
        echo "Price        : $". $this->getPrice(). "<br>";
        echo "ID Product   : ". $this->getID(). "<br>";
    }

    
    // destructor
    public function __destruct(){

    }
}

?>
