#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"I'm in base class";
    };
};
class Der:public A{
    public:
    void show(){
        cout<<"I'm in derived class";
    }
};

int main()
{
    A* c;
    A e;
    Der d;
    c = &d;
    c->show();
    cout<<endl;
    e.show();

    return 0;
}
