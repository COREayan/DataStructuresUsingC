/*
	9. Write a program to delete a number from a given location in an array.
*/
#include <stdio.h>
#include <conio.h>

int main() {
	int i, n, pos;
	int arr[10];
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the position from which the number has to be deleted : ");
	scanf("%d", &pos);
	for (i=pos; i<n-1; i++) {
		arr[i] = arr[i+1];
	}
	n--;
	printf("\nThe array after deletion is : ");
	for (i=0; i<n; i++) {
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return 0;
	
}
