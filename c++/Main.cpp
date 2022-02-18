#include <iostream>
#include <string>

using namespace std;

// import file kelas Memory
#include "Memory.cpp"

int main(){

    // deklarasi var. inputan data
    int freq, memorySize, price;
    string supCuda, brand, model, idProduct;

    // inputan atribut data Memory yaitu frequency, size, dan supportCuda
    cout << ">> MASUKKAN DATA MEMORY <<" << endl;
   
    cout << "Frequency            : ";
    cin >> freq;

    cout << "Memory Size          : ";
    cin >> memorySize;

    cout << "Support Cuda(Yes/No) : ";
    cin >> supCuda;
    cout << "\n";

    // instansi objek kelas Memory dengan memanggil constructor parameter sesuai inputan user
    Memory memo1 = Memory(freq, memorySize, supCuda);

    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    cout << "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====" << endl;
    memo1.displayMemory();
    memo1.displayHardware();
    memo1.displayProduct();
    cout << ">> Data berhasil ditampilkan\n";

    // inputan atribut data Hardware yaitu brand dan model
    cout << "\n\n>> MASUKKAN DATA HARDWARE <<" << endl;

    cout << "Brand : ";
    cin >> brand;

    cout << "Model : ";
    cin >> model;
    cout << "\n";

    // instansi objek kelas Hardware dengan memanggil constructor parameter sesuai inputan user
    Hardware hard1 = Hardware(brand, model);

    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    cout << "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====" << endl;
    memo1.displayMemory();
    hard1.displayHardware();
    hard1.displayProduct();
    cout << ">> Data berhasil ditampilkan\n";

    // inputan atribut data Product yaitu price dan id product
    cout << "\n\n>> MASUKKAN DATA PRODUCT <<" << endl;
    
    cout << "Price(dalam dollar) : ";
    cin >> price;

    cout << "ID Product          : ";
    cin >> idProduct;
    cout << "\n";

    // instansi objek kelas Product dengan memanggil constructor parameter sesuai inputan user
    Product product1 = Product(price, idProduct);

    // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
    cout << "===== DATA MEMORY, HARDWARE, DAN PRODUCT =====" << endl;
    memo1.displayMemory();
    hard1.displayHardware();
    product1.displayProduct();
    cout << ">> Data berhasil ditampilkan\n\n";

    return 0;
}