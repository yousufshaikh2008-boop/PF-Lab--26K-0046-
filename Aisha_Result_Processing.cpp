#include <stdio.h>

int main() {
    float intermediate, entry_test;

    printf("Enter Intermediate percentage and Entry Test score: ");
    if (scanf("%f %f", &intermediate, &entry_test) != 2) {
        printf("Invalid input\n");
        return 0;
    }

    // Input Validation
    if (intermediate < 0 || intermediate > 100 || entry_test < 0 || entry_test > 100) {
        printf("Invalid input\n");
    } 
    else {
        // Nested decision structure
        if (intermediate < 60) {
            printf("Not eligible\n");
        } 
        else {
            if (entry_test >= 80) {
                printf("Admitted with Merit Scholarship\n");
            } 
            else if (entry_test >= 50) {
                printf("Admitted\n");
            } 
            else {
                printf("Not admitted\n");
            }
        }
    }

    return 0;
}
