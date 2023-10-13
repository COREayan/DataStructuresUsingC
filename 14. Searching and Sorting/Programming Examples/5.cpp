/*
	5. Write a program to enter n numbers in an array. Redisplay the array with elements being sorted in ascending order.
*/

#include <stdio.h>
#include <conio.h>
void bubble_sort(int *arr, int n);

int main() {
	int i, n, temp, j, arr[10];
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\nEnter the elements : ");
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i=0; i<n; i++) {
		for (j=0; j<n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\nThe array sorted in ascending order is : \n");
	for (i=0; i<n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}

void bubble_sort(int *arr, int n) {
	int i, j, temp, flag=0; 
	for (i=0; i<n; i++) {
		for (j=0; j<n-i-1; j++) {
			if (arr[j]>arr[j+1]) {
				flag = 1;
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
		if (flag==0) // array is sorted
			return;
	}
}
