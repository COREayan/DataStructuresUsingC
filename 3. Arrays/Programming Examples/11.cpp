/*
	11. Write a program to merge two unsorted arrays.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int arr1[10], arr2[10], arr3[20];
	int i, n1, n2, m, index=0;
	printf("\nEnter the number of elements in array1 : ");
	scanf("%d", &n1);
	printf("\n\nEnter the elements of the first array");
	for (i=0; i<n1; i++) {
		printf("\narr1[%d] = ", i);
		scanf("%d", &arr1[i]);
	}
	printf("\nEnter the number of elements in array2 : ");
	scanf("%d", &n2);
	printf("\n\nEnter the elements of the second array");
	for (i=0; i<n2; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr2[i]);
	} 
	m = n1 + n2;
	for (i=0; i<n1; i++) {
		arr3[index] = arr1[i];
		index++;
	}
	for (i=0; n2; i++) {
		arr3[index] = arr2[i];
		index++;
	}
	printf("\n\nThe merged array is");
	for (i=0; i<m; i++) {
		printf("\narr[%d] = %d", i, arr3[i]);
	}
	return 0;
}
