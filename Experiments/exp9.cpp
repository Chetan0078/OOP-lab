

#include <bits/stdc++.h>
using namespace std;

class ComplexNumber{
    int real;
    int imaginary;

public:
    ComplexNumber(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void print() { cout << real<<"+ i" << imaginary<< endl; }
    ComplexNumber operator+(ComplexNumber c2){
        ComplexNumber c3(0, 0);
        c3.real = this->real + c2.real;
        c3.imaginary = this->imaginary + c2.imaginary;
        return c3;
    }
    ComplexNumber operator-(ComplexNumber c2){
        ComplexNumber c3(0, 0);
        c3.real = this->real - c2.real;
        c3.imaginary = this->imaginary - c2.imaginary;
        return c3;
    }
    friend ostream &operator<<(ostream &o1, ComplexNumber a1);
    friend istream &operator>>(istream &o1, ComplexNumber &a1);
};
ostream &operator<<(ostream &o1, const ComplexNumber a1){
    o1 << a1.real << "+" << a1.imaginary << "i" << endl;

    return o1;
}
istream &operator>>(istream &o1, ComplexNumber &a1){
    cout << "Enter real part: ";
    o1 >> a1.real;
    cout << "Enter imaginary part: ";
    o1 >> a1.imaginary;

    return o1;
}
int main(){
    ComplexNumber c1(45, 58);
    ComplexNumber c2(4, 9);
    ComplexNumber c3 = c1 + c2;
    c3.print();
    cout << c3;
    ComplexNumber c4(0,0);
    cin>>c4;
    cout<< c4;
    return 0;
}