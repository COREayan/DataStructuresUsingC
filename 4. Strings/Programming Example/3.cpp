/*
	3. Wrtie a program to append a string to another string.
*/

#include <stdio.h>
#include <conio.h>
int main() {
	char Dest_str[100], Source_str[50];
	int i=0, j=0;
	printf("\nEnter the source string : ");
	scanf("%s", &Source_str);
	printf("\nEnter the destination string : ");
	scanf("%s", &Dest_str);
	while (Dest_str[i]!='\0') {
		i++;
	}
	while(Source_str[j] != '\0') {
		Dest_str[i] = Source_str[j];
		i++;
		j++;
	}
	Dest_str[i] = '\0';
	printf("\nAfter appending, the destination string is : ");
	printf("%s", Dest_str);
	return 0;
}
