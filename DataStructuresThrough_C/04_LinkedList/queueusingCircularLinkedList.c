// program of queue using circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
	int info;
	struct node *link;
} *rear = NULL;

void insert(int item);
int del();
int peek();
int isEmpty();
void display();

int main() {
	int item, choice;
	while (1) {
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("5. Quit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Input the element for ading in queue : ");
			scanf("%d", &item);
			insert(item);
			break;
		case 2:
			printf("Deleted element is %d\n ", del());
			break;
		case 3:
			printf("Element at the front of queue is %d\n", peek());
			break;
		case 4:
			display();
			break;
		case 5:
			exit(1);
		default:
			printf("Wrong choice\n");
		}
	}
}

void insert(int item) {
	struct node *tmp;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info = item;
	if (tmp == NULL) {
		printf("Memory not available");
		return;
	}
	if (isEmpty()) {
		rear = tmp;
		tmp->link = rear;
	}
	else {
		tmp->link = rear->link;
		rear->link = tmp;
		rear = tmp;
	}
}

int del() {
	int item;
	struct node *tmp;
	if (isEmpty()) {
		printf("Queue Underflow\n");
		exit(1);
	}
	//if only one element is present
	if (rear->link == rear) {
		tmp = rear;
		rear = NULL;
	}
	else {
		tmp = rear->link;
		rear->link = rear->link->link;
	}
	item = tmp->info;
	free(tmp);
	return item;
}

int peek() {
	if (isEmpty()) {
		printf("Queue Underflow\n");
		exit(1);
	}
	return rear->link->info;
}

int isEmpty() {
	if (rear == NULL)
		return 1;
	else
		return 0;
}

void display() {
	struct node *p;
	if (isEmpty()) {
		printf("Queue Underflow\n");
		return;
	}
	p = rear->link;

	printf("Queue is :\n");
	do {
		printf(" %d", p->info);
		p = p->link;
	} while (p != rear->link);
	printf("\n");
}