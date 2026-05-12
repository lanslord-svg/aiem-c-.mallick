#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = add(x, y);

    printf("Sum = %d", result);

    return 0;
}
