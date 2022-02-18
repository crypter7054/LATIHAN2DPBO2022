
# import file kelas parent
from Hardware import Hardware

# deklarasi kelas Memory dengan inheritance terhadap kelas Hardware
class Memory(Hardware):
    
    # deklarasi dan inisialisasi atribut private
    __frequency = 0
    __memorySize = 0
    __supportCuda = "-"        


    # constructor dengan parameter
    def __init__(self, freq = 0, size = 0, supCuda = ""):
        
        self.__frequency = freq
        self.__memorySize = size
        self.__supportCuda = supCuda

    
    # deklarasi setter sebagai method (Write)
    def setFreq(self, freq):
        self.__frequency = freq
    
    def setSize(self, size):
        self.__memorySize = size
    
    def setSupCuda(self, supCuda):
        self.__supportCuda = supCuda

    
    # deklarasi getter sebagai method (Read Only)
    def getFreq(self):
        return self.__frequency
    
    def getSize(self):
        return self.__memorySize
    
    def getSupCuda(self):
        return self.__supportCuda

    
    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayMemory(self):
        print("\nFrequency    : " + str(self.getFreq()) + " MHz")
        print("Memory Size  : " + str(self.getSize()) + " GB")
        print("Support Cuda : " + str(self.getSupCuda()))