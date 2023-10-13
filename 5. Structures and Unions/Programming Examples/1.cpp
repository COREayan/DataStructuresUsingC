/*
	1. Write a program using structures to read and display the information about a student.
*/

#include<stdio.h>
#include<conio.h>
int main() {
	struct student{
		int roll_no; 
		char name[80]; 
		float fees; 
		char DOB[80];
	};
	struct student stud1;
	printf("\nEnter the roll number : ");
	scanf("%d",&stud1.roll_no);
	printf("Enter the name : ");
	scanf("%s",&stud1.name);
	printf("Enter the fees : ");
	scanf("%f",&stud1.fees);
	printf("Enter the DOB : ");
	scanf("%s",&stud1.DOB);
	
	printf("\n***** STUDENT'S DETAILS *****'");
	printf("\nROLL No.= %d",stud1.roll_no);
	printf("\nNAME = %s", stud1.name);
	printf("\nFEES = %f", stud1.fees);
	printf("\nDOB = %s", stud1.DOB);
	
	return 0;
}
