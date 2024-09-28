#include<bits/stdc++.h>
using namespace std;
void explain_pair(){
    pair <int , pair <int,int>> p = {8,{3,4}};
    cout<<p.second.first<<p.second.second<<p.first;
    // we can change the datatype according to our needs, and we can also make p as a array
    pair <int , int> arr[3] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].second;
}

void explain_vector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    // cout<<v[0];

    vector <pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    // cout<<vec[1].second;

    vector<int> a(6,20);//it create an array of size 6 and all the elements will become to 20
    // for (int i = 0; i < 6; i++){
    //     cout<<a[i];
    // }

    //if you wanna copy one array to another then simply go through this syntex
    vector <int> v2(a);
    // for (int i = 0; i < 6; i++){
    //     cout<<v2[i]<<endl;
    // }
    //one more way to access vector elements is iterator
    vector<int>::iterator it = v.begin();
    for (int i = 0; i < 4; i++){
        // cout<<*it<<endl;
        it++;
    }
    for (vector<int>::iterator me= v.begin(); me!=v.end(); me++){
        // cout<<*me<<endl;
    }
    for (auto me= v.begin();me!=v.end(); me++){
        // cout<<*me<<endl;
    }
    vector<int>c(6,40);
    // c.erase(c.begin()+1);
    // cout<<c[1];
    c.erase(c.begin()+1,c.begin()+5);
    //insertion in vectors

    c.insert(c.begin(),50);
    c.insert(c.begin()+1,2,30);
    for (auto me= c.begin();me!=c.end(); me++){
        cout<<*me<<endl;
    }
}

void explain_list(){
    list <int> ls;
    ls.push_back(5);
    ls.emplace_back(6);
    ls.push_front(4);
    ls.emplace_front(3);
    for (auto temp=ls.begin(); temp!=ls.end(); temp++){
        cout<<*temp<<endl;
    }
    //remaining all function are as same as the vector
}

int main()
{
    explain_list();
    return 0;
}
