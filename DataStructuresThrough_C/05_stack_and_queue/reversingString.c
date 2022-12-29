// Program of reversing a string using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int top = -1;
char stack[MAX];
char pop();
void push(char ch);

int main() {
	char str[20];
	unsigned int i;
	printf("Enter the string : ");
	gets(str);

	// push characters of the string on the stack
	for (i = 0; i < strlen(str); i++)
		push(str[i]);

	// pop characters from the stack and store in string str
	for (i = 0; i < strlen(str); i++) {
		str[i] = pop();
	}
	printf("Reversed string is : ");
	puts(str);
}

void push(char item) {
	if (top == (MAX - 1)) {
		printf("stack overflow\n");
		return;
	}
	stack[++top] = item;
}

char pop() {
	if (top == -1) {
		printf("Stack Underflow\n");
		exit(1);
	}
	return stack[top--];
}