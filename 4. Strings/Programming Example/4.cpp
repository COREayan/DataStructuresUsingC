/*
	4. Write a program to compare two strings. 
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	char str1[50], str2[50];
	int i=0, len1=0, len2=0, same=0;
	printf("\nEnter the first string : ");
	scanf("%s",&str1);
	printf("\nEnter the second string : ");
	scanf("%s", &str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1==len2) {
		while (i<len1) {
			if (str1[i] == str2[i]) {
				i++;
			} else break;
		}
		if (i==len1) {
			same = 1;
			printf("\nthe two strings are equal");
		}
	}
	if (len1 != len2) {
		printf("\nThe two strings are not equal");
	}
	if (same == 0) {
		if (str1[i]>str2[i]) {
			printf("\nString 1 is greater than string 2");
		} else if (str1[i]<str2[i]) {
			printf("\nString 2 is greater than string 1");
		}
	}
	return 0;
}
