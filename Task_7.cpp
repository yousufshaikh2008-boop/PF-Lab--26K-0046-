#include <stdio.h>

int main() {
    char city[50], country[50], grade;
    long population;
    double area;

    printf("Enter City: ");
    scanf("%s", city);

    printf("Enter Country: ");
    scanf("%s", country);

    printf("Enter Population: ");
    scanf("%lld", &population);

    printf("Enter Area: ");
    scanf("%lf", &area);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\nYou live in %s, %s.\n", city, country);
    printf("Population: %ld\n", population);
    printf("Area: %.2f\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}
