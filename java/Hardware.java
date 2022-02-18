
// deklarasi kelas Hardware dengan inheritance terhadap kelas Product
public class Hardware extends Product{
    
    // deklarasi dan inisialisasi atribut private
    private String brand = "-";
    private String model = "-";

    
    // constructor tanpa parameter
    public Hardware(){
        
    }

    // constructor dengan parameter
    public Hardware(String brand, String model){
        this.brand = brand;
        this.model = model;
    }

    // deklarasi setter sebagai method (Write)
    public void setBrand(String brand){
        this.brand = brand;
    }
    public void setModel(String model){
        this.model = model;
    }

    // deklarasi getter sebagai method (Read Only)
    public String getBrand(){
        return this.brand;
    }
    public String getModel(){
        return this.model;
    }
    
    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayHardware(){
        System.out.println("Brand        : " + this.getBrand());
        System.out.println("Model        : " + this.getModel());
    }
}
