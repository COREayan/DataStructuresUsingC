/*	Write a program to read and display n numbers using an array. */

#include<stdio.h>
#include<conio.h>

int main() {
	int i, n, arr[100];
	
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\n");
	
	for (i=0; i<n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nThe array elements are ");
	for (i=0; i<n; i++) {
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
