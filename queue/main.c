#include <stdio.h>

int main() {
    int queue[5];      // Array to store queue elements, max size is 5
    int front = -1;    // Index of the front of the queue
    int rear = -1;     // Index of the rear of the queue
    int choice, value;

    while (1) {
        printf("\nChoose an option:\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {  // Enqueue operation
            if (rear == 4) {
                printf("Queue Overflow\n");
            } else {
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                if (front == -1) front = 0; // Initialize front on the first enqueue
                queue[++rear] = value;
                printf("%d enqueued to queue\n", value);
            }
        } 
        else if (choice == 2) {  // Dequeue operation
            if (front == -1 || front > rear) {
                printf("Queue Underflow\n");
                front = rear = -1;  // Reset queue if empty
            } else {
                printf("%d dequeued from queue\n", queue[front++]);
            }
        } 
        else if (choice == 3) {  // Display operation
            if (front == -1 || front > rear) {
                printf("Queue is empty\n");
            } else {
                printf("Queue elements are: ");
                for (int i = front; i <= rear; i++) {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 4) {  // Exit
            printf("Exiting...\n");
            break;
        } 
        else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}