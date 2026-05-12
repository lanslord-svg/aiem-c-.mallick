#include <stdio.h>

int main() {
    int marks;

    // Input marks
    printf("Enter student marks: ");
    scanf("%d", &marks);

    // Check pass or fail
    if(marks >= 40) {
        printf("Student is PASS");
    }
    else {
        printf("Student is FAIL");
    }

    return 0;
}
