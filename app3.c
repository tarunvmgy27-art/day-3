#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int choice;
    int num1, num2;

    // PART 1 & 2: Welcome and User Input
    printf("Welcome to DevOps C App\n");
    printf("-----------------------\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n\n", name);

    // PART 4 & 5: Menu System and Integrated Features
    while (1) {
        printf("--- Main Menu ---\n");
        printf("1. Calculator (Addition)\n");
        printf("2. Exit\n");
        printf("Selection: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // PART 3: Calculator Feature
                printf("\n[Calculator Mode]\n");
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("Result: %d + %d = %d\n\n", num1, num2, num1 + num2);
                break;
            
            case 2:
                printf("Exiting DevOps App. Goodbye, %s!\n", name);
                exit(0);
            
            default:
                printf("Invalid selection. Please try again.\n\n");
        }
    }

    return 0;
}