#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks1, marks2;
};

int main() {
    struct Student s[5];
    int i;

    // Taking input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks of subject 1: ");
        scanf("%f", &s[i].marks1);

        printf("Enter marks of subject 2: ");
        scanf("%f", &s[i].marks2);
    }

    // Displaying data
    printf("\nStudent Details:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Marks 1: %.2f\n", s[i].marks1);
        printf("Marks 2: %.2f\n", s[i].marks2);
    }

    return 0;
}