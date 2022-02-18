#include <iostream>
#include <string>

using namespace std;

// import file kelas parent
#include "Product.cpp"

// deklarasi kelas Hardware dengan inheritance terhadap kelas Product
class Hardware : public Product{
    
    // deklarasi dan inisialisasi atribut private
    private:
        string brand = "-";
        string model = "-";

    public:

        // constructor tanpa parameter
        Hardware(){
            
        }

        // constructor dengan parameter
        Hardware(string inputBrand, string inputModel){
            this->brand = inputBrand;
            this->model = inputModel;
        }

        // deklarasi setter sebagai method (Write)
        void setBrand(string brand){
            this->brand = brand;
        }
        void setModel(string model){
            this->model = model;
        }

        // deklarasi getter sebagai method (Read Only)
        string getBrand(){
            return this->brand;
        }
        string getModel(){
            return this->model;
        }

        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayHardware(){
            
            cout << "Brand        : " << this->getBrand() << endl; 
            cout << "Model        : " << this->getModel() << endl; 

        }

        // destructor
        ~Hardware(){

        }

};