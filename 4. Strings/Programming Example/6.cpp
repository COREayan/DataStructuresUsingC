/*
	Write a program to extract a substring from the middle of a given string.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	char str[100], substr[100];
	int i=0, j=0, n, m;
	printf("\nEnter the main string : ");
	scanf("%s", &str);
	printf("\nEnter the position from which to start the substring : ");
	scanf("%d", &m);
	printf("\nEnter the length of the substring : ");
	scanf("%d", &n);
	i=m;
	while (str[i]!='\0' && n>0) {
		substr[j] = str[i];
		i++;
		j++;
		n--;
	}
	substr[j]='\0';
	printf("\nThe substring is : ");
	printf("%s", substr);
	
	return 0;
}
