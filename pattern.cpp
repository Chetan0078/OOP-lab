#include <bits/stdc++.h>
using namespace std;

void pattern1(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void pattern3(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * rows - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void pattern4(int rows)
{
    pattern2(rows);
    pattern3(rows);
}
void pattern5(int rows)
{
    for (int i = 0; i < rows * 2 - 1; i++)
    {
        int stars = i;
        if (i > rows)
            stars = 2 * rows - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int rows)
{
    int val = 1;
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            val = 0;
        }
        else
            val = 1;

        for (int j = 0; j < i; j++)
        {
            cout << val<<" ";
            val = 1 - val;
        }
        cout << endl;
    }
}
void pattern7(int rows){
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        for (int j = 0; j < 2*(rows-i); j++)
        {
            cout<<" ";
        }

        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
}
void pattern8(int rows){
    int num=1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num <<"  ";
            num=num+1;
        }
        cout << endl;
       
    }
}
void pattern9(int rows){
    char ch = 'A';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
        }
        ch= ch+1;
        cout<<endl;
    }
    

}
void pattern10(int rows){
    // for (int i = 0; i <= rows; i++)
    // {
    //     char ch = rows + 1 - i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << ch<<" ";
    //         ch = ch+1;
    //     }
    //     cout <<endl;
    // }
    for (int i = 0; i < rows; i++)
    {
        for (char ch = 'E'-i; ch <= 'E'; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    
}
void pattern11(int rows){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i+1; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= (i-1)*2; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= rows-i+1; j++)
        {
            cout<<"*";
        }
        while (rows!=i)
        {
            cout<<endl; 
            break; 
        }
        
    }
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        for (int j = 0; j < 2*(rows-i); j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}
void pattern12(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i==0||i==rows-1||j==0||j==rows-1)
            {
                cout<<"* ";

            }
            else
                cout<<"  ";
            
        }
        cout<<endl;
    }
    
}


int main()
{
    int rows, columns;
    cout << "Enter the number of rows for pattern" << endl;
    cin >>rows;
    pattern12(rows);

    return 0;
}