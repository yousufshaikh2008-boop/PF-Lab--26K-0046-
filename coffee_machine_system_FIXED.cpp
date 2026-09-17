#include <stdio.h>

int main() {
    char type_coffee, size;

    printf("Enter the type of the coffee you want (B/W): \n");
    scanf(" %c", &type_coffee);

    switch (type_coffee) {
        case 'B': {
            int time;
            printf("Enter the size of cup (D/S): \n");
            scanf(" %c", &size);

            switch (size) {
                case 'D': {
                    time = 85;
                    float d_time = time + 42.5f;
                    printf("Your coffee time is: %.2f\n", d_time);
                    break;
                }
                case 'S': {
                    time = 85;
                    printf("Your coffee time is: %d\n", time);
                    break;
                }
                default:
                    printf("Invalid cup size.\n");
            }
            break;
        }

        case 'W': {
            int time;
            printf("Enter the size of cup (D/S): \n");
            scanf(" %c", &size);

            switch (size) {
                case 'D': {
                    time = 66;
                    float d_time = time + 33.0f;
                    printf("Your coffee time is: %.2f\n", d_time);
                    break;
                }
                case 'S': {
                    time = 66;
                    printf("Your coffee time is: %d\n", time);
                    break;
                }
                default:
                    printf("Invalid cup size.\n");
            }
            break;
        }

        default:
            printf("Invalid coffee type.\n");
    }

    return 0;
}
