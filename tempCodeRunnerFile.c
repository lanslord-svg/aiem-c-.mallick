#include<stdio.h>

struct student{
    int id;
    char name[20];
    float marks;
};

int main(){

    struct student s[3];

    // Input student details
    for(int i = 0; i < 3; i++){

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", &s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    for(int i = 0; i < 3; i++){

        printf("\nStudent %d Details\n", i + 1);

        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}