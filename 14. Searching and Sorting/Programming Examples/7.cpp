/*
	Write a program to sort an array using selection sort algorithm
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int smallest(int arr[], int k, int n);
void selection_sort(int arr[], int n);

int main(int argc, char *argv[]) {
	int arr[10], i, n; 
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\nEnter the elements of the array : ");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	} 
	selection_sort(arr, n);
	printf("\nThe sorted array is : \n");
	for (i=0; i<n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}

int smallest(int arr[], int k, int n) {
	int pos=k, small=arr[k], i;
	for (i=k+1; i<n; i++) {
		if (arr[i]<small) {
			small = arr[i];
			pos = i;
		}
	}
	return pos;
}

void selection_sort(int arr[], int n) {
	int k, pos, temp;
	for (k=0; k<n; k++) {
		pos = smallest(arr, k, n);
		temp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = temp;
	}
}
