import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {

        // deklarasi var. inputan data
        int freq, memorySize, price;
        String supCuda, brand, model, idProduct;

        // deklarasi scanner untuk membuat inputan user
        Scanner input = new Scanner(System.in);

        // inputan atribut data Memory yaitu frequency, size, dan supportCuda
        System.out.println(">> MASUKKAN DATA MEMORY <<");

        System.out.print("Frequency            : ");
        freq = input.nextInt();
        
        System.out.print("Memory Size          : ");
        memorySize = input.nextInt();
        
        System.out.print("Support Cuda(Yes/No) : ");
        supCuda = input.next();
        System.out.print("\n");
        
        // instansi objek kelas Memory dengan memanggil constructor parameter sesuai inputan user
        Memory memo1 = new Memory(freq, memorySize, supCuda);
        
        // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
        System.out.println("===== DATA MEMORY, HARDWARE, DAN PRODUCT =====");
        memo1.displayMemory();
        memo1.displayHardware();
        memo1.displayProduct();
        System.out.println(">> Data berhasil ditampilkan\n");


        // inputan atribut data Hardware yaitu brand dan model
        System.out.println("\n>> MASUKKAN DATA HARDWARE <<");

        System.out.print("Brand : ");
        brand = input.next();
        
        System.out.print("Model : ");
        model = input.next();
        System.out.print("\n");

        // instansi objek kelas Hardware dengan memanggil constructor parameter sesuai inputan user
        Hardware hard1 = new Hardware(brand, model);

        // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
        System.out.println("===== DATA MEMORY, HARDWARE, DAN PRODUCT =====");
        memo1.displayMemory();
        hard1.displayHardware();
        hard1.displayProduct();
        System.out.println(">> Data berhasil ditampilkan\n");
        

        // inputan atribut data Product yaitu price dan id product
        System.out.println("\n>> MASUKKAN DATA PRODUCT <<");

        System.out.print("Price(dalam dollar) : ");
        price = input.nextInt();
        
        System.out.print("ID Product          : ");
        idProduct = input.next();
        System.out.print("\n");

        // instansi objek kelas Product dengan memanggil constructor parameter sesuai inputan user
        Product product1 = new Product(price, idProduct);

        // panggil method display dengan menerapkan konsep inheritance (yang dapat mengakses method yang ada pada kelas parent) untuk menampilkan data
        System.out.println("===== DATA MEMORY, HARDWARE, DAN PRODUCT =====");
        memo1.displayMemory();
        hard1.displayHardware();
        product1.displayProduct();
        System.out.println(">> Data berhasil ditampilkan\n");
    }

}
