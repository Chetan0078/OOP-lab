
#include<bits/stdc++.h>
using namespace std;
class Maths{
    int num;
    public:
    Maths(){
        num=0;
    }
    void setNum(int n){
        num=n;
    }
    int getNum(){
        return num;
    }
    int pelindrom (int num){
        int rem,rev=0,temp=num;
        while (num>0){
            rem=num%10;
            num=num/10;
            rev=rev*10+rem;
        }
        if (temp==rev){
            cout<<"num is a pelindrom";
        }
        else{
            cout<<"num is not a palindrom";
        }
    }

};
int main(){
    Maths a1;
    int num;
    cin>>num;
    a1.setNum(num);
    cout<<endl;
    cout<<a1.pelindrom(num);
    
}