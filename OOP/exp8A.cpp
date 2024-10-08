#include <bits/stdc++.h>
using namespace std;

class Employee {
    protected:
    char name[20];
    int empId;
    double salary;

public:
    Employee() {
        empId = 0;
        salary = 0.0;
        strcpy(name, "Unknown");
    }

    void setDetails() {
        cout << "Enter name, empId, and salary: ";
        cin >> name >> empId >> salary;
    }

    void display() {
        cout << "\nName: " << name
             << "\nId: " << empId
             << "\nSalary: " << salary;
    }

    virtual double monpay() {
        return salary;
    }
};

class Professor : public Employee {
public:
    double monpay() override {
        return salary + salary * 0.1;
    }
};

class Admin : public Employee {
public:
    double monpay() override {
        return salary + salary * 0.05;
    }
};

class Janitor : public Employee {
    int workHour;

public:
    void setDetails() {
        Employee::setDetails();
        cout << "Enter work hours: ";
        cin >> workHour;
    }

    double monpay() override {
        return workHour * 500;
    }
};

int main() {
    Employee *e;
    Professor p;
    Admin a;
    Janitor j;
    
    cout<<"for professor:";
    e = &p;
    e->setDetails();
    e->display();
    cout << "\nMonthly Pay: " << e->monpay() << endl;
    
    cout<<"for admin:";
    e = &a;
    e->setDetails();
    e->display();
    cout << "\nMonthly Pay: " << e->monpay() << endl;
    
    cout<<"for janitor:";
    e = &j;
    e->setDetails();
    e->display();
    cout << "\nMonthly Pay: " << e->monpay() << endl;

    return 0;
}
