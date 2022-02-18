#include <iostream>
#include <string>

using namespace std;

class Product{
    
    // deklarasi dan inisialisasi atribut private
    private:
        int price = 0;
        string idProduct = "-";

    public:

        // constructor tanpa parameter
        Product(){
            
        }

        // constructor dengan parameter
        Product(int inputPrice, string inputIdProduct){
            this->price = inputPrice;
            this->idProduct = inputIdProduct;
        }

        // deklarasi setter sebagai method (Write)
        void setPrice(int inputPrice){
            this->price = inputPrice;
        }
        void setID(int inputIdProduct){
            this->idProduct = inputIdProduct;
        }

        // deklarasi getter sebagai method (Read Only)
        int getPrice(){
            return this->price;
        }
        string getID(){
            return this->idProduct;
        }

        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayProduct(){
            
            cout << "Price        : $" << this->getPrice() << endl; 
            cout << "ID Product   : " << this->getID() << endl; 

        }

        // destructor
        ~Product(){
            
        }

};