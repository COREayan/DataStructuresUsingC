/*	Write a program to find the mean of n numbers using arrays. */
#include<stdio.h>
#include<conio.h>
int main() {
	int i, n, arr[100], sum=0;
	float mean = 0.0;
	
	printf("\nEnter the number of elements in the array: "); 
	scanf("%d", &n);
	printf("\n");
	
	for (i=0; i<n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<n; i++) {
		sum += arr[i];
	}
	mean = (float)sum/n;
	
	printf("\nThe sum of the array elements = %d", sum);
	printf("\nThe mean of the array elements = %.2f", mean);
	
	return 0;
}
