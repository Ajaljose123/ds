#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int queue[MAX];
int front = -1, rear = -1;


void enqueue() {
    int e;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d", &e);
    if (front == -1) {
        front = 0; // Set front for the first element
    }
    rear++;
    queue[rear] = e;
    printf("%d enqueued to queue\n", e);
}


void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1; // Reset the queue
    }
}


void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}


int main() {
    int ch; // Corrected variable declaration
    while (1) {
        printf("\n -1.Enqueue \n -2.Dequeue \n -3.Display \n -4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0; 
}

