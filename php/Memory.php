<?php

// import file kelas parent
include "Hardware.php";

// deklarasi kelas Memory dengan inheritance terhadap kelas Hardware
class Memory extends Hardware{

    // deklarasi dan inisialisasi atribut private
    private $frequency = 0;
    private $memorySize = 0;
    private $supportCuda = "-";
    

    // constructor dengan parameter
    public function __construct($inputFreq = 0, $inputSize = 0, $inputSupCuda = ""){
        $this->frequency = $inputFreq;
        $this->memorySize = $inputSize;
        $this->supportCuda = $inputSupCuda;
    }


    // deklarasi setter sebagai method (Write)
    public function setFreq($freq){
        $this->frequency = $freq;
    }

    public function setSize($size){
        $this->memorySize = $size;
    }

    public function setSupCuda($supCuda){
        $this->supportCuda = $supCuda;
    }

    
    // deklarasi getter sebagai method (Read Only)
    public function getFreq(){
        return $this->frequency;
    }

    public function getSize(){
        return $this->memorySize;
    }

    public function getSupCuda(){
        return $this->supportCuda;
    }

    
    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayMemory(){
        echo "Frequency    : ". $this->getFreq(). " MHz". "<br>";
        echo "Memory Size  : ". $this->getSize(). " GB". "<br>";
        echo "Support Cuda : ". $this->getSupCuda(). "<br>";
    }

    // destructor
    public function __destruct(){

    }
}

?>