public class Child extends Parent{
    Child(){
        System.out.println("Child class constructor called");
    }
    void childDisplay(){
        System.out.println("I am child class");
    }

    void sayMyName(){
        System.out.println("I am child");
    }

    void sayParentsName(){
        super.sayMyName();
    }

}
