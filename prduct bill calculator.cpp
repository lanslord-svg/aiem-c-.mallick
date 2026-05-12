#include <stdio.h>

int main() {
    int quantity1, quantity2;
    float price1, price2, total;

    // Input for first product
    printf("Enter price of Product 1: ");
    scanf("%f", &price1);

    printf("Enter quantity of Product 1: ");
    scanf("%d", &quantity1);

    // Input for second product
    printf("Enter price of Product 2: ");
    scanf("%f", &price2);

    printf("Enter quantity of Product 2: ");
    scanf("%d", &quantity2);

    // Calculate total bill
    total = (price1 * quantity1) + (price2 * quantity2);

    // Display total bill
    printf("Total Shopping Bill = Rs. %.2f", total);

    return 0;
}
