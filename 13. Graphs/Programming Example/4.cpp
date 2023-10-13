/*
	4. Write a program to implement topological sorting.
*/

#include <stdio.h>
#define MAX 10 

int n, adj[MAX][MAX];
int front = -1, rear = -1, queue[MAX];
void create_graph(void);
void display();
void insert_queue(int);
int delete_queue(void);
int find_indegree(int);

int main() {
	int node, j=0, del_node, I;
	int topsort[MAX], indeg[MAX];
	create_graph();
	printf("\nThe adjacency matrix is: ");
	display();
	
	/* Find the in-degree of each node */
	for (node = 1; node <= n; node++) {
		indeg[node] = find_indegree(node);
		if (indeg[node] == 0) {
			insert_queue(node);
		}
	}
	
	while (front <= rear) { /* Continue loop until queue is empty */
		del_node = delete_queue();
		topsort[j] = del_node; /* Add the deleted node to topsort */
		j++;
		
		/* Delete the del_node edges */
		for (node = 1; node <= n; node++) {
			if (adj[del_node][node] == 1) {
				adj[del_node][node] = 0;
				indeg[node] = indeg[node] - 1;
				if (indeg[node] == 0) {
					insert_queue(node);
				}
			}
		} 
	}
	
	printf("\n\nThe topological sorting can be given as : \n");
	for (node=0; node<j; node++) {
		printf("%d\t", topsort[node]);
	}
	
	return 0;
}

void create_graph() {
	int i, max_edges, org, dest;
	printf("\nEnter the number of vertices : ");
	scanf("%d", &n);
	max_edges = n*(n-1);
	for (i=1; i<=max_edges; i++) {
		printf("\nEnter edge %d(0, 0 to quit): ",i);
		scanf("%d %d", &org, &dest);
		if ((org == 0) || (dest == 0)) {
			break;
		}
		if (org > n || dest > n || org <= 0 || dest <= 0) {
			printf("\nInvalid edge");
			i--;
		} else {
			adj[org][dest] = 1;
		}
	}
}

void display() {
	int i, j; 
	for (i=1; i<=n; i++) {
		printf("\n");
		for (j=1; j<=n; j++) {
			printf("%3d", adj[i][j]);
		}
	}
}

void insert_queue(int node) {
	if (rear == MAX-1) {
		printf("\nOVERFLOW");
	} else {
		if (front == -1) { /* If queue is initially empty */
			front = 0;
		}
		queue[++rear] = node;
	}
}

int delete_queue() {
	int del_node;
	if (front == -1 || front > rear) {
		printf("\nUNDERFLOW");
		return -1;
	} else {
		del_node = queue[front++];
		return del_node;
	}
}

int find_indegree(int node) {
	int i, in_deg = 0; 
	for (i = 1; i<=n; i++) {
		if (adj[i][node] == 1) {
			in_deg++;
		}
	}
	return in_deg;
}
