#include <iostream>
using namespace std;

class Electricity {
    int units;
    double billAmount;

public:
Electricity(){}  // default constructer

    void setUnits(int u) {
        units = u;
    }

    void calculateBill() {
        if (units >= 0 && units <100) {
            billAmount = units * 1.5;
        }else if (units <200) {
            billAmount = 100 * 1.5 +(units-100)*2.0;
        } else  {
            billAmount = (100 * 1.5) + (100 * 2) +(units-200)*3.0 ;
        } 
    }

    void displayBill() {
        cout << "Total bill amount: Rs " << billAmount << endl;
    }
};

int main() {
    Electricity customer;

    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    customer.setUnits(units);
    customer.calculateBill();

    customer.displayBill();

    return 0;
}