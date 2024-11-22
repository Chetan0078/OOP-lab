#include <bits/stdc++.h>
using namespace std;

class LibraryItem {
protected:
    string type;
    static int id; //it will shared to all instances of this class
public:
    LibraryItem() {
        type = "none";
        id++;
    }
    LibraryItem(string n) : type(n) {
        id++;
    }
    virtual void display() const { 
        cout << "\nType: " << type << "\nId: " << id << endl;
    }
};
int LibraryItem::id = 0; 

class Books : public LibraryItem {
    string name;
    int pages;
public:
    Books() : LibraryItem("book"), name("Unknown"), pages(0) {}
    Books(string n, string m, int p) : LibraryItem(n), name(m), pages(p) {}
    void display() const override { 
        cout << "\nType: " << type << "\nId: " << id
             << "\nName: " << name << "\nPages: " << pages << endl;
    }
};

class DVDs : public LibraryItem {
    string title;
    double duration; 
public:
    DVDs() : LibraryItem("DVD"), title("Untitled"), duration(0.0) {}
    DVDs(string t, double d) : LibraryItem("DVD"), title(t), duration(d) {}
    void display() const override {
        cout << "\nType: " << type << "\nId: " << id
             << "\nTitle: " << title << "\nDuration: " << duration << " hours" << endl;
    }
};

int main() {
    LibraryItem* l;
    Books b("book", "The Boys", 456);
    l = &b;
    l->display(); // Will now call Books::display() due to polymorphism

    DVDs d("The Matrix", 2.5);
    l = &d;
    l->display(); // Demonstrates polymorphism with DVDs::display()

    return 0;
}
