#include <bits/stdc++.h>
using namespace std;

class Patient {
    long p_id;
    string name;
    int age;
    string disease;
    int roomNo;

public:
    Patient() {}

    Patient(long p_id, string name, int age, string disease, int roomNo) {
        this->p_id = p_id;
        this->name = name;
        this->age = age;
        this->disease = disease;
        this->roomNo = roomNo;
    }

    string getName() {
        return name;
    }

    long getId() {
        return p_id;
    }

    void displayDetails() {
        cout << "Patient ID: " << p_id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Disease: " << disease << "\n";
        cout << "Room No: " << roomNo << "\n";
    }
};

class Hospital {
    Patient* arr;
    int count;
    int max_len;

public:
    Hospital() {
        max_len = 100;
        count = 0;
        arr = new Patient[max_len];
    }

    ~Hospital() {
        delete[] arr;
    }

    void addPatient(Patient& p1) {
        if (count >= max_len) {
            cout << "Overflow: Maximum number of patients reached!\n";
        }
        arr[count++] = p1;
        cout << "Patient added successfully!\n";
    }

    void displayPatients() {
        if (count == 0) {
            cout << "No patients in the hospital.\n";
        }

        for (int i = 0; i < count; i++) {
            cout << "\n--- Patient " << i + 1 << " ---\n";
            arr[i].displayDetails();
        }
    }

    void searchPatient(string name) {
        for (int i = 0; i < count; i++) {
            if (arr[i].getName() == name) {
                cout << "Patient found:\n";
                arr[i].displayDetails();
                return;
            }
        }
        cout << "Patient not found.\n";
    }

    void deletePatient(long p_id) {
        int i;
        for (i = 0; i < count; i++) {
            if (arr[i].getId() == p_id) {
                break;
            }
        }
        if (i == count) {
            cout << "Patient with ID " << p_id << " not found.\n";
            return;
        }

        for (int j = i; j < count - 1; j++) {
            arr[j] = arr[j + 1];
        }
        count--;
        cout << "Patient deleted successfully!\n";
    }
};

int main() {
    Hospital h1;
    
    Patient p1(1001, "AB", 23, "Flu", 101);
    Patient p2(1002, "CD", 30, "COVID-19", 102);
    Patient p3(1003, "EF", 40, "Asthma", 103);
    
    h1.addPatient(p1);
    h1.addPatient(p2);
    h1.addPatient(p3);
    
    cout << "\nDisplaying all patients:\n";
    h1.displayPatients();
    
    cout << "\nSearching for patient 'CD':\n";
    h1.searchPatient("CD");
    
    cout << "\nDeleting patient with ID 1002 (CD):\n";
    h1.deletePatient(1002);
    
    cout << "\nDisplaying all patients after deletion:\n";
    h1.displayPatients();

    return 0;
}