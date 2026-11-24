#include <stdio.h>
#include "student.h"
#include "file.h"

int main()
{
    struct Student students[MAX_STUDENTS];

    int count = 0;
    int choice;

    // Load previously saved student records
    loadStudents(students, &count);

    while(1)
    {
        printf("\n");
        printf("========================================\n");
        printf("         STUDENT MANAGEMENT SYSTEM      \n");
        printf("========================================\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Sort Students by Marks\n");
        printf("7. Exit\n");

        printf("----------------------------------------\n");
        printf("Enter your choice: ");

        // Validate menu input
        if(scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Please enter a number.\n");

            int ch;

            // Clear invalid input
            while((ch = getchar()) != '\n' && ch != EOF);

            continue;
        }

        switch(choice)
        {
            case 1:
                addStudent(students, &count);
                saveStudents(students, count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                updateStudent(students, count);
                saveStudents(students, count);
                break;

            case 5:
                deleteStudent(students, &count);
                saveStudents(students, count);
                break;

            case 6:
                sortStudents(students, count);
                saveStudents(students, count);
                break;

            case 7:
                saveStudents(students, count);

                printf("\nThank you for using Student Management System!\n");
                return 0;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}