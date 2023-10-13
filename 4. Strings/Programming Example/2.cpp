/*
	Write a program to convert the lower case characters of a string into upper case.
*/
#include <stdio.h>
#include <conio.h>

int main() {
	char str[100], upper_str[100];
	int i=0;
	printf("\nEnter the string : ");
	scanf("%s", &str);
	while(str[i] != '\0') {
		if (str[i]>='a' && str[i]<='z') {
			upper_str[i] = str[i] - 32;
		} 
		else {
			upper_str[i] = str[i];
		}
		i++;
	}
	upper_str[i]='\0';
	printf("\nThe string converted into upper case is : ");
	printf("%s",upper_str);
	return 0;
}
