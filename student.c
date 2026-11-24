#include <stdio.h>
#include "student.h"

// Function to add a new student
void addStudent(struct Student students[], int *count)
{
    if(*count >= MAX_STUDENTS)
    {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &students[*count].id);

    printf("Enter Student Name: ");
    scanf(" %49[^\n]", students[*count].name);

    printf("Enter Student Age: ");
    scanf("%d", &students[*count].age);

    printf("Enter Student Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;

    printf("\nStudent added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student students[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\n");
    printf("========================================\n");
    printf("             STUDENT RECORDS            \n");
    printf("========================================\n");

    for(i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("----------------------------------------\n");
        printf("ID    : %d\n", students[i].id);
        printf("Name  : %s\n", students[i].name);
        printf("Age   : %d\n", students[i].age);
        printf("Marks : %.2f\n", students[i].marks);
    }

    printf("========================================\n");
}

// Function to search student using ID
void searchStudent(struct Student students[], int count)
{
    int id, i;
    int found = 0;

    if(count == 0)
    {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("\nStudent Found!\n");
            printf("----------------------------------------\n");
            printf("ID    : %d\n", students[i].id);
            printf("Name  : %s\n", students[i].name);
            printf("Age   : %d\n", students[i].age);
            printf("Marks : %.2f\n", students[i].marks);
            printf("----------------------------------------\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent ID %d not found!\n", id);
    }
}

// Function to update student details
void updateStudent(struct Student students[], int count)
{
    int id, i;
    int found = 0;

    if(count == 0)
    {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\nEnter Student ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("\nStudent Found!\n");

            printf("Enter New Name: ");
            scanf(" %49[^\n]", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent details updated successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent ID %d not found!\n", id);
    }
}

// Function to delete a student using ID
void deleteStudent(struct Student students[], int *count)
{
    int id, i, j;
    int found = 0;

    if(*count == 0)
    {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);

    for(i = 0; i < *count; i++)
    {
        if(students[i].id == id)
        {
            // Shift remaining student records left
            for(j = i; j < *count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            (*count)--;

            printf("\nStudent deleted successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent ID %d not found!\n", id);
    }
}

// Function to sort students by marks
void sortStudents(struct Student students[], int count)
{
    int i, j;
    struct Student temp;

    if(count == 0)
    {
        printf("\nNo student records found!\n");
        return;
    }

    // Bubble sort in descending order
    for(i = 0; i < count - 1; i++)
    {
        for(j = 0; j < count - i - 1; j++)
        {
            if(students[j].marks < students[j + 1].marks)
            {
                // Swap complete student records
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nStudents sorted by marks successfully!\n");

    displayStudents(students, count);
}