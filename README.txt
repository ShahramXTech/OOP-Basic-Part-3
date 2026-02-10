# OOP-Basic-Part-3
CS112 OOP Lab Task #03: Mastering core C++ concepts—array of objects, static members/functions, and const arguments. Six practical implementations demonstrating Book, Employee &amp; Student class designs with encapsulation and memory efficiency.
# CS112 Object-Oriented Programming — Lab Task #03

A structured implementation of fundamental C++ OOP concepts through six practical programming tasks. This repository demonstrates mastery of **array of objects**, **static members/functions**, and **const-correctness** in real-world class designs.

## 🔑 Core Concepts Covered

| Concept | Purpose | Implementation Example |
|---------|---------|------------------------|
| **Array of Objects** | Manage multiple class instances contiguously | `Book books[4]`, `Student students[3]` |
| **Static Members** | Shared state across all objects | `static int empCount` tracks total employees |
| **Static Functions** | Class-level operations without object instantiation | `Employee::getEmployeeCount()` |
| **Const Arguments** | Prevent accidental modification of parameters | `display(const int arr[])`, `const string&` |
| **Const Data Members** | Immutable attributes after initialization | `const int grades[5]` in StudentGrades |

## 📂 Task Breakdown

### Task 1: Book Management with Copy Constructor
- Parameterized constructor initializes `title` and `price`
- Copy constructor duplicates existing books
- Array of 4 books: first 2 initialized directly, next 2 copied

### Task 2 & 4: Employee Tracking System
- Static variable `empCount` increments on each construction
- Tracks total workforce without per-object overhead
- Static function provides global access to employee count

### Task 3: Student Registry
- Array of Student objects stores academic records
- Static counter reflects total enrolled students
- Constructor auto-registers each new student

### Task 5: Immutable Grade Records
- `const int grades[5]` ensures academic integrity
- Grades fixed at construction—no runtime modification possible
- Array of Student objects maintains multiple immutable records

### Task 6: Library Management System (Advanced Integration)
- Constant array stores immutable book attributes: ID, price, stock
- Static counter tracks total books in library
- Const-correct display function guarantees safe data access
- Unified design demonstrating all OOP concepts in one system

## 💡 Key Design Principles

- **Encapsulation**: Data members protected; access controlled via member functions
- **Memory Efficiency**: Static members avoid redundant storage across objects
- **Safety**: `const` enforces immutability where business logic requires it
- **Scalability**: Array-based designs allow easy expansion to N objects

## 🚀 Compilation & Execution

```bash
g++ task1.cpp -o task1 && ./task1
g++ task6.cpp -o library && ./library
┌──────────────────────────────────────┐
│  Name        : Shahram Tariq         │
│  GitHub      : @ShahramXTech         │
│  DOB         : 18 January 2006       │
│  Education   :                       │
│    • Matric  : Al-Noor School Manki  │
│    • F.Sc    : Orbit College Swabi   │
│    • Current : BS Software Engineering│
│              : Air University Kamra  │
└──────────────────────────────────────┘
