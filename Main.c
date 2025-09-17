#include <stdio.h>

int main() {
    char operator;
    float first, second;
    int num1, num2;
    char choice;
    printf("\n-------------------------------------------");
    printf("\n-------------SHUBH'SCALCULATOR-------------");

    do {
        do {
            printf("\nEnter an operator (+, -, *, /, %%): ");
            scanf(" %c", &operator);

            if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') {
                printf("Invalid operator! Please try again.\n");
            }

        } while (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%');

        if (operator == '%') {
            printf("\nEnter first integer: ");
            scanf("%d", &num1);
            printf("Enter second integer: ");
            scanf("%d", &num2);

            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("\n %d %% %d = %d\n", num1, num2, num1 % num2);
            }
        }
        else {
            printf("\n============================================");
            printf("\nEnter first number: ");
            scanf("%f", &first);
            printf("Enter second number: ");
            scanf("%f", &second);

            switch (operator) {
                case '+':
                    printf("%.2f + %.2f = %.2f\n", first, second, first + second);
                    break;
                case '-':
                    printf("%.2f - %.2f = %.2f\n", first, second, first - second);
                    break;
                case '*':
                    printf("%.2f * %.2f = %.2f\n", first, second, first * second);
                    break;
                case '/':
                    printf("%.2f / %.2f = %.2f\n", first, second, first / second);
                    break;
            }
        }
    printf("\n============================================");
        printf("\n Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    printf("\n============================================");
    printf("\n Goodbye!\n");
    printf("\n============================================");
    return 0;
}

