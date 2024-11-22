#include<bits/stdc++.h>
using namespace std;
int area;
void Ract(int length, int width){
    area=2*(length+width);
    cout<<"The area is:"<<area<<endl;
}
void Tri(int height, int base){
    area=0.5*(height*base);
    cout<<"The area is:"<<area<<endl;
}
void Cir(int radius){
    area=3.14*(radius*radius);
    cout<<"The area is:"<<area<<endl;
}
int main(){
    int length, width, height, base, radius, choice;
    cout <<"Enter\n1.for Ractangle Area\n2.for Triangle Area\n3.for Circle Area\n";
    cin >>choice;
    switch (choice)
    {
    case 1:
        cout<< "Enter length and width\n";
        cin>>length>>width;
        Ract(length, width);
        break;
    case 2:
        cout<< "Enter height and base\n";
        cin>>height>>base;
        Tri(height, base);
        break;
    case 3:
        cout<< "Enter radius\n";
        cin>>radius;
        Cir(radius);
        break;
    default:cout<<"Wrong input.....";
        break;
    }
    
}