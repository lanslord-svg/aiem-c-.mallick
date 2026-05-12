#include <stdio.h>
#include <string.h>

int main() {

    char username[20];
    char password[20];

    // Correct login details
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    // User input
    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    // Compare username and password
    if(strcmp(username, correctUsername) == 0 &&
       strcmp(password, correctPassword) == 0) {

        printf("\nLogin Successful!");
    }
    else {
        printf("\nInvalid Username or Password!");
    }

    return 0;
}
