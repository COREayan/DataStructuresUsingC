/*
	7. Write a program to insert a string in the main text.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	char text[100], str[20], ins_text[100];
	int i=0, j=0, k=0, pos;
	printf("\nEnter the main text : ");
	scanf("%s", &text);
	printf("\nEnter the string to be inserted : ");
	scanf("%s", &str);
	printf("\nEnter the position at which the string has to be inserted : ");
	scanf("%d", &pos);
	while (text[i] != '\0') {
		if (i==pos) {
			while (str[k] != '\0') {
				ins_text[j] = str[k];
				j++;
				k++;
			}
		} else {
			ins_text[j] = text[i];
			j++;
		}
		i++;
	}
	ins_text[j] = '\0';
	printf("\nThe new string is : ");
	printf("%s", ins_text);

	return 0;
}

