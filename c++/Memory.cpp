#include <iostream>
#include <string>

using namespace std;

// import file kelas parent
#include "Hardware.cpp"

// deklarasi kelas Memory dengan inheritance terhadap kelas Hardware
class Memory : public Hardware{

    // deklarasi dan inisialisasi atribut private
    private:
        int frequency = 0;
        int memorySize = 0;
        string supportCuda = "-";

    public:

        // constructor tanpa parameter
        Memory(){
            
        }

        // constructor dengan parameter
        Memory(int inputFreq, int inputMemory, string inputSupCuda){
            this->frequency = inputFreq;
            this->memorySize = inputMemory;
            this->supportCuda = inputSupCuda;
        }

        // deklarasi setter sebagai method (Write)
        void setFreq(int freq){
            this->frequency = freq;
        }
        void setMemory(int memory){
            this->memorySize = memory;
        }
        void setSupCuda(string supCuda){
            this->supportCuda = supCuda;
        }

        // deklarasi getter sebagai method (Read Only)
        int getFreq(){
            return this->frequency;
        }
        int getMemorySize(){
            return this->memorySize;
        }
        string getSupportCuda(){
            return this->supportCuda;
        }

        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayMemory(){
            
            cout << "Frequency    : " << this->getFreq() << " MHz" << endl; 
            cout << "Memory Size  : " << this->getMemorySize() << " GB" << endl; 
            cout << "Support Cuda : " << this->getSupportCuda() << endl; 

        }

        // destructor
        ~Memory(){

        }

};