/*
	1. Declare a structure that represents the following hierarchical information. 
		(a) Student
		(b) Roll Number
		(c) Name
			(i)		First Name
			(ii) 	Middle Name
			(iii)	Last Name 
		(d) Sex
		(e) Date of Birth
			(i)		Day
			(ii) 	Month
			(iii) 	Year
		(f) Marks
			(i)		English
			(ii)	Mathematics
			(iii)	Computer Science
			
*/

#include <stdio.h>
#include <conio.h>

int main() {
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
	struct student stud;
	
	printf("\nEnter the roll number : ");
	scanf("%d", &stud.roll_no);
	printf("\nEnter the Name : ");
	scanf("%s %s %s", &stud.name.first, &stud.name.middle, &stud.name.last);
	printf("\nEnther the sex : ");
	scanf("%s", &stud.sex);
	printf("\nEnter the Date of Birth : ");
	scanf("%d %d %d", &stud.dob.day, &stud.dob.month, &stud.dob.year);
	printf("\nEnter the Marks : ");
	scanf("%d %d %d", &stud.marks.english, &stud.marks.mathematics, &stud.marks.computer);
	
	printf("\n\n*****DETAILS OF THE STUDENT*****");
	printf("\nRoll No. = %d", stud.roll_no);
	printf("\nName = %s %s %s", stud.name.first, stud.name.middle, stud.name.last);
	printf("\nSex = %s", stud.sex);
	printf("\nDate of Birth = %d %d %d", stud.dob.day, stud.dob.month, stud.dob.year);
	printf("\nEnglish Marks = %d", stud.marks.english);
	printf("\nMathematics Marks = %d", stud.marks.mathematics);
	printf("\nComputer Science Marks = %d", stud.marks.computer);
	
	return 0;
}
