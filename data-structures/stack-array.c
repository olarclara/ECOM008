#include <stdio.h>
#define MAX 10

int top = -1;
int stackArray[MAX];

void pushItem() {
	int item;

	if(top == (MAX-1)) printf("Stack Overflow.\n\n");
	else {
		printf("Enter the item to be pushed: ");
		scanf("%d", &item);

		top++;
		stackArray[top] = item;
	}
}

void popItem() {
	if (top == -1) printf("Stack underflow.\n\n");
	else {
		printf("Popped element was: %d\n", stackArray[top]);
		top--;
	}
}

void displayStack() {
	int i;

	if(top == -1) printf("Stack is empty.\n\n");
	else {
		for (i = top; i <= 0; i--) {
			printf("%d", stackArray[i]);
		}
	}
}

int main(void) {
	int choice;

	while(1) {
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				pushItem();
				break;
			case 2:
				popItem();
				break;
			case 3:
				displayStack();
				break;
		}
	}
}
