Certainly! Here's a sample code for a Student Record Management System program in C++:

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
    string name;
    int rollNumber;
    float marks;

public:
    void addStudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

void addRecord() {
    ofstream file("student_records.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    Student student;
    student.addStudent();

    file << student.name << " " << student.rollNumber << " " << student.marks << endl;

    file.close();

    cout << "Record added successfully!" << endl;
}

void displayRecords() {
    ifstream file("student_records.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }

    string name;
    int rollNumber;
    float marks;

    while (file >> name >> rollNumber >> marks) {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "Student Record Management System" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }

        cout << endl;

    } while (choice != 3);

    return 0;