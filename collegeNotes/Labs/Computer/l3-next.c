#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = 0, rear = 0;

void enqueue(int item) {
    if ((rear + 1) % MAX_SIZE == front) {
        printf("Queue is full\n");
    } else {
        queue[rear] = item;
        rear = (rear + 1) % MAX_SIZE;
    }
}

void dequeue() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Dequeued item: %d\n", queue[front]);
        front = (front + 1) % MAX_SIZE;
    }
}

void displayFront() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front item: %d\n", queue[front]);
    }
}

void displayAll() {
    if (front == rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    do {
        printf("\nCircular Queue Operations\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Front\n");
        printf("4. Display All\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayFront();
                break;
            case 4:
                displayAll();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
