/*
	8. Write a program that passes a pointer to a structure to a function.
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

void display(struct student *);
int main() {
	struct student *ptr;
	ptr = (struct student *)malloc(sizeof(struct student));
	printf("\nEnter the data for the student ");
	printf("\nROLL NO. : ");
	scanf("%d", &ptr -> r_no);
	printf("\nNAME : ");
	scanf("%s", &ptr -> name);
	printf("\nCOURSE : ");
	scanf("%s", &ptr -> course);
	printf("\nFEES : ");
	scanf("%d", &ptr -> fees);
	
	display(ptr);
	
	return 0;
}
void display(struct student *ptr) {
	printf("\nDETAILS OF STUDENT");
	printf("\nROLL NO. = %d", ptr->r_no);
	printf("\nNAME = %s", ptr->name);
	printf("\nCOURSE = %s", ptr->course);
	printf("\nFEES = %d", ptr->fees);
}
