/*
	13. Write a program to read an array of n numbers and then find the smallest number.
*/

#include <stdio.h>
#include <conio.h>
void read_arr(int arr[], int n);
int smallest(int arr[], int n);

int main() {
	int num[10], n;
	printf("\nEnter the size of array : ");
	scanf("%d", &n);
	read_arr(num, n);
	printf("\nEnter of elements in the array : ");
//	for (int i=0; i<n; i++) {
//		printf("\narr[%d] = %d", i, num[i]);
//	} 
	printf("Smallest element in the array : %d", smallest(num, n));
	return 0;
	
}

void read_arr(int arr[], int n) {
	int i;
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
}

int smallest(int arr[], int n) {
	int smallest = arr[0];
	for (int i=1; i<n; i++) {
		if (arr[i]<smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
}
