/*
	7. Write a program, using an array of pointers to a structure, to read and display the data of students.
*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct student {
	int r_no;
	char name[20];
	char course[20];
	int fees;
};
struct student *ptr_stud[10];

int main() {
	int i, n;
	printf("\nEnter the number of students : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
		printf("\nEnter the data for student %d", i+1);
		printf("\nROLL NO. : ");
		scanf("%d", &ptr_stud[i] -> r_no);
		printf("\nNAME : ");
		scanf("%s", ptr_stud[i] -> name);
		printf("\nCOURSE : ");
		scanf("%s", ptr_stud[i] -> course);
		printf("\nFEES : ");
		scanf("%d", &ptr_stud[i] -> fees);
	}
	
	printf("\n\nDETAILS OF STUDENTS");
	for (i=0; i<n; i++) {
		printf("\nROLL NO. = %d", ptr_stud[i] -> r_no);
		printf("\nNAME = %s", ptr_stud[i] -> name);
		printf("\nCOURSE = %s", ptr_stud[i] -> course);
		printf("\nFEES = %d", ptr_stud[i] -> fees);
	}
	
	return 0;
} 




