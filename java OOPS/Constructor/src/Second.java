public class Second {
    String name = "Defalut name";
    Second(){
        System.out.println("You have created a object using default constructor");
    }
    Second(String name){
        System.out.println("Hello " + name + " \nYou have created a object using parameterised constructor");
        this.name = name;
    }
}
