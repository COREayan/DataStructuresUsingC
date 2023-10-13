/*
	3.	Write a program to implement multiple stacks.
*/

#include <stdio.h>
#include <conio.h>
#define MAX 10
int stack[MAX], topA=-1, topB=MAX;

void pushA(int val) {
	if (topA==topB-1) {
		printf("\nOVERFLOW");
	} else {
		topA+=1;
		stack[topA] = val;
	}
}

void pushB(int val) {
	if (topB-1==topA) {
		printf("\nOVERFLOW");
	} else {
		topB-=1;
		stack[topB] = val;
	}
}

int popA() {
	int val;
	if (topA==-1) {
		printf("\nUNDERFLOW");
		val = -999;
	} else {
		val = stack[topA];
		topA--;
	}
	return val;
}

int popB() {
	int val;
	if (topB==MAX) {
		printf("\nUNDERFLOW");
		val = -999;
	} else {
		val = stack[topB];
		topB++;
	}
	return val;
}

void display_stackA() {
	int i;
	if (topA==-1) {
		printf("\nStack A is Empty");
	}	else {
		for (i=topA; i>=0; i--) {
			printf("\t %d", stack[i]);
		}
	}
}

void display_stackB() {
	int i;
	if (topB==MAX) {
		printf("\nStack B is Empty");
	} else {
		for (i=topB; i<MAX; i++) {
			printf("\t %d", stack[i]);
		}
	}
}

int main() {
	int option, val;
	do {
		printf("\n*****MAIN MENU*****");
		printf("\n1: PUSH IN STACK A");
		printf("\n2: PUSH IN STACK B");
		printf("\n3: POP FROM STACK A");
		printf("\n4: POP FROM STACK B");
		printf("\n5: DISPLAY STACK A");
		printf("\n6: DISPLAY STACK B");
		printf("\n7: EXIT");
		printf("\n\nEnter your choice : ");
		scanf("%d", &option);
		switch(option) {
			case 1: 
				printf("\nEnter the value to push on Stack A : ");
				scanf("%d", &val);
				pushA(val);
				break;
				
			case 2: 
				printf("\nEnter the value to push on Stack B : ");
				scanf("%d", &val);
				pushB(val);
				break;
				
			case 3: 
				val = popA();
				if (val!=-999) {
					printf("\nThe value popped from Stack A = %d", val);
				}			
				break;
				
			case 4: 
				val = popB();
				if (val != -999) {
					printf("\nThe value popped from Stack B = %d", val);
				}	
				break;
				
			case 5: 
				printf("\nThe contents of Stack A are : \n");
				display_stackA();
				break;
				
			case 6: 
				printf("\nThe contents of Stack B are : \n");
				display_stackB();
				break;
		}
	}while (option!=7);
	return 0;
}












