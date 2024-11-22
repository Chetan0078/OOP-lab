#include <iostream>
using namespace std;

class BankAcoount;  

class FriendFunction
{
public:
    void transfer(BankAcoount &A1, BankAcoount &A2);  
};

class BankAcoount
{
    string accountName;
    int accountNumber;
    double balance;

public:
BankAcoount(){
   balance = 0;
}

BankAcoount( string accountName, int accountNumber, double balance){
    this->accountName = accountName;
    this->accountNumber = accountNumber;
    this->balance = balance;
}
    BankAcoount(double b)
    {
        balance = b;
    }
    friend void FriendFunction::transfer(BankAcoount &A1, BankAcoount &A2);

    void printBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

void FriendFunction::transfer(BankAcoount &A1, BankAcoount &A2)
{
    A2.balance += A1.balance;
    A1.balance = 0.0;
}

int main()
{
    BankAcoount A1(1000);
    BankAcoount A2(2000);
    FriendFunction B1;

    cout << "Before transfer:" << endl;
    A1.printBalance();
    A2.printBalance();

    B1.transfer(A1, A2);

    cout << "\nAfter transfer:" << endl;
    A1.printBalance();
    A2.printBalance();

    return 0;
}