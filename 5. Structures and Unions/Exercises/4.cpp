/*
	4.	Make an array of students as illustrated in Question 1 and write a program to display the details of the student with the given 
	Date of Birth.
*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct NAME {
	char first[100];
	char middle[100];
	char last[100];
};
struct DOB {
	int day;
	int month; 
	int year;
};
struct MARKS {
	int english;
	int mathematics;
	int computer;
};
struct student {
	int roll_no;
	struct NAME name;
	char sex[10];
	struct DOB dob;
	struct MARKS marks;
};

struct student *ptr_stud[100];
int main() {
	int i, n;
	printf("\nEnter number of students : ");
	scanf("%d",&n);
	for (i=0; i<n; i++) {
		ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
		printf("\nEnter Details of Student %d", i+1);
		printf("\nEnter the roll number : ");
		scanf("%d", &ptr_stud[i]->roll_no);
		printf("\nEnter the Name : ");
		scanf("%s %s %s", &ptr_stud[i]->name.first, &ptr_stud[i]->name.middle, &ptr_stud[i]->name.last);
		printf("\nEnther the sex : ");
		scanf("%s", &ptr_stud[i]->sex);
		printf("\nEnter the Date of Birth : ");
		scanf("%d %d %d", &ptr_stud[i]->dob.day, &ptr_stud[i]->dob.month, &ptr_stud[i]->dob.year);
		printf("\nEnter the Marks : ");
		scanf("%d %d %d", &ptr_stud[i]->marks.english, &ptr_stud[i]->marks.mathematics, &ptr_stud[i]->marks.computer);
	}
	
	printf("\nDETAILS OF STUDENT");
	for (i=0; i<n; i++) {
		printf("\nStudent %d",i+1);
		printf("\nRoll Number : %d", ptr_stud[i]->roll_no);
		printf("\nName : %s %s %s", ptr_stud[i]->name.first, ptr_stud[i]->name.middle, ptr_stud[i]->name.last);	
		printf("\nSex : %s", ptr_stud[i]->sex);
		printf("\nDOB : %d %d %d", ptr_stud[i]->dob.day, ptr_stud[i]->dob.month, ptr_stud[i]->dob.year);
		printf("\nMarks : %d %d %d", ptr_stud[i]->marks.english, ptr_stud[i]->marks.mathematics, ptr_stud[i]->marks.computer);	
	}
	
	return 0;
}






