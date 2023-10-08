#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in both stack and queue
struct Node {
    int data;
    struct Node* next;
};

// Stack implementation
struct Stack {
    struct Node* top;
};

// Initialize an empty stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

// Push an element onto the stack
void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value for an empty stack
    }
    struct Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}

// Queue implementation
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Initialize an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Check if the queue is empty
int isQueueEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}

// Enqueue an element into the queue
void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isQueueEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isQueueEmpty(queue)) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value for an empty queue
    }
    struct Node* temp = queue->front;
    int data = temp->data;
    queue->front = temp->next;
    free(temp);
    return data;
}

int main() {
    struct Stack* stack = createStack();
    struct Queue* queue = createQueue();

    // Push some elements onto the stack
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    // Pop and print elements from the stack
    printf("Stack elements: ");
    while (!isEmpty(stack)) {
        printf("%d ", pop(stack));
    }
    printf("\n");

    // Enqueue some elements into the queue
    enqueue(queue, 4);
    enqueue(queue, 5);
    enqueue(queue, 6);

    // Dequeue and print elements from the queue
    printf("Queue elements: ");
    while (!isQueueEmpty(queue)) {
        printf("%d ", dequeue(queue));
    }
    printf("\n");

    return 0;
}
