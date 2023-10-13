/*
	6. Write a program to sort an array using insertion sort algorithm.
*/

#include <stdio.h>
#include <conio.h>
#define size 5

void insertion_sort(int arr[], int n);

int main() {
	int arr[size], i, n;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	insertion_sort(arr, n);
	printf("\nThe sorted array is : \n");
	for (i=0; i<n; i++) {
		printf("%d\t", arr[i]);
	}
}

void insertion_sort(int arr[], int n) {
	int i, j, temp; 
	for (i=1; i<n; i++) {
		temp = arr[i];
		j = i - 1;
		while ((temp < arr[j]) && (j>=0)) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
