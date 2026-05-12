#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char name[100];
    char author[100];
};

int main() {

    struct Book b[5];

    int i;
    int searchId;
    int found = 0;

    // Adding book details manually

    b[0].id = 101;
    strcpy(b[0].name, "CProgramming");
    strcpy(b[0].author, "DennisRitchie");

    b[1].id = 102;
    strcpy(b[1].name, "DataStructures");
    strcpy(b[1].author, "MarkAllen");

    b[2].id = 103;
    strcpy(b[2].name, "OperatingSystem");
    strcpy(b[2].author, "Galvin");

    b[3].id = 104;
    strcpy(b[3].name, "ComputerNetwork");
    strcpy(b[3].author, "Tanenbaum");

    b[4].id = 105;
    strcpy(b[4].name, "DatabaseSystem");
    strcpy(b[4].author, "Korth");

   

    // Search book by ID

    printf("Enter Book ID to Search: ");
    scanf("%d", &searchId);

    // Searching logic

    for(i = 0; i < 5; i++) {

        if(searchId == b[i].id) {

            found = 1;

            printf("\nBOOK FOUND SUCCESSFULLY\n");
            printf("-------------------------\n");

            printf("Book ID     : %d\n", b[i].id);
            printf("Book Name   : %s\n", b[i].name);
            printf("Author Name : %s\n", b[i].author);

            break;
        }
    }

    // If book not found

    if(found == 0) {

        printf("\nBook Not Found in Library Database\n");
    }

    return 0;
}
