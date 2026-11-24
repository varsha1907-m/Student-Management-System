
# 🎓 Student Management System in C

<p align="center">
  <b>A Menu-Driven Student Record Management Application</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/Compiler-GCC-orange?style=for-the-badge&logo=gnu" />
  <img src="https://img.shields.io/badge/Platform-Linux-lightgrey?style=for-the-badge&logo=linux" />
</p>

---

## 📌 Project Overview

The **Student Management System** is a console-based application developed using the C programming language.

It provides an efficient way to manage student information, including student ID, name, age, and marks.

The application supports adding, displaying, searching, updating, deleting, and sorting student records. It also uses file handling to save and retrieve student information.

## ✨ Features

- ➕ Add new student records
- 📋 Display all student records
- 🔍 Search students by ID
- ✏️ Update student information
- 🗑️ Delete student records
- 📊 Sort students by marks (descending order)
- 💾 Save student records into a file
- 📂 Load saved records automatically
- ✅ Validate menu input

## 🛠️ Concepts Used

- C Programming
- Structures
- Arrays
- Functions
- Pointers
- File Handling
- Bubble Sort
- Conditional Statements
- Loops

## 📁 Project Structure

```text
Student-Management-System/
│
├── main.c
├── student.h
├── student.c
├── file.h
├── file.c
├── students.txt
└── README.md
```

## ⚙️ Installation and Execution

### Prerequisites

- GCC Compiler
- Linux / Ubuntu / WSL

### 1. Clone the repository

```bash
git clone https://github.com/varsha1907-m/Student-Management-System.git
```

### 2. Navigate to the project directory

```bash
cd Student-Management-System
```

### 3. Compile the program

```bash
gcc -Wall -Wextra main.c student.c file.c -o student
```

### 4. Run the application

```bash
./student
```

## 🖥️ Application Menu

```text
========================================
       STUDENT MANAGEMENT SYSTEM
========================================
1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students by Marks
7. Exit
----------------------------------------
Enter your choice:
```

## 💾 File Handling

The application uses `students.txt` to store student records.

- Saves student information.
- Loads previously saved records.
- Automatically saves changes after add, update, and delete operations.

## 🎯 Learning Outcomes

Through this project, I gained practical experience in:

- Developing modular C applications.
- Using structures and arrays.
- Implementing functions and pointers.
- Performing file operations.
- Implementing Bubble Sort.
- Building menu-driven applications.

## 🚀 Future Enhancements

- Duplicate student ID validation.
- Improved input validation.
- Support for full names in file storage.
- Sorting by student name and ID.
- Student performance reports.

## 👩‍💻 Author

**Varsha M**

ECE Graduate | C Programming | Embedded C | Embedded Systems

- GitHub: [varsha1907-m](https://github.com/varsha1907-m)
- LinkedIn: [Varsha M](https://linkedin.com/in/varsha-m-engineer)
- LeetCode: [varsham19](https://leetcode.com/u/varsham19/)

---

⭐ If you find this project useful, please consider giving it a star!

**Developed with ❤️ using C Programming.**
