/*
	4. Write a program to read and display the information of all the students in a class. Then 
		edit the details of the ith student and redisplay the entire information.
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
	struct student {
		int roll_no; 
		char name[80]; 
		int fees; 
		char DOB[80];
	};
	struct student stud[50];
	int n, i, num, new_rollno;
	int new_fees;
	char new_DOB[80], new_name[80];
	
	printf("\nEnter the number of students : ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("\nEnter the roll number : ");
		scanf("%d", &stud[i].roll_no);
		printf("\nEnter the name : ");
		scanf("%s", &stud[i].name);
		printf("\nEnter the fees : ");
		scanf("%d",&stud[i].fees);
		printf("\nEnter the DOB : ");
		scanf("%s", &stud[i].DOB);
	}
	for (i=0; i<n; i++) {
		printf("\n***** DETAILS OF STUDENT %d *****", i+1);
		printf("\nROLL No. = %d", stud[i].roll_no);
		printf("\nNAME = %s", stud[i].name);
		printf("\nFEES = %d", stud[i].fees);
		printf("\nDOB = %d", stud[i].DOB);
	}
	
	printf("\nEnter the student number of whose record has to be edited : ");
	scanf("%d", &num);
	num = num - 1; 
	printf("\nEnter the new roll number : ");
	scanf("%d", &new_rollno);
	printf("\nEnter the new name : ");
	scanf("%s", &new_name);
	printf("\nEnter the new fees : ");
	scanf("%d", &new_fees);
	printf("\nEnter the new DOB : ");
	printf("%s", &new_DOB);
	
	stud[num].roll_no = new_rollno; 
	strcpy(stud[num].name, new_name);
	stud[num].fees = new_fees; 
	strcpy(stud[num].DOB, new_DOB);
	
	for (i=0; i<n; i++) {
		printf("\n***** DETAILS OF STUDENT %d *****", i+1);
		printf("\nROLL No. = %d", stud[i].roll_no);
		printf("\nNAME = %s", stud[i].name);
		printf("\nFEES = %d", stud[i].fees);
		printf("\nDOB = %d", stud[i].DOB);
	}
	
	return 0; 
}
