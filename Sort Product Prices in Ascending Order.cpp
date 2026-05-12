#include <stdio.h>

int main() {
    int i, j, n;
    float price[100], temp;

    // Input number of products
    printf("Enter number of products: ");
    scanf("%d", &n);

    // Input product prices
    printf("Enter product prices:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &price[i]);
    }

    // Sorting in ascending order
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(price[i] > price[j]) {

                // Swap values
                temp = price[i];
                price[i] = price[j];
                price[j] = temp;
            }
        }
    }

    // Display sorted prices
    printf("\nPrices in Ascending Order:\n");

    for(i = 0; i < n; i++) {
        printf("%.2f ", price[i]);
    }

    return 0;
}
