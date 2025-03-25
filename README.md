# Student-Registration-Management
User can Registration, Update, Search &amp; view info by filesystem

## Introduction
This C++ program is a simple Student Database Management System that allows users to:
- Register new students
- View student records
- Edit student details
- Delete student records
- Search for students

The program utilizes file handling for persistent data storage.

## Features
1. **Student Registration** - Adds new students with details like name, roll number, department, and semester.
2. **View Records** - Displays all stored student records.
3. **Edit Records** - Allows modification of existing student details.
4. **Delete Records** - Removes a student record permanently.
5. **Search Students** - Searches for a student by roll number.

## Prerequisites
- A C++ compiler (GCC, Clang, or MSVC)
- Basic knowledge of file handling in C++

## Installation and Usage
1. **Clone the repository or copy the source code.**
   ```bash
   git clone <repository-url>
   ```
2. **Compile the program**
   ```bash
   g++ student_management.cpp -o student_management
   ```
3. **Run the program**
   ```bash
   ./student_management
   ```

## File Structure
- `student_management.cpp` - Main source file containing all functionalities.
- `students.txt` - Stores student data persistently.

## Code Overview
```cpp
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Student {
public:
    string name;
    int roll;
    string department;
    int semester;

    void registerStudent();
    void viewRecords();
    void editRecord();
    void deleteRecord();
    void searchStudent();
};
```

## How It Works
- **Registration:** Takes user input and saves details to `students.txt`.
- **Viewing Records:** Reads from `students.txt` and displays the data.
- **Editing Records:** Searches by roll number and modifies details.
- **Deleting Records:** Copies all records except the one to be deleted to a temporary file and renames it.
- **Searching:** Reads through the file and prints the matched record.

## Future Enhancements
- Implement a GUI for better user experience.
- Use a database instead of file handling for better performance.
- Add user authentication.

## Author
- **[Hasan Al Muazzaz]**
- **Email:** muazzaz.ruet@gmail.com

## License
This project is open-source and available under the MIT License.


