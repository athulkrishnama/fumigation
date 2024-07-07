#include <stdio.h>

void print_matrix( int row, int col, int arr[50][50]){
	int i,j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

void read_matrix( int row, int col, int arr[50][50]){
	int i,j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("Element [%d][%d]: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
}


void matrix_addition(){
	int arr1[50][50], arr2[50][50], arr3[50][50], row, col, i, j;

	printf("Enter no of rows in matrix: ");
	scanf("%d", &row);

	printf("Enter no of columns in matrix: ");
	scanf("%d", &col);
	
	printf("Enter matrix 1\n");
	read_matrix( row, col, arr1);


	printf("Enter matrix 2\n");
	read_matrix( row, col, arr2);
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("Matrix after addition is: \n");
	print_matrix( row, col, arr3);
}

void matrix_substraction(){
	int arr1[50][50], arr2[50][50], arr3[50][50], row, col, i, j;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);

	printf("Enter number of columns: ");
	scanf("%d", &col);

	printf("Enter matrix 1\n");
	read_matrix(row, col, arr1);

	printf("Enter matrix 2\n");
	read_matrix(row, col, arr2);
    // print_matrix(50,50, arr1);
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr3[i][j] = arr1[i][j] - arr2[i][j];
		}
	}
	printf("arr1 %d" , arr1[0][2]);
	printf("Substracted matrix is\n");
	print_matrix(row, col, arr3);
}
void matrix_multiplication(){
	int arr[50][50],  i, j, row, col, mul;

	printf("Enter number of rows in matrix: ");
	scanf("%d", &row);

	printf("Enter number of columns in matrix: ");
	scanf("%d", &col);

	printf("Enter the matrix: \n");
	read_matrix(row, col, arr);

	printf("Enter the number to multiply: ");
	scanf("%d", &mul);

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr[i][j] = arr[i][j] * mul;
		}
	}

	printf("Matrix after multiplication is: \n");
	print_matrix(row, col, arr);

}
void matrix_transpose(){
	int arr[50][50], trans[50][50],  i, j, row, col;

	printf("Enter number of rows in matrix: ");
	scanf("%d", &row);

	printf("Enter number of columns in matrix: ");
	scanf("%d", &col);

	printf("Enter the matrix: \n");
	read_matrix(row, col, arr);

	printf("Original Matrix\n");
	print_matrix(row, col, arr);
	
	for(i = 0;  i < row; i++){
		for(j = 0; j < col; j++){
			 trans[j][i] = arr[i][j];
		}
	}
	

	printf("Transposed Matrix\n");
	print_matrix(col, row, trans);
}
void Exit(char *ch){
	
	
	printf("Do you want to exit(y/n):");
	scanf("%s", ch);
	
}


int main(){
	int choice;
	char ch;
	
	do{
		printf("1.Matrix Addition\n2.Matrix Substraction\n3.Matrix Multiplication\n4.Matrix Transpose\n5.Exit\n\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				matrix_addition();
				break;
			case 2:
				matrix_substraction();
				break;
			case 3:
				matrix_multiplication();
				break;
			case 4:
				matrix_transpose();
				break;
			case 5: 
				Exit(&ch);
				break;
			default:
				printf("\n\nInvaild Input \n"); 
		} 
	}while( ch !='y' && ch != 'Y');
}