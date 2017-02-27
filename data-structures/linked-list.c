#include <stdio.h>
#include <stdlib.h>

// defining an element from a linked list (node)
typedef struct node {
  int data;
  struct node * next;
} Node;

// defining a list's data structure
typedef struct list {
  Node * head;
} List;

Node * createNode(int data);

Node * createNode(int data) {
  Node * newNode = malloc(sizeof(Node));
  newNode -> data = data;
  newNode -> next = NULL;
  return newNode;
}

List * emptylist() {
  List * list = malloc(sizeof(List));
  list -> head = NULL;
  return list;
}

void addNode(int data, List * list) {
  Node * current = NULL;
  if (list -> head == NULL) {
    list -> head = createNode(data);
  } else {
    current = list -> head;
    while (current -> next != NULL) current = current -> next;
    current -> next = createNode(data);
  }
}

void deleteNode(int data, List * list) {
  Node * current = list -> head;
  Node * previous = current;
  while (current != NULL) {
    if (current -> data == data) {
      previous -> next = current -> next;
      if (current == list -> head) list -> head = current -> next;
      free(current);
      return;
    }
    previous = current;
    current = current -> next;
  }
}

void displayList(List * list) {
  Node * current = list -> head;
  if (list -> head == NULL) return;

  while (current -> next != NULL) {
    printf("%d,", current->data);
    current = current -> next;
  }
  printf("%d\n", current -> data);
}

void reverseList(List * list) {
  Node * reversed = NULL;
  Node * current = list -> head;
  Node * aux = NULL;

  while (current != NULL) {
    aux = current;
    current = current -> next;
    aux -> next = reversed;
    reversed = aux;
  }
  list -> head = reversed;
}

void destroyList(List * list) {
  Node * current = list -> head;
  Node * next = current;

  while(current -> next) {
    next = current -> next;
    free(current);
    current = next;
  }
  free(list);
}

int main(void) {
	List * list = emptylist();
  addNode(1, list);
  addNode(20, list);
  addNode(2, list);
  addNode(5, list);
  addNode(8, list);
  addNode(9, list);
  addNode(13, list);
  displayList(list);
  deleteNode(2, list);
  displayList(list);
  deleteNode(1, list);
  displayList(list);
  deleteNode(20, list);
  displayList(list);
  reverseList(list);
  printf("Reversed: ");
  displayList(list);
  destroyList(list);
  return 0;
}
