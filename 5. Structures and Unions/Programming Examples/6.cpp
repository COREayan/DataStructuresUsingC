/*
	6. Write a program to initialize the members of a structure by using a pointer to the structure.
*/

#include <stdio.h>
#include <conio.h>
struct student
{
	int r_no;
	char name[20];
	char course[20];
	int fees;
};
int main() 
{
	struct student stud1, *ptr_stud1;
	ptr_stud1 = &stud1;
	printf("\nEnter the details of the student : ");
	printf("\nEnter the Roll Number = ");
	scanf("%d",&ptr_stud1 -> r_no);
	printf("\nEnter the Name = ");
	scanf("%s",&ptr_stud1 -> name);
	printf("\nEnter the Course = ");
	scanf("%s",&ptr_stud1 -> course);
	printf("\nEnter the Fees = ");
	scanf("%d",&ptr_stud1 -> fees);
	
	printf("\n\nDETAILS OF THE STUDENT");
	printf("\nROLL NUMBER = %d", ptr_stud1 -> r_no);
	printf("\nNAME = %s", ptr_stud1 -> name);
	printf("\nCOURSE = %s", ptr_stud1 -> course);
	printf("\nFEES = %d", ptr_stud1 -> fees);
	
	return 0;
}
