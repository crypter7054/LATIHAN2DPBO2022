
// deklarasi kelas Memory dengan inheritance terhadap kelas Hardware
public class Memory extends Hardware{
    
    // deklarasi dan inisialisasi atribut private
    private int frequency = 0;
    private int memorySize = 0;
    private String supportsCuda = "-";

    
    // constructor tanpa parameter
    public Memory(){

    }
    
    // constructor dengan parameter
    public Memory(int freq, int memory, String supCuda){
        this.frequency = freq;
        this.memorySize = memory;
        this.supportsCuda = supCuda;
    }

    // deklarasi setter sebagai method (Write)
    public void setFreq(int freq){
        this.frequency = freq;
    }
    public void setMemory(int memory){
        this.memorySize = memory;
    }
    public void setSupCUda(String supCuda){
        this.supportsCuda = supCuda;
    }

    // deklarasi getter sebagai method (Read Only)
    public int getFreq(){
        return this.frequency;
    }
    public int getMemory(){
        return this.memorySize;
    }
    public String getSupCuda(){
        return this.supportsCuda;
    }
    
    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayMemory(){
        System.out.println("Frequency    : " + this.getFreq() + " MHz");
        System.out.println("Memory Size  : " + this.getMemory() + " GB");
        System.out.println("Support Cuda : " + this.getSupCuda());
    }
}
