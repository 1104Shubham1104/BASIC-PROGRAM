#include <iostream>
using namespace std;

class Student {
private:
    int rno;
    string name;
    string dept;
    float mark1, mark2, mark3;

public:
    void read_details() {
        cout << "Enter roll number: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter department: ";
        cin >> dept;
        cout << "Enter marks for three subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void print_details() {
        cout << "Roll Number: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Total Marks: " << mark1 + mark2 + mark3 << endl;
        cout << "Average Marks: " << (mark1 + mark2 + mark3) / 3.0 << endl;
    }
};

int main() {
    Student student1, student2;

    cout << "Enter details for student 1:" << endl;
    student1.read_details();
    cout << "Enter details for student 2:" << endl;
    student2.read_details();

    cout << "Details of student 1:" << endl;
    student1.print_details();
    cout << "Details of student 2:" << endl;
    student2.print_details();

    return 0;
}
