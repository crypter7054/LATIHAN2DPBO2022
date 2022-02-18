<?php

// import file kelas parent
include "Product.php";

// deklarasi kelas Hardware dengan inheritance terhadap kelas Product
class Hardware extends Product{

    // deklarasi dan inisialisasi atribut private
    private $brand = "-";
    private $model = "-";


    // constructor dengan parameter
    public function __construct($inputBrand = "", $inputModel = ""){
        $this->brand = $inputBrand;
        $this->model = $inputModel;
    }


    // deklarasi setter sebagai method (Write)
    public function setBrand($brand){
        $this->brand = $brand;
    }

    public function setModel($model){
        $this->model = $model;
    }


    // deklarasi getter sebagai method (Read Only)
    public function getBrand(){
        return $this->brand;
    }

    public function getModel(){
        return $this->model;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayHardware(){
        echo "Brand        : ". $this->getBrand(). "<br>";
        echo "Model        : ". $this->getModel(). "<br>";
    }

    
    // destructor
    public function __destruct(){

    }
}

?>