
# import file kelas parent
from Product import Product

# deklarasi kelas Hardware dengan inheritance terhadap kelas Product
class Hardware(Product):
    
    # deklarasi dan inisialisasi atribut private
    __brand = "-"
    __model = "-"

    
    # constructor dengan parameter
    def __init__(self, brand = "", model = ""):
        self.__brand = brand
        self.__model =  model


    # deklarasi setter sebagai method (Write)
    def setBrand(self, brand):
        self.__brand = brand

    def setModel(self, model):
        self.__model = model
    
    
    # deklarasi getter sebagai method (Read Only)
    def getBrand(self):
        return self.__brand
    
    def getModel(self):
        return self.__model


    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayHardware(self):
        
        print("Brand        : " + str(self.getBrand()))
        print("Model        : " + str(self.getModel()))