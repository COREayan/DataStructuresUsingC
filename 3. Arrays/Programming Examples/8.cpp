/*
	8.	Write a program to insert a number in an array that is already sorted in ascending order.
*/

#include <stdio.h>
#include <conio.h>
int main() {
	int i, n, j, num, arr[10];
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the number to be inserted : ");
	scanf("%d", &num);
	for (i=0; i<n; i++) {
		if (arr[i] > num) {
			for (j=n-1; j>=i; j--) {
				arr[j+1] = arr[j];
			}
			arr[i] = num;
			break;
		}
	}
	n = n+1;
	printf("\nThe array after insertion of %d is : ", num);
	for (i=0; i<n; i++) {
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return 0;
}
