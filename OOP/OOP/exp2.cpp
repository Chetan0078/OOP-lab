#include<bits/stdc++.h>
using namespace std;
struct book
{
    int id;
    char name[20];
    int price;
};
int main(){
    int n;
    cout<<"Enter number of books\n";
    cin>>n;
    book s[n];
    cout<<"Enter books details\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter book no."<<i+1<<" Id, name and price"<<endl;
        cin>>s[i].id>>s[i].name>>s[i].price;
    }
    cout<<"Showing relevent books....\n";
    for (int i = 0; i < n; i++)
    {
        if (s[i].price<500)
        {
            cout<<"book no.:"<<i+1<<"\nbook id:"<<s[i].id<<"\nbook name:"<<s[i].name<<"\nbook price:"<<s[i].price;
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
    
}
