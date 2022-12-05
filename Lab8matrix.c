
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 4
typedef int matrix[ARRAY_SIZE][ARRAY_SIZE];

void fillMatrix(matrix m){
	int i, j;
	for (i = 0; i < ARRAY_SIZE; i++){
		for (j = 0; j < ARRAY_SIZE; j++){
			printf("Row: %d, Column: %d... ", i + 1, j + 1);
			scanf("%d", &m[i][j]);
		}
	}
}

void printMatrix(matrix m){
	int i, j;
	for (i = 0; i < ARRAY_SIZE; i++){
		for (j = 0; j < ARRAY_SIZE; j++){
			printf("%6d", m[i][j]);
		}
		printf("\n");
	}
}

/*
 * operation = 'a'  ->  matrix addition
 * operation = 's'  ->  matrix substraction
 * operation = 'h'  *>  hadamard product
 */
void matrixOperation(matrix s, matrix a, matrix b, char operation){
	int i, j;
	if (operation == 'a'){
		for (i = 0; i < ARRAY_SIZE; i++){
			for (j = 0; j < ARRAY_SIZE; j++){
				s[i][j] = a[i][j] + b[i][j];
			}
		}
	}

	else if (operation == 's'){
		for (i = 0; i < ARRAY_SIZE; i++){
			for (j = 0; j < ARRAY_SIZE; j++){
				s[i][j] = a[i][j] - b[i][j];
			}
		}
	}

	if (operation == 'h'){
		for (i = 0; i < ARRAY_SIZE; i++){
			for (j = 0; j < ARRAY_SIZE; j++){
				s[i][j] = a[i][j] * b[i][j];
			}
		}
	}
}

void matrixMultiplication(matrix s, matrix a, matrix b){
	int sum = 0;
	int i, j, k;
	for (i = 0; i < ARRAY_SIZE; i++){
		for (j = 0; j < ARRAY_SIZE; j++){
			for (k = 0; k < ARRAY_SIZE; k++){
				sum += a[i][k] * b[k][j];
			}
			s[i][j] = sum;
			sum = 0;
		}
	}
}

int main()
{
	matrix a, b, add, sub, hmd, mul;
	printf("Fill the first matrix:\n");
	fillMatrix(a);
	printf("\nFill the second matrix:\n");
	fillMatrix(b);
	matrixOperation(add, a, b, 'a');
	matrixOperation(sub, a, b, 's');
	matrixOperation(hmd, a, b, 'h');
	matrixMultiplication(mul, a, b);

	printf("\nMatrix Addition:\n");
	printMatrix(add);
	printf("\nMatrix Subtraction:\n");
	printMatrix(sub);
	printf("\nHamadard product:\n");
	printMatrix(hmd);
	printf("\nMatrix multiplication:\n");
	printMatrix(mul);

	return 0;
}
