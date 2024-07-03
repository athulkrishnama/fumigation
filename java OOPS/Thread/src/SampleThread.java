public class SampleThread extends Thread {
    int a;
    SampleThread(int a){
        this.a = a;
    }
   public void run(){
        super.run();
        for (int i = 0; i < 10; i++) {
            System.out.println("Count: " + i + " Thread: " + a);
            try{

                Thread.sleep(100);
            }
            catch (Exception e){

            }
        }
    }
}
