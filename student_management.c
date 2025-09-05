#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int *count) {
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[*count].rollNo);
    printf("Enter Name: ");
    getchar(); // clear buffer
    fgets(s[*count].name, 50, stdin);
    s[*count].name[strcspn(s[*count].name, "\n")] = 0; // remove newline
    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);
    (*count)++;
    printf("\nStudent Added Successfully!\n");
}

void displayStudents(struct Student s[], int count) {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }
    printf("\n=== Student Records ===\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Roll No: %d | Name: %s | Marks: %.2f\n", i + 1, s[i].rollNo, s[i].name, s[i].marks);
    }
}

void searchStudent(struct Student s[], int count) {
    int roll, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (s[i].rollNo == roll) {
            printf("Found! Name: %s | Marks: %.2f\n", s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

void deleteStudent(struct Student s[], int *count) {
    int roll, found = 0;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < *count; i++) {
        if (s[i].rollNo == roll) {
            for (int j = i; j < *count - 1; j++) {
                s[j] = s[j + 1];
            }
            (*count)--;
            printf("Student Deleted Successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Student not found!\n");
}

int main() {
    struct Student students[100];
    int count = 0, choice;

    while (1) {
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: deleteStudent(students, &count); break;
            case 5: printf("Exiting...\n"); exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}