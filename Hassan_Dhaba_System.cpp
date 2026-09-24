#include <stdio.h>

int main() {
    int category, item, qty;
    float price = 0, total_bill = 0, final_pay = 0;

    if (scanf("%d %d %d", &category, &item, &qty) != 3) {
        printf("Invalid choice\n");
        return 0;
    }

    // Outer Switch: Category selection
    switch (category) {
        case 1: // Drinks
            // Inner Switch: Items under Drinks
            switch (item) {
                case 1:
                    price = 80;
                    break;
                case 2:
                    price = 150;
                    break;
                default:
                    printf("Invalid item\n");
                    return 0;
            }
            break;

        case 2: // Food
            // Inner Switch: Items under Food
            switch (item) {
                case 1:
                    price = 60;
                    break;
                case 2:
                    price = 350;
                    break;
                case 3:
                    price = 900;
                    break;
                default:
                    printf("Invalid item\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid category\n");
            return 0;
    }

    // Bill Calculation
    total_bill = price * qty;
    printf("Total bill: Rs %.0f\n", total_bill);

    // Apply 10% discount if total exceeds 2000
    if (total_bill > 2000) {
        final_pay = total_bill * 0.90;
        printf("You get 10%% off! Pay: Rs %.0f\n", final_pay);
    }

    return 0;
}
