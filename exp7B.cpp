#include<iostream>
using namespace std;
class Books{
   static int countBook;
   string bookName;
   string bookId;
public:
    Books(){
        countBook=countBook+1;
    }

    Books(string bookName){
        countBook=countBook+1;
        this->bookName=bookName;
        bookId="23PCE";
        bookId =bookId+ to_string(countBook);//ye hi increase karna hai 
    }

    void display(){
        cout<<"book name is : "<<bookName<<endl;
        cout<<"book id is : " <<bookId<<endl;
    }

    void noOfBooksPresent(){
        cout<<"No of books entered: "<<countBook-1<<endl; 
    }
    
};
int Books::countBook=1;// kam samaj aaya ye

int main(){
    Books b1("the boys");
    b1.display();
    Books b2("dopamine nation");
    b2.display();
    Books b3("the power of mind");
    b3.display();
    b1.noOfBooksPresent();
    return 0;
}
