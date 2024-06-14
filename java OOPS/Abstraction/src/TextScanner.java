public class TextScanner {
    AbstractClass obj;
    TextScanner(AbstractClass obj){
        this.obj = obj;
    }

    void scanText(){
        obj.onScan("scanned text will come here");
    }
}
