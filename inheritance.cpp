

#include<bits/stdc++.h>
using namespace std;

class LibraryItem{
    protected:
    string type;
    static int id;
    public:
    LibraryItem(){
        type="none";
        id++;

    }
    LibraryItem(string n):type(n){id++;};
    void display(){
        cout<<"\nType: "<<type<<"\nId: "<<id<<endl;
    }
};
int LibraryItem :: id=0;
class Books:public LibraryItem{
    string name;
    int pages;
    public:
    
};

class DVDs{

};
int main(){
    cout<<"Helloworld!";
    cout<<"This is new line";
    
}
