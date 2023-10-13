/*
	2.	Define a structure to store the name, an array marks[] which stores the marks of three different subjects, and a character grade.
	Write a program to display the details of the student whose name is entered by the user. Use the structure definition of the first
	question to make an array of students. 
	Display the name of the students who have secured less than 40% of the aggregate.
*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student{
	char name[100];
	int marks[3];
	char grade;
};
struct student *ptr_stud[100];
int main() {
	int i, n;
	printf("Enter the number of students : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
		printf("\nEnter the data for student %d ", i+1);
		printf("\nNAME : ");
		scanf("%s", &ptr_stud[i]->name);
		printf("\nMARKS : ");
		scanf("%d %d %d", &ptr_stud[i]->marks[0], &ptr_stud[i]->marks[1], &ptr_stud[i]->marks[2]);
		printf("\nGRADE : ");
		scanf("%s", &ptr_stud[i]->grade);
	}
	
	printf("\nDETAILS OF STUDENTS");
	for (i=0; i<n; i++) {
		printf("\n%d", i+1);
		printf("\nNAME = %s", ptr_stud[i]->name);
		printf("\nMARKS = %d\t%d\t%d", ptr_stud[i]->marks[0], ptr_stud[i]->marks[1], ptr_stud[i]->marks[2]);
		printf("\nGRADE = %c", ptr_stud[i]->grade);
	}
	
	printf("\nDETAILS OF STUDENTS WHO SECURED LESS THAN 40% MARKS");
	for (i=0; i<n; i++) {
		int sum = ptr_stud[i]->marks[0] + ptr_stud[i]->marks[1] + ptr_stud[i]->marks[2];
		float avg = sum/3;
		if (avg<40) {
			printf("\n%s",ptr_stud[i]->name);
		}
	}
}


