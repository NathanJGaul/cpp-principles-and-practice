// read an write a first name

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
    cout << "Please enter your first name:\n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n";
}