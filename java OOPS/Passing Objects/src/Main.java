public class Main {
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        System.out.println("Value of a is " + b.a);
        a.changeNum(b);
        System.out.println("Value of a after calling changeNum is " + b.a);
        System.out.println(b);
    }
}
