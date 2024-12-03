
#include<bits/stdc++.h>
using namespace std;
class Vehical{
protected:
    string brand;
    string model;
    int year;
    float rent;
public:
    Vehical (){
        brand="unknown";
        model= "unknown";
        year= 0;
        rent=0.0;
    }
    virtual float rentCal()=0;
};
class Car : public Vehical{
    int days;
    public:
    int setDays(int d){
        days = d;
    }
    float rentCal(){
        rent = 500;
        rent = days*(rent);
        if (days>7){
            rent = rent - .05*rent;
        }
        return rent;
    }
};
class Moto : public Vehical{
    int days;
    public:
    int setDays(int d){
        days = d;
    }
    float rentCal(){
        rent = 400;
        rent = days*(rent);
        if (days<3){
            rent = rent - .1*rent;
        }
        return rent;
    }
};
class Bicycle : public Vehical{
    int days;
    public:
    int setDays(int d){
        days = d;
    }
    float rentCal(){
        rent = 200;
        rent = days*(rent);
        return rent;
    }
};

int main(){
    Vehical* v;
    Car c;
    Moto m;
    Bicycle b;
    cout<< "rent for a day for \ncar=500\nmoto=400\nbicycle=200\n";
    // for car
    v = &c;
    c.setDays(8);
    cout<<v->rentCal()<<endl;

    //for moto
    v = &m;
    m.setDays(2);
    cout<<v->rentCal()<<endl;

    // for bicycle 
    v = &b;
    b.setDays(10);
    cout<<v->rentCal()<<endl;
}
