#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100

// Structure to store student details
struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};

// Function declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void sortStudents(struct Student students[], int count);

#endif