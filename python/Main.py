
# import file kelas yang dibutuhkan
from Memory import Memory
from Hardware import Hardware
from Product import Product


# inputan atribut data Memory yaitu frequency, size, dan supportCuda
print(">> MASUKKAN DATA MEMORY <<")

freq = input("Frequency            : ")
memorySize = input("Memory Size          : ")
supCuda = input("Support Cuda(Yes/No) : ")

# instansi objek kelas Memory dengan memanggil constructor parameter sesuai inputan user
memo1 = Memory(freq, memorySize, supCuda)

# panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
print("\n===== DATA MEMORY, HARDWARE, DAN PRODUCT =====", end = "")
memo1.displayMemory()
memo1.displayHardware()
memo1.displayProduct()
print(">> Data berhasil ditampilkan\n")


# inputan atribut data Hardware yaitu brand dan model
print("\n>> MASUKKAN DATA HARDWARE <<")

brand = input("Brand : ")
model = input("Model : ")

# instansi objek kelas Hardware dengan memanggil constructor parameter sesuai inputan user
hard1 = Hardware(brand, model)

# panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
print("\n===== DATA MEMORY, HARDWARE, DAN PRODUCT =====", end = "")
memo1.displayMemory()
hard1.displayHardware()
hard1.displayProduct()
print(">> Data berhasil ditampilkan\n")


# inputan atribut data Product yaitu price dan id product
print("\n>> MASUKKAN DATA PRODUCT <<")

price = input("Price(dalam dollar) : ")
idProduct = input("ID Product          : ")

# instansi objek kelas Product dengan memanggil constructor parameter sesuai inputan user
product1 = Product(price, idProduct)

# panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
print("\n===== DATA MEMORY, HARDWARE, DAN PRODUCT =====", end = "")
memo1.displayMemory()
hard1.displayHardware()
product1.displayProduct()
print(">> Data berhasil ditampilkan\n")