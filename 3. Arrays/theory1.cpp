#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	// Code for inputting each element of the array
	int i1, marks[10];
	for (i1=0; i1<10; i1++) {
		scanf("%d", &marks[i1]);
	}
	
	// Code to copy an array at the individual element level
	int i2, arr2[10];
	int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (i2=0; i2<10; i2++) {
		arr2[i2] = arr1[i2];
	}
	
	// Code for filling an array with even numbers
	int i3, arr3[10];
	for (i3=0; i3<10; i3++) {
		arr[i3] = i3*2;
	}
	
	
	
	
	return 0;
}
