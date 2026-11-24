#include <stdio.h>
#include "file.h"

// Function to save student records into a file
void saveStudents(struct Student students[], int count)
{
    FILE *fp;
    int i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("\nUnable to open file!\n");
        return;
    }

    // Write student details into the file
    for(i = 0; i < count; i++)
    {
        fprintf(fp, "%d %s %d %.2f\n",
                students[i].id,
                students[i].name,
                students[i].age,
                students[i].marks);
    }

    fclose(fp);
}

// Function to load student records from a file
void loadStudents(struct Student students[], int *count)
{
    FILE *fp;

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("\nNo previous student records found.\n");
        return;
    }

    *count = 0;

    // Read student records from the file
    while(*count < MAX_STUDENTS &&
          fscanf(fp, "%d %49s %d %f",
                 &students[*count].id,
                 students[*count].name,
                 &students[*count].age,
                 &students[*count].marks) == 4)
    {
        (*count)++;
    }

    fclose(fp);

    printf("\n%d student records loaded successfully!\n", *count);
}