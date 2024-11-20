//normal
//ticket 
#include <bits/stdc++.h>
using namespace std;

class TicketReservationSystem {
    int ticketNum;
    string name;

public:
    TicketReservationSystem() {
        ticketNum = 0;
        name = "unknown";
    }

    TicketReservationSystem(int t, string n) : ticketNum(t), name(n) {}

    void addPassenger() {
        cout << "Enter ticket number: ";
        cin >> ticketNum;
        cin.ignore();
        cout << "Enter passenger name: ";
        getline(cin, name);
        cout << "The passenger with ticket id=" << ticketNum << " and name=" << name << " is added." << endl;
    }

    void display() {
        cout << "Ticket num = " << ticketNum << ", name = " << name << endl;
    }

    bool searchPassenger(int id) {
        if (id == ticketNum) {
            cout << "Passenger found with name = " << name << endl;
            return true;
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter the number of passengers: ";
    cin >> n;

    TicketReservationSystem passengers[100];
    for (int i = 0; i < n; i++) {
        cout << "Fill the details for passenger no. " << i + 1 << ":" << endl;
        passengers[i].addPassenger();
    }

    cout << "\nDisplaying all passengers:" << endl;
    for (int i = 0; i < n; i++) {
        passengers[i].display();
    }

    int id;
    cout << "\nEnter a ticket number to search for the passenger: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (passengers[i].searchPassenger(id)) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Passenger not found!" << endl;
    }

    return 0;
}