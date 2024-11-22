#include <iostream>
using namespace std;

class Account;  

class Temp
{
public:
    void transfer(Account &A1, Account &A2);  
};

class Account
{
    string accountName;
    int accountNumber;
    double balance;

public:
    Account (){

    }
    Account(string accountName,int accountNumber,double balance){
        this->accountName = accountName;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    Account(double b)
    {
        balance = b;
    }
    friend void Temp::transfer(Account &A1, Account &A2);

    void printBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

void Temp::transfer(Account &A1, Account &A2)
{
    A2.balance += A1.balance;
    A1.balance = 0.0;
}

int main()
{
    Account A1(1000);
    Account A2(2000);
    Temp B1;

    cout << "Before transfer:" << endl;
    A1.printBalance();
    A2.printBalance();

    B1.transfer(A1, A2);

    cout << "\nAfter transfer:" << endl;
    A1.printBalance();
    A2.printBalance();

    return 0;
}