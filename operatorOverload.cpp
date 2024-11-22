
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
    Time operator +(Time obj){
        Time t;
        t.h=h+obj.h;
        t.m=m+obj.m;
        while(t.m>=60){
            t.h++;
            t.m=t.m-60;
        }
        return t;
    }
    void operator ++(){//normal function
        ++h;
        ++m;
        while(m>=60){
            h++;
            m=m-60;
        }
    }
    /*friend Time operator ++(Time v){//friend function
        v.h++;
        v.m++;
        return v;
    }*/
    /*friend Time operator ++(Time &m,int){//friend function
        ++m.h;
        ++m.m;
    }*/
    // friend Time operator --(Time &x,int){
    //     x.h--;
    //     x.m--;
    // }
};

int main(){
    Time t1(3,30),t2(4,70), t3;
    t3=t1+t2;
    t1.display();
    t2.display();
    t3.display();
}
