#include <stdio.h>
#include <string.h>


struct Student {
    int id;
    char name[50];
};

// Function prototypes
void addStudent();
void displayStudents();
void searchStudent(int id);


struct Student students[100]; 
int count = 0;

int main() {
    int choice, id;

    do {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                searchStudent(id);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


void addStudent() {
    if (count < 100) 
    { 
        printf("Enter Student ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Student Name: ");
        scanf("%s", students[count].name);
        count++;
        printf("Student added successfully!\n");
    } 
    else {
        printf("Cannot add more students. Maximum limit reached.\n");
    }
}


void displayStudents() {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("\nList of Students:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
    }
}


void searchStudent(int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Student found: ID: %d, Name: %s\n", students[i].id, students[i].name);
            return;
        }
    } 
    printf("Student with ID %d not found.\n", id);
}