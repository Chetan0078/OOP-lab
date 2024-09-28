#include<bits/stdc++.h>
using namespace std;

class Student {
    string name;
    int rollNumber;
    float marks;

public:
    Student() {
        name = " ";
        rollNumber = 0;
        marks = 0.0;
    }

    Student(string name, int rollNumber, float marks) {
         this->name=name;
        this->rollNumber=rollNumber;
        this->marks=marks;
    }

    Student(Student &s) {
        name = s.name;
        rollNumber = s.rollNumber;
        marks = s.marks;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main() {
    Student student1;
    cout << "Student 1 (Default Constructor):" << endl;
    student1.display();

    Student student2("Chetan bairagi", 103, 80.2);
    cout << "Student 2 (Parameterized Constructor):" << endl;
    student2.display();

    Student student3(student2);
    cout << "Student 3 (Copy Constructor):" << endl;
    student3.display();

    return 0;
}

