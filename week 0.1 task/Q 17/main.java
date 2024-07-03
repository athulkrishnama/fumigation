import java.util.*;
class main{
	public static void main(String args[]){
		main obj = new main();
		Scanner sc = new Scanner(System.in);
		float num1, num2;
		int choice;
		System.out.print("Enter Number 1: ");
		num1 = sc.nextFloat();
		System.out.print("Enter Number 2: ");
		num2 = sc.nextFloat();
		System.out.println("Enter your prefered function: \n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
	
	choice = sc.nextInt();
	switch(choice){
		case 1:
			obj.addition(num1, num2);
			break;
		case 2:
			obj.substraction(num1, num2);
			break;

		case 3:
			obj.multiplication(num1, num2);
			break;

		case 4:
			obj.division(num1, num2);
			break;

		default:
			System.out.println("Invalid Input");
	}
	}
	
	void addition(float num1, float num2){
		System.out.println("Result is " + (num1 + num2));
	}
	void substraction(float num1, float num2){
		System.out.println("Result is " + (num1 - num2));
	}
	void multiplication(float num1, float num2){
		System.out.println("Result is " + (num1 * num2));
	}
	void division(float num1, float num2){
		System.out.println("Result is " + (num1 / num2));
	}

}