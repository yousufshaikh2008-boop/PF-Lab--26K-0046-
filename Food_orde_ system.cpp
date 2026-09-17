#include <stdio.h>
#include <ctype.h>

int main() {
    char choice;
    int numTypes, quantity;
    int totalBill = 0;

    // Display Menu Header
    printf("\tABC Restaurant Online Order Placement\n");
    printf("\t\t    WELCOME!\n\n");
    printf("Please select from the following Menu\n");
    printf("B= Burger\n");
    printf("F= French Fries\n");
    printf("P= Pizza\n");
    printf("S= Sandwiches\n\n");

    printf("How many types of snacks you need to order: ");
    scanf("%d", &numTypes);

    if (numTypes > 0) {
        for (int i = 1; i <= numTypes; i++) {
            // Display ordinal numbers for order prompt
            if (i == 1) printf("Enter first Snack you want to order: ");
            else if (i == 2) printf("Enter second Snack you want to order: ");
            else if (i == 3) printf("Enter third Snack you want to order: ");
            else printf("Enter next Snack you want to order: ");

            scanf(" %c", &choice); // Leading space handles newline characters
            printf("Please provide quantity: ");
            scanf("%d", &quantity);

            int price = 0;

            // Switch statement to evaluate prices
            switch (toupper(choice)) {
                case 'B':
                    price = 200;
                    printf("%d Burger (s) value %d PKR\n", quantity, price * quantity);
                    break;
                case 'F':
                    price = 50;
                    printf("%d French Fries (s) value %d PKR\n", quantity, price * quantity);
                    break;
                case 'P':
                    price = 500;
                    printf("%d pizza (s) value %d PKR\n", quantity, price * quantity);
                    break;
                case 'S':
                    price = 150;
                    printf("%d Sandwich (es) value %d PKR\n", quantity, price * quantity);
                    break;
                default:
                    printf("Invalid choice selected!\n");
                    break;
            }

            totalBill += (price * quantity);
        }

        printf("--------------------------------------------------------\n");
        printf("You have ordered!\n");
        printf("Total: %d PKR\n", totalBill);
        printf("Thank you for your order... have a nice day.\n");
    }

    return 0;
}
