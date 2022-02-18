class Product():
    
    # deklarasi dan inisialisasi atribut private
    __price = 0
    __idProduct = 0

    
    # constructor dengan parameter
    def __init__(self, price = 0, idProduct = 0):
        self.__price = price
        self.__idProduct = idProduct

    
    # deklarasi setter sebagai method (Write)
    def setPrice(self, price):
        self.__price = price

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    
    # deklarasi getter sebagai method (Read Only)
    def getPrice(self):
        return self.__price

    def getIdProduct(self):
        return self.__idProduct


    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayProduct(self):
        
        print("Price        : $" + str(self.getPrice()))
        print("ID Product   : " + str(self.getIdProduct()))