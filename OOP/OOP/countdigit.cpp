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
    int countDigit(int num){
        int count=0;
        while (num>0){
            num=num/10;
            count+=1;
        }
        return count;    
    }

};
int main(){
    Maths a1;
    int num;
    cin>>num;
    a1.setNum(num);
    cout<<endl;
    cout<<a1.countDigit(num);
    
}