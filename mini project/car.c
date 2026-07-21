#include <stdio.h>

int main() {
    int totalSpace, choice;
    int occupied = 0;

    printf("===== CAR PARKING SYSTEM =====\n");

    printf("Enter total parking spaces: ");
    scanf("%d", &totalSpace);

    while (1) {
    printf("\n----- MENU -----\n");
    printf("1. Park Car\n");
    printf("2. Remove Car\n");
    printf("3. Show Status\n");
    printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (occupied < totalSpace) {
                    occupied++;
                    printf("Car parked successfully.\n");
                } else {
                    printf("Parking Full!\n");
                }
                break;

            case 2:
                if (occupied > 0) {
                    occupied--;
                    printf("Car removed successfully.\n");
                } else {
                    printf("No cars in parking.\n");
                }
                break;

            case 3:
                printf("\nTotal Spaces : %d\n", totalSpace);
                printf("Occupied Spaces : %d\n", occupied);
                printf("Available Spaces: %d\n", totalSpace - occupied);
                break;

            case 4:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}