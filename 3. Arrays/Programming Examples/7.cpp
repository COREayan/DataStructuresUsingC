/*
	7.	Write a program to insert a number at a given location in array.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int i, n, num, pos, arr[10];
	printf("\nEnter the number of elements in the array : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("\n arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nEnter the number to be inserted : ");
	scanf("%d", &num);
	printf("\nEnter the position at which the number has to be added : ");
	scanf("%d", &pos);
	for (i=n-1; i>=pos; i--) {
		arr[i+1] = arr[i];
	}
	arr[pos] = num;
	n  = n+1;
	printf("\nThe array after insertion of %d is : ", num);
	for (i=0; i<n; i++) {
		printf("\narr[%d] = %d", i, arr[i]);
	}
	return 0;
}
