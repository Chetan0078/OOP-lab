#include<bits/stdc++.h>
using namespace std;
class Time{
    int h,m;
    public:
    Time(){}
    Time(int hr,int min):h(hr),m(min){ }
    void display(){
        cout<<"hour: "<<h<<" min: "<<m<<endl;
    }
    //ekdum easy hai overthinking mat kar saaley!!!
    /*void operator ++(){//normal function
        ++h;
        ++m;
    }*/
    /*friend Time operator ++(Time v){//friend function
        v.h++;
        v.m++;
        return v;
    }*/
    /*friend Time operator ++(Time &m,int){//friend function
        ++m.h;
        ++m.m;
    }*/
    friend Time operator --(Time &x,int){
        x.h--;
        x.m--;
    }
};

int main(){
    Time t1(3,34);
    t1.display();
    t1--;
    t1.display();
}