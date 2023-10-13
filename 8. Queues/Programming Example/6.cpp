/*
	6. Write a program to implement multiple queues.
*/
#include <stdio.h>
#include <conio.h>
#define MAX 10

int QUEUE[MAX], rearA=-1, frontA=-1, rearB=MAX, frontB=MAX;

void insertA(int val) {
	if (rearA==rearB -1) {
		printf("\nOVERFLOW");
	} else {
		if (rearA == -1 && frontA == -1) 
		{
			rearA = frontA = 0;
			QUEUE[rearA] = val;
		}
		else 
			QUEUE[++rearA] = val;
	}
}

int deleteA() {
	int val; 
	if (frontA==-1) {
		printf("\nUNDERFLOW");
		return -1;
	} else {
		val = QUEUE[frontA];
		frontA++;
		if (frontA>rearA) 
			frontA=rearA=-1;
		return val;
	}
}

void display_queueA() {
	int i;
	if (frontA == -1) {
		printf("\nQUEUE A IS EMPTY");
	} else {
		for (i=frontA; i<=rearA; i++) 
			printf("\t%d", QUEUE[i]);
	}
}

void insertB(int val) {
	if (rearA==rearB-1)
		printf("\nOVERFLOW");
		
	else {
		if (rearB==MAX && frontB==MAX)
		{
			rearB = frontB = MAX-1;
			QUEUE[rearB] = val;
		} else {
			QUEUE[--rearB] = val;	
		}
	}
}

int deleteB() {
	int val;
	if (frontB==MAX) 
	{
		printf("\nUNDERFLOW");
		return -1;
	} else {
		val = QUEUE[frontB];
		frontB--;
		if (frontB<rearB)
			frontB=rearB=MAX;
		return val;
	}
}

void display_queueB() 
{
	int i;
	if (frontB==MAX)
		printf("\nQUEUE B IS EMPTY");
	else 
	{
		for (i=frontB; i>=rearB; i--)
			printf("\t%d", QUEUE[i]);
	}
}

int main() {
	int option, val;
	do {
		printf("\n*****MAIN MENU*****");
		printf("\n1. INSERT IN QUEUE A");
		printf("\n2. INSERT IN QUEUE B");
		printf("\n3. DELETE FROM QUEUE A");
		printf("\n4. DELETE FROM QUEUE B");
		printf("\n5. DISPLAY QUEUE A");
		printf("\n6. DISPLAY QUEUE B");
		printf("\n7. EXIT");
		printf("\nEnter your option : ");
		scanf("%d", &option);
		switch(option) {
			case 1:
				printf("\nEnter the value to be inserted in Queue A : ");
				scanf("%d", &val);
				insertA(val);
				break;
				
			case 2:
				printf("\nEnter the value to be inserted in Queue B : ");
				scanf("%d", &val);
				insertB(val);
				break;
				
			case 3:
				val = deleteA();
				if (val != -1) {
					printf("\nThe value deleted from Queue A = %d", val);
				}
				break;
				
			case 4:
				val = deleteB();
				if (val != -1) {
					printf("\nThe value deleted from Queue B = %d", val);
				}
				break;
				
			case 5:
				printf("\nThe contents of Queue A are : \n");
				display_queueA();
				break;
				
			case 6:
				printf("\nThe contents of Queue B are : \n");
				display_queueB();
				break;
		} 
	}while (option != 7);
	return 0;
}
