// This program outputs the message "Hello World!" to the monitor

// #include "std_lib_facilities.h" // doesn't seem to be working
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
    cout << "Hello, World!\n"; // output "Hello, World!"
    //keep_window_open(); // wait for a character to be entered
    return 0;
}