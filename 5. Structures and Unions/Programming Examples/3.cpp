/*
	3. Write a program to read and display the information of a student using a nested structure. 
*/

#include <stdio.h>
#include <conio.h>
int main() {
	struct DOB {
		int day; 
		int month; 
		int year; 
	};
	struct student {
		int roll_no; 
		char name[100];
		float fees; 
		struct DOB date;
	};
	struct student stud1;
	
	printf("\nEnter the roll number : ");
	scanf("%d", &stud1.roll_no);
	printf("\nEnter the name : ");
	scanf("%s", &stud1.name);
	printf("\nEnter the fees : ");
	scanf("%f", &stud1.fees);
	printf("\nEnter the DOB : ");
	scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
	printf("\n***** STUDENT'S DETAILS *****");
	printf("\nROLL No. = %d", stud1.roll_no);
	printf("\nNAME = %s", stud1.name);
	printf("\nFEES = %f", stud1.fees);
	printf("\nDOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);
	
	return 0;
}
