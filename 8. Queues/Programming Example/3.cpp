/*
	Write a program to implement a circular queue.
*/
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main() {
	//printf("Hello world!");
	int option, val;
	do {
		printf("\n*****MAIN MENU*****");
		printf("\n1: Insert an element");
		printf("\n2: Delete an element");
		printf("\n3: Peek");
		printf("\n4: Display the queue");
		printf("\n5: EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d", &option);
		switch(option) {
			case 1: 
				insert();
				break;
				
			case 2: 
				val = delete_element();
				if (val != -1) {
					printf("\nThe number deleted is : %d", val);
				}
				break;
				
			case 3: 
				val = peek();
				if (val != -1) {
					printf("\nThe first value in queue is : %d", val);
				}
				break;
				
			case 4: 
				display();
				break;
		}  
	} while (option != 5);
	return 0;
}

void insert() {
	int num;
	printf("\nEnter the number to be inserted in the queue : ");
	scanf("%d", &num);
	if (front==0 && rear==MAX-1) {
		printf("\nOVERFLOW");
	} else if (front==-1 && rear==-1) {
		front=rear=0;
		queue[rear]=num;
	} else if (front==MAX-1 && front!=0) {
		rear=0;
		queue[rear] = num;
	} else {
		rear++;
		queue[rear] = num;
	}
}

int delete_element() {
	int val;
	if (front==-1 && rear==-1) {
		printf("\nUNDERFLOW");
		return -1;
	} 
	val = queue[front];
	if (front == rear) {
		front = rear =  -1;
	} else {
		if (front == MAX - 1) {
			front = 0;
		} else {
			front++;
		}
	}
	return val;
}

int peek() {
	if (front==-1 && rear==-1) {
		printf("\nQUEUE IS EMPTY");
		return -1;
	} else {
		return queue[front];
	}
}

void display() {
	int i;
	printf("\n");
	if (front == -1 && rear == -1) {
		printf("\nQUEUE IS EMPTY");
	} else {
		if (front<rear) {
			for (i=front; i<=rear; i++) {
				printf("\t %d", queue[i]);
			}
		} else {
			for (i=front; i<MAX; i++) {
				printf("\t %d", queue[i]);
			}
			for (i=0; i<=rear; i++) {
				printf("\t %d", queue[i]);
			}
		}
	}
}




