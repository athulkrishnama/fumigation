import java.util.*;
class Area{
	Scanner sc = new Scanner(System.in);
	void circle(){
		System.out.println("Enter radius of circle:");
		int radius = sc.nextInt();
		System.out.println("Area of circle is " + (3.14 * radius * radius));
	}
	
	void square(){
		System.out.println("Enter side of square:");
		int side = sc.nextInt();
		System.out.println("Area of square is " + (side * side));
	}
	void rectangle(){
		System.out.println("Enter lenght and breadth:");
		System.out.println("Area of rectangle is " + (sc.nextFloat() * sc.nextFloat()));

	}
	void triangle(){
		System.out.println("Enter height and breadth of triangle:");
		System.out.println("Area of triangle is " + (sc.nextFloat()* sc.nextFloat() / 2));
	}
}