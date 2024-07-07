public class main {
    public static void main(String[] args) {
        SampleThread t1 =new SampleThread(1);
        SampleThread t2 =new SampleThread(2);
        SampleThread t3 =new SampleThread(3);
        t1.start();
        t2.start();
        t3.start();

    }
}
