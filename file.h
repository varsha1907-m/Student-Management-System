#ifndef FILE_H
#define FILE_H

#include "student.h"

// Function declarations for file handling
void saveStudents(struct Student students[], int count);
void loadStudents(struct Student students[], int *count);

#endif