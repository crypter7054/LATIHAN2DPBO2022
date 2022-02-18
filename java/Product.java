public class Product {
    
    // deklarasi dan inisialisasi atribut private
    private int price = 0;
    private String idProduct = "-";

    
    // constructor tanpa parameter
    public Product(){

    }

    // constructor dengan parameter
    public Product(int price, String id){
        this.price = price;
        this.idProduct = id;
    }


    // deklarasi setter sebagai method (Write)
    public void setPrice(int price){
        this.price = price;
    }
    public void setIdProduct(String id){
        this.idProduct = id;
    }

    // deklarasi getter sebagai method (Read Only)
    public int getPrice(){
        return this.price;
    }
    public String getIdProduct(){
        return this.idProduct;
    }

    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayProduct(){
        System.out.println("Price        : $" + this.getPrice());
        System.out.println("ID Product   : " + this.getIdProduct());
    }
}
