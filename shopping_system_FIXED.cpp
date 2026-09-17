#include <stdio.h>

int main() {
    float cost;

    printf("Enter the cost of your bought equipment: \n");
    scanf("%f", &cost);

    if (cost < 2000) {
        printf("Actual Amount: %.2f \n", cost);
        printf("No discount applicable.\n");
        printf("Your Final amount is: %.2f\n", cost);
    }
    else if ((cost >= 2000) && (cost <= 4000)) {
        float discounted_amount = cost * 0.10f;
        float final_amount = cost - discounted_amount;
        printf("Actual Amount: %.2f \n", cost);
        printf("Your Discounted amount is: %.2f\n", discounted_amount);
        printf("Your Final amount is: %.2f\n", final_amount);
    }
    else if ((cost > 4000) && (cost <= 6000)) {
        float discounted_amount = cost * 0.20f;
        float final_amount = cost - discounted_amount;
        printf("Actual Amount: %.2f \n", cost);
        printf("Your Discounted amount is: %.2f\n", discounted_amount);
        printf("Your Final amount is: %.2f\n", final_amount);
    }
    else { // cost > 6000
        float discounted_amount = cost * 0.35f;
        float final_amount = cost - discounted_amount;
        printf("Actual Amount: %.2f \n", cost);
        printf("Your Discounted amount is: %.2f\n", discounted_amount);
        printf("Your Final amount is: %.2f\n", final_amount);
    }

    return 0;
}
