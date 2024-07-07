import java.util.*;

class MyClass{
	public static void main(String args[]){
		int len;
		MyClass obj = new MyClass();
		int arr[][] = new int[50][50];
		len = obj.getArray(arr);
		obj.displayArray(arr, len);
	}
	
	int getArray(int arr[][]){
		Scanner sc = new Scanner(System.in);
		int len, i, j;
		System.out.println("Enter size of array: ");
		len = sc.nextInt();
		System.out.println("Enter array elements\n");
		for(i = 0; i < len; i++){
			for(j = 0; j < len; j++){
				arr[i][j] = sc.nextInt();
			}
		}
		return len;
	}
	
	void displayArray(int arr[][], int len){
		int i,j;
		System.out.println("Array is: \n");
		for(i = 0; i < len ; i++){
			for(j = 0; j < len; j++){
				System.out.print(arr[i][j] + "  ");
			}
			System.out.println();
		}

	
	}
}

