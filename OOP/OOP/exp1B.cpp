#include<bits/stdc++.h>
using namespace std;
int id;
int amount , balance;
void addAccDetails(){
    cout<< "Enter account id\n";
    cin>>id;
    cout<< "Enter initial balance";
    cin>>balance;
}
void deposite(){
    cout<<"Enter deposite amount...\n";
    cin>>amount;
    balance= balance+amount;
    cout<<"Your balance is :"<<balance;
}
void withdraw(){
    cout<<"Enter withdraw amount...\n";
    cin>>amount;
    if ((balance-amount)>500)
    {
        balance= balance-amount;
        cout<<"Your balance is :"<<balance;
    }
    else
    cout<<"Transaction failed. Minimum amount limit is reached...\n";
    cout<<"Your balance is :"<<balance;
}
void check(){
    cout<<"Your balance is :"<<balance;
}


int main(){
    addAccDetails();
    int choice;
    cout<<"Enter\n1.for deposite\n2. for withdraw\n3.for check balance\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        deposite();
        break;
    case 2:
        withdraw();
        break;
    case 3:
        check();
        break;    
    default:cout<<"Invalid choice.....";
        break;
    }
}