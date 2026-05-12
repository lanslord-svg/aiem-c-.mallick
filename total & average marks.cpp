#include <stdio.h>

int main() {
    int marks[5], i, total = 0;
    float average;

    //printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++) {
    	printf("Enter marks of sub[%d]:\n", i);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
