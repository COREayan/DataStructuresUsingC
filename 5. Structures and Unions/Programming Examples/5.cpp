/*
	5. Write a program to read, display, add, and subtract two distances. Distance must be defined using kms and meters. 
*/

#include <stdio.h>
#include <conio.h>
typedef struct distance 
{
	int kms; 
	int meters;
}DISTANCE;
DISTANCE add_distance(DISTANCE, DISTANCE);
DISTANCE subtract_distance(DISTANCE, DISTANCE);
DISTANCE d1, d2, d3, d4;
int main() {
	int option; 
	do {
		printf("\n***** MAIN MENU *****");
		printf("\n1. Read the distances ");
		printf("\n2. Display the distances");
		printf("\n3. Add the distances");
		printf("\n4. Subtract the distances");
		printf("\n5. EXIT");
		printf("\nEnter your option : ");
		scanf("%d", &option);
		
		switch(option) 
		{
			case 1: 
				printf("\nEnter the first distance in kms and meters : ");
				scanf("%d %d", &d1.kms, &d1.meters);
				printf("\nEnter the second distance in kms and meters : ");
				scanf("%d %d", &d2.kms, &d2.meters);
				break;
			
			case 2: 
				printf("\nThe first distance is : %d kms %d meters", d1.kms, d1.meters);
				printf("\nThe second distance is : %d kms %d meters", d2.kms, d2.meters);
				break;
			
			case 3: 
				d3 = add_distance(d1, d2);
				printf("\nThe sum of two distances is : %d kms %d meters", d3.kms, d3.meters);
				break;
			
			case 4: 
				d4 = subtract_distance(d1, d2);
				printf("\nThe difference between two distances is : %d kms %d meters", d4.kms, d4.meters);
				break;
		}
	}while (option!=5);
	return 0;
}

DISTANCE add_distance(DISTANCE d1, DISTANCE d2) {
	DISTANCE sum;
	sum.meters = d1.meters + d2.meters;
	sum.kms = d1.kms + d2.kms; 
	while (sum.meters >= 1000) {
		sum.meters = sum.meters % 1000; 
		sum.kms += 1;
	}	
	return sum;
}

DISTANCE subtract_distance(DISTANCE d1, DISTANCE d2) {
	DISTANCE sub; 
	if (d1.kms > d2.kms) {
		sub.meters = d1.meters - d2.meters; 
		sub.kms = d1.kms - d2.kms; 
	}
	else {
		sub.meters = d2.meters - d1.meters; 
		sub.kms = d2.kms - d1.kms; 
	}
	if (sub.meters < 0) {
		sub.kms = sub.kms - 1; 
		sub.meters = sub.meters + 1000;
	}
	return sub; 
}


