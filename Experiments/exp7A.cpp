
#include <iostream>
using namespace std;
class Person{
    const long long adhar;
    const string pan;
    string address;
    long long contactNo;

public:
    Person() : adhar(0), pan(NULL){ }
    Person(long long adhC, string panC, string address, long long contNo) : adhar(adhC), pan(panC){
        this->address = address;
        this->contactNo = contNo;
    }
    long long getAdhar() const{
        return adhar;
    }
    string getPan() const{
        return pan;
    }
    string add(){
        return address;
    }
    long long contNo(){
        return contactNo;
    }
    void changeAddress(string add){
        address = add;
    }
    void changeContactNo(long long no){
        contactNo = no;
    }
    void display()
    {
        cout << "Adhar Card No is : " << adhar<< endl;
        cout << "PAN card No is : " << pan<< endl;
        cout << "Address of person is : " << address << endl;
        cout << "Mobile is : " << contactNo << endl;
    }
};


int main()
{
    Person p1(302042275654, "EXAM34PAL", "IIT poornima", 8374824738);
    p1.display();
    p1.changeAddress("9,ajmerigate,jaipur");
    p1.changeContactNo(8888999922);
    p1.display();
    cout << "adhar card no is" << p1.getAdhar() << endl;
    return 0;
}
