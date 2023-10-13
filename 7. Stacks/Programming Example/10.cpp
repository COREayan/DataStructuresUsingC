/*
	10. Write a program to calculate the factorial of a given number.
*/

#include <stdio.h>
int Fact(int); //FUNCTION DECLARATION
int main() {
	int num, val;
	printf("\nEnter the number : ");
	scanf("%d", &num);
	val = Fact(num);
	printf("\nFactorial of %d = %d", num, val);
	return 0;
}
int Fact(int n) {
	if (n==1) {
		return 1;
	} else {
		return (n*Fact(n-1));
	}
}
