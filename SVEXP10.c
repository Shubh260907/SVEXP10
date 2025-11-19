
#include <stdio.h>

int main() {

    int choice;
    int totalBill = 0;


    printf("--- Welcome to Foodies (Est. 2020) ---\n");
    printf("             MENU\n");
    printf("--------------------------------------\n");
    printf("Item           | Price\n");
    printf("--------------------------------------\n");
    printf("1. Burger      | ₹150\n");
    printf("2. Pizza       | ₹200\n");
    printf("3. Pasta       | ₹120\n");
    printf("4. Sandwich    | ₹100\n");
    printf("5. French Fries| ₹80\n");
    printf("--------------------------------------\n");
    printf("Enter '0' to finish ordering and get your bill.\n\n");


    do {
        printf("Enter item number to add to your order (0 to finish): ");
        scanf("%d", &choice);

        //
        switch(choice) {
            case 1:
                totalBill += 150;
                printf("Added Burger. Current total: ₹%d\n", totalBill);
                break;
            case 2:
                totalBill += 200;
                printf("Added Pizza. Current total: ₹%d\n", totalBill);
                break;
            case 3:
                totalBill += 120;
                printf("Added Pasta. Current total: ₹%d\n", totalBill);
                break;
            case 4:
                totalBill += 100;
                printf("Added Sandwich. Current total: ₹%d\n", totalBill);
                break;
            case 5:
                totalBill += 80;
                printf("Added French Fries. Current total: ₹%d\n", totalBill);
                break;

            case 0:
                printf("Finishing your order...\n");
                break;

            default:
                printf("Invalid item number. Please select from the menu.\n");
                break;
        }

    } while (choice != 0);

    printf("\n--- Thank you for dining at Foodies! ---\n");
    printf("Your Final Bill Total is: ₹%d\n", totalBill);
    printf("----------------------------------------\n");

    return 0;
}
