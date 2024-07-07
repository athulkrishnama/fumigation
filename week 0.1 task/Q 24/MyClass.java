import java.util.*;
class MyClass extends Area{
	public static void main(String args[]){
		int choice;
		MyClass obj = new MyClass();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your choice\n1.Circle\n2.Square\n3.Rectangle\n4.Triangle\n");
		choice = sc.nextInt();
		switch(choice){
			case 1:
				obj.circle();
				break;

			case 2:
				obj.square();
				break;

			case 3:
				obj.rectangle();
				break;

			case 4:
				obj.triangle();
				break;

			default:
				System.out.println("Invalid Output");
		}
	}
	void circle(){
		super.circle();
	}
	void square(){
		super.square();
	}
	void rectangle(){
		super.rectangle();
	}
	void triangle(){
		super.triangle();
	}
}