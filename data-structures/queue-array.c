#include <stdio.h>
#define MAX 10

int head = 0, tail = -1, size = 0;
int queueArray[MAX];

void enqueueItem(int item) {
	queueArray[++tail] = item;
	size++;
}

void dequeueItem() {
	if (size == 0) printf("Queue is empty.\n\n");
	else {
		size--;
		printf("Removed %d from the queue.\n", queueArray[head++]);
	}
}

void displayQueue() {
	int i;

	if (size == 0) printf("Queue is empty.\n\n");
	else {
		printf("The queue is: ");
		for (i = head; i <= tail; i++) printf("%d ", queueArray[i]);
	}
}

int sizeQueue(void) {
	return size;
}

int main(void) {
	int choice, n;

	while(choice != 0) {
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Size\n");
		printf("0.EXIT\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

		switch (choice) {
			case 1:
				printf("Enter the item to be pushed: ");
				scanf("%d", &n);

				enqueueItem(n);
				break;
			case 2:
				dequeueItem();
				break;
			case 3:
				displayQueue();
				break;
			case 4:
				n = sizeQueue();
				printf("%d\n", n);
				break;
			case 0: break;
		}
	}
}
