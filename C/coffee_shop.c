#include <stdio.h>

int main(void) {

    int choice;

    printf("☕ Welcome to Elene's Coffee Shop!\n\n");

    printf("Choose your drink:\n");
    printf("1. Coffee\n");
    printf("2. Tea\n");
    printf("3. Hot Chocolate\n");

    printf("\nYour choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("You chose Coffee ☕\n");
            printf("Price: €3\n");
            break;

        case 2:
            printf("You chose Tea 🍵\n");
            printf("Price: €2\n");
            break;

        case 3:
            printf("You chose Hot Chocolate 🍫\n");
            printf("Price: €4\n");
            break;

        default:
            printf("Sorry, we don't have that option.\n");
    }

    return 0;
}