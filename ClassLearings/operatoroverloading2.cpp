#include<bits/stdc++.h>
using namespace std;

class Calculation{
    int real, img;
    public:
    Calculation(){real = 0;
    img = 0;}
    Calculation(int r,int i):real(r), img(i){}
    Calculation operator +(Calculation z1){
        Calculation z2;
        z2.real = z1.real + real;
        z2.img = z1.img + img;
        return z2;
    }
    void display(){
        cout<<"\nThe complex number is: "<<real<<" + i"<<img<<endl;
    }
};

int main(){
    Calculation z3(3,4),z4(7,6),z5;
    z3.display();
    z4.display();
    z5 = z3+z4;
    cout<<"\n After addition....\n";
    z5.display();


}