/*
	20. Write a program to read and display a 3x3 matrix.
*/
#include <stdio.h>
#include <conio.h>
int main() {
	int i, j, mat[3][3];
	printf("\nEnter the elements of the matrix ");
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\nThe elements of the matrix are ");
	for (i=0; i<3; i++) {
		printf("\n");
		for (j=0; j<3; j++) {
			printf("%d\t", mat[i][j]);
		}
	}
	return 0;
}


