#include<bits/stdc++.h>
using namespace std;

// class Person{
//     string name;
//     int balance , acNo;
//     public:
//     Person(string n, int b, int a):name(n),balance(b),acNo(a){}
//     void deposite(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<balance<<endl;
//         }
//         else{
//             throw "Amount is less then zero";
//         }
//     }
//     void withdraw(int amount){
//         if(amount>0&&amount<=balance){
//             balance-=amount;
//             cout<<balance<<endl;
//         }
//         else{
//             throw "Amount is more then balance";
//         }
//     }

// };

// int main(){
//     Person p("a", 500,20);
//     try{
//         // p.deposite(0);
//         p.deposite(500);
//         p.withdraw(5000);
//     }
//     catch(const char *str){
//         cout<<"exception: "<<str;
//     }
// }

int main(){
    try{
        int *p= new int[100000000];
        p[10000000001]=10;

    }
    catch(exception &e){
        cout<<e.what();
    }
}