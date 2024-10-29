#include <stdio.h>

int main() {
	int stack[5];  // Array to store stack elements, max size is 5
	int top = -1;  // Stack initially empty
	int choice, value;

	while (1) {
		printf("Choose an option:\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("enter the choice : ");
		scanf("%d", &choice);

		if (choice == 1) {  // Push operation
			if (top == 4) {
				printf("Stack Overflow\n");
			} else {
				printf("Enter value to push: ");
				scanf("%d", &value);
				stack[++top] = value;
				printf("%d pushed onto stack\n", value);
			}
		}
		else if (choice == 2) {  // Pop operation
			if (top == -1) {
				printf("Stack Underflow\n");
			} else {
				printf("%d popped from stack\n", stack[top--]);
			}
		}
		else if (choice == 3) {  // Display operation
			if (top == -1) {
				printf("Stack is empty\n");
			} else {
				printf("Stack elements are: ");
				for (int i = 0; i <= top; i++) {
					printf("%d ", stack[i]);
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