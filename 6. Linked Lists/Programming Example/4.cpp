/*
	4. Write a program to create a circular doubly linked list and perform insertions and deletions at the beginning and end of the list.
*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node {
	struct node *next;
	int data;
	struct node *prev;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_list(struct node *);

int main() {
	int option;
	do {
		printf("\n\n*****MAIN MENU*****");
		printf("\n1: Create a list");
		printf("\n2: Display the list");
		printf("\n3: Add a node at the beginning");
		printf("\n4: Add a node at the end");
		printf("\n5: Delete a node from the beginning");
		printf("\n6: Delete a node from the end");
		printf("\n7: Delete a given node");
		printf("\n8: Delete the entire list");
		printf("\n9: EXIT");
		printf("\n\nEnter your option : ");
		scanf("%d", &option);
		switch(option) {
			case 1: 
				start = create_ll(start);
				printf("\nCIRCULAR DOUBLY LINKED LIST CREATED");
				break;
				
			case 2: 
				start = display(start);
				break;
				
			case 3: 
				start = insert_beg(start);
				break;
				
			case 4: 
				start = insert_end(start);
				break;
				
			case 5: 
				start = delete_beg(start);
				break;
				
			case 6:
				start = delete_end(start);
				break;
				
			case 7:
				start = delete_node(start);
				break;
				
			case 8:
				start = delete_list(start);
				printf("\nCIRCULAR DOUBLY LINKED LIST DELETED");
				break;
		}
	} while (option != 9);
	return 0;
}

struct node *create_ll(struct node *start) {
	struct node *new_node, *ptr;
	int num;
	printf("\nEnter -1 to end");
	printf("\nEnter the data : ");
	scanf("%d", &num);
	while (num != -1) {
		if (start == NULL) {
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->prev = NULL;
			new_node->data = num;
			new_node->next = new_node;
			start = new_node;
		} else {
			new_node = (struct node *)malloc(sizeof(struct node));
			new_node->data = num;
			ptr = start;
			while (ptr->next != start) {
				ptr = ptr->next;
			}
			new_node->prev = ptr;
			ptr->next = new_node;
			new_node->next = start;
			start->prev = new_node;
		}
		printf("\nEnter the data : ");
		scanf("%d", &num);
	}
	return start;
}

struct node *display(struct node *start) {
	struct node *ptr;
	ptr = start;
	while (ptr->next != start) {
		printf("\t%d", ptr->data);
		ptr = ptr->next;
	}
	printf("\t%d", ptr->data);
	return start;
}

struct node *insert_beg(struct node *start) {
	struct node *new_node, *ptr;
	int num;
	printf("\nEnter the data : ");
	scanf("%d", &num);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	ptr = start;
	while (ptr->next != start) {
		ptr = ptr->next;
	}
	new_node->prev = ptr;
	ptr->next = new_node;
	new_node->next = start;
	start->prev = new_node;
	start = new_node;
	return start;
}

struct node *insert_end(struct node *start) {
	struct node *ptr, *new_node;
	int num;
	printf("\nEnter the data : ");
	scanf("%d", &num);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	ptr = start;
	while (ptr->next != start) {
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = start;
	start->prev = new_node;
	return start;
}

struct node *delete_beg(struct node *start) {
	struct node *ptr, *temp;
	ptr = start;
	while (ptr->next != start) {
		ptr = ptr->next;
	}
	ptr->next = start->next;
	temp = start;
	start = start->next;
	start->prev = ptr;
	free(temp);
	return start;
}

struct node *delete_end(struct node *start) {
	struct node *ptr;
	ptr=start;
	while (ptr->next != start) {
		ptr = ptr->next;
	}
	ptr->prev->next = start;
	start->prev = ptr->prev;
	free(ptr);
	return start;
}

struct node *delete_node(struct node *start) {
	struct node *ptr;
	int val;
	printf("\nEnter the value of the node which has to be deleted : ");
	scanf("%d", &val);
	ptr = start;
	if (ptr->data == val) {
		start = delete_beg(start);
		return start;
	} else {
		while (ptr->data != val) {
			ptr = ptr->next;
		}
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		return start;
	}
}

struct node *delete_list(struct node *start) {
	struct node *ptr;
	ptr = start;
	while (ptr->next != start) {
		start = delete_end(start);
	}
	free(start);
	return start;
}
