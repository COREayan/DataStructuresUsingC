/*
	1. Write a program to find the length of a string.
*/

#include <stdio.h>
#include <conio.h>
int main() {
	char str[100], i=0, length;
	printf("\nEnter the string : ");
	scanf("%s", &str);
	while (str[i] != '\0') {
		i++;
	}
	length = i;
	printf("\nThe length of the string is : %d", length);
	return 0;
}
