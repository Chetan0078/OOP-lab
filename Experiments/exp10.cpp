
#include<bits/stdc++.h>
using namespace std;

class InsufficientFundsException:public exception{
    public:
    const char* what() const noexcept override{
        return "Error: Insufficient funds for this withdrawal.";
    }
};
class BankAccount{
    double balance;
public:
    BankAccount(double initialBalance = 0.0) : balance(initialBalance){}
    void deposit(double amount){
        balance +=amount;
        cout<< "Deposited : $"<< amount<<", New Balance: $"<< balance<<endl;
    }
    void  withdraw(double amount){
        if(amount > balance){
            throw InsufficientFundsException();
        }
        balance -=amount;
        cout<< "Withdraw: $"<< amount<<", New Balance: $"<< balance << endl;
    }
    double accountBalance() const{
        return balance;
    }
};
int main(){
    BankAccount account(100.0);
    try{
        account.deposit(50);
        account.withdraw(30);
        account.withdraw(300);
    }
    catch(const InsufficientFundsException& e){
        cerr<<e.what()<<endl;
    }
    cout<<"Final balance : " << account.accountBalance()<<endl;
    return 0;
}
