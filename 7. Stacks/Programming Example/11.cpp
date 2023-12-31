/*
	Write a program to calculate the GCD of two numbers using recursive functions.
*/

#include <stdio.h>
int GCD(int, int);
int main() {
	int num1, num2, res;
	printf("\nEnter the two numbers : ");
	scanf("%d %d", &num1, &num2);
	res = GCD(num1, num2);
	printf("\nGCD of %d and %d = %d", num1, num2, res);
	return 0;
}

int GCD(int x, int y) {
	int rem;
	rem = x%y;
	if (rem == 0) {
		return y;
	} else {
		return (GCD(y, rem));
	}
}
