#include <stdio.h>

int main() {
    int choice;

    printf("======================================================\n");
    printf("                   POWER FIT GYM                      \n");
    printf("======================================================\n");

    while (1) {
        printf("You have to select options from 1-14:\n");
        printf("\t 1. Slot Availability Check.\n");
        printf("\t 2. Membership Eligibility.\n");
        printf("\t 3. Membership Plan Selection.\n");
        printf("\t 4. Discount offer.\n");
        printf("\t 5. Personal Trainer Option.\n");
        printf("\t 6. Trainer Rating.\n");
        printf("\t 7. Diet Consultation Service.\n");
        printf("\t 8. Monthly Bill.\n");
        printf("\t 9. Supplement Menu.\n");
        printf("\t 10. Late Payment Penalty.\n");
        printf("\t 11. Corporate Member Handling.\n");
        printf("\t 12. Multiple Member Age Check.\n");
        printf("\t 13. Payment Confirmation.\n");
        printf("\t 14. Feedback Reward.\n");
        printf("\t 0. Exit\n");
        printf("Enter the option you want to select:\n");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Thanks for your support.\n");
            break;
        }

        switch (choice) {
            case 1: {
                int booked_slots, total_slots;
                printf("\n--- Task 1: Slot Availability Check ---\n");
                printf("Enter the slots which are already booked:\n");
                scanf("%d", &booked_slots);
                printf("Enter the total number of slots:\n");
                scanf("%d", &total_slots);

                if (total_slots > booked_slots) {
                    printf("The slots are still available.\n");
                } else {
                    printf("The slots are full. There is no place for registration.\n");
                }
                break;
            }

            case 2: {
                int age;
                printf("\n--- Task 2: Membership Eligibility ---\n");
                printf("Please enter your age:\n");
                scanf("%d", &age);

                if (age >= 16) {
                    printf("You are eligible for membership.\n");
                } else {
                    printf("Sorry! You are not eligible for this membership.\n");
                }
                break;
            }

            case 3: {
                int plan_selection;
                printf("\n--- Task 3: Membership Plan Selection ---\n");
                printf("\t 1 = BASIC \n\t 2 = PREMIUM \n\t 3 = VIP\n");
                printf("Enter the plan you want to register for (1-3): \n");
                scanf("%d", &plan_selection);

                switch (plan_selection) {
                    case 1:
                        printf("Your selected plan is: BASIC\n");
                        break;
                    case 2:
                        printf("Your selected plan is: PREMIUM\n");
                        break;
                    case 3:
                        printf("Your selected plan is: VIP\n");
                        break;
                    default:
                        printf("Invalid plan selection.\n");
                }
                break;
            }

            case 4: {
                int months;
                float price;
                printf("\n--- Task 4: Discount Offer ---\n");
                printf("Enter the registration period in months: \n");
                scanf("%d", &months);
                printf("Enter regular price: \n");
                scanf("%f", &price);

                if (months >= 6) {
                    float discounted = price * 0.90f;
                    printf("Your discounted amount is: %.2f\n", discounted);
                } else {
                    printf("Your price is: %.2f\n", price);
                }
                break;
            }

            case 5: {
                int decision;
                printf("\n--- Task 5: Personal Trainer Option ---\n");
                printf("Do you want a personal trainer? \n");
                printf("\t 1. Yes \n\t 2. No\n");
                scanf("%d", &decision);

                switch (decision) {
                    case 1: {
                        float bill = 2000;
                        float trainer_fee = 1500;
                        bill += trainer_fee;
                        printf("Additional charges will be included for the personal trainer: (+Rs. %.2f). Total bill = Rs. %.2f\n", trainer_fee, bill);
                        break;
                    }
                    case 2:
                        printf("No additional charges will be added.\n");
                        break;
                    default:
                        printf("Invalid Input\n");
                }
                break;
            }

            case 6: {
                int rating;
                printf("\n--- Task 6: Trainer Rating ---\n");
                printf("Please rate the trainer assigned to you:\n");
                printf("\t 5. Excellent \n\t 4. Good \n\t 3. Average \n\t 2. Poor \n\t 1. Very Poor \n");
                scanf("%d", &rating);

                switch (rating) {
                    case 5:
                        printf("Rating: Excellent\n");
                        break;
                    case 4:
                        printf("Rating: Good\n");
                        break;
                    case 3:
                        printf("Rating: Average\n");
                        break;
                    case 2:
                        printf("Rating: Poor\n");
                        break;
                    case 1:
                        printf("Rating: Very Poor\n");
                        break;
                    default:
                        printf("Invalid Input\n");
                }
                break;
            }

            case 7: {
                int consult;
                int bill = 2000;
                printf("\n--- Task 7: Diet Consultation Service ---\n");
                printf("Do you want to choose a diet consultation? \n");
                printf("\t 1. YES \n\t 2. NO \n");
                scanf("%d", &consult);

                switch (consult) {
                    case 1: {
                        int consult_fee = 1000;
                        bill = bill + consult_fee;
                        printf("Your fee after diet consultation is: %d\n", bill);
                        break;
                    }
                    case 2:
                        printf("No consultation fee charged. Your fee is: %d\n", bill);
                        break;
                    default:
                        printf("Invalid Input\n");
                }
                break;
            }

            case 8: {
                int months, monthly_rate;
                printf("\n--- Task 8: Monthly Bill Calculation ---\n");
                printf("Enter the months:\n");
                scanf("%d", &months);
                printf("Enter the monthly rate: \n");
                scanf("%d", &monthly_rate);

                float bill = months * monthly_rate;
                float tax = bill * 0.10f;
                printf("Your Total Monthly Bill: Rs.%.2f\n", bill + tax);
                break;
            }

            case 9: {
                int menu_choice;
                printf("\n--- Task 9: Supplement Menu ---\n");
                printf("Enter the supplement you want:\n");
                printf("\t 1. Protein \n\t 2. Creatine \n\t 3. BCAA \n");
                scanf("%d", &menu_choice);

                switch (menu_choice) {
                    case 1: printf("Selected Supplement: Protein\n"); break;
                    case 2: printf("Selected Supplement: Creatine\n"); break;
                    case 3: printf("Selected Supplement: BCAA\n"); break;
                    default: printf("Error: Invalid Choice.\n");
                }
                break;
            }

            case 10: {
                int months;
                int bill = 2000;
                printf("\n--- Task 10: Late Payment Penalty ---\n");
                printf("Enter the months delayed in paying fees: \n");
                scanf("%d", &months);

                if (months > 1) {
                    bill = bill + 300;
                    printf("Late payment! Rs. 300 penalty added. Total = Rs. %d\n", bill);
                } else {
                    printf("Payment on time. Thank you for your cooperation.\n");
                }
                break;
            }

            case 11: {
                int status;
                printf("\n--- Task 11: Corporate Member Handling ---\n");
                printf("Are you a Corporate Member?\n");
                printf("\t 1. Yes \n\t 2. No \n");
                printf("Enter the status of the member: \n");
                scanf("%d", &status);

                if (status == 1) {
                    int bill = 2000;
                    float discounted = bill * 0.80f;
                    printf("Congratulations! Your discounted amount is: %.2f\n", discounted);
                } else if (status == 2) {
                    int bill = 2000;
                    printf("You will be charged the regular price: %d\n", bill);
                } else {
                    printf("Invalid Input\n");
                }
                break;
            }

            case 12: {
                int age_1, age_2, age_3;
                printf("\n--- Task 12: Multiple Member Age Check ---\n");
                printf("Enter the age of first person applied for group membership: ");
                scanf("%d", &age_1);
                printf("Enter the age of second person applied for group membership: ");
                scanf("%d", &age_2);
                printf("Enter the age of third person applied for group membership: ");
                scanf("%d", &age_3);

                if ((age_1 >= 16) && (age_2 >= 16) && (age_3 >= 16)) {
                    printf("You are all allowed for group membership.\n");
                } else {
                    printf("Your request for the group membership has been denied.\n");
                }
                break;
            }

            case 13: {
                int verification;
                printf("\n--- Task 13: Payment Confirmation ---\n");
                printf("Have you paid your fees?\n");
                printf("Choose the verification status \n");
                printf("\t 1. Yes \n\t 2. No \n");
                scanf("%d", &verification);

                switch (verification) {
                    case 1: printf("Your membership is confirmed.\n"); break;
                    case 2: printf("Status: Your membership is pending.\n"); break;
                    default: printf("Invalid Input\n");
                }
                break;
            }

            case 14: {
                float rating;
                printf("\n--- Task 14: Feedback Reward ---\n");
                printf("Please rate us: \n");
                scanf("%f", &rating);

                if (rating >= 4) {
                    printf("Thanks for your kind response. You will get a free protein shake voucher.\n");
                } else {
                    printf("We will improve our service.\n");
                }
                break;
            }

            default:
                printf("Invalid Input. Please select a valid option (0-14).\n");
        }
    }

    return 0;
}
