#include "std_lib_facilities.h"

int main(int argc, char const *argv[])
{
    vector<int> v = {5, 7, 9, 4, 6, 8};

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';

    for(int i = 0; i < 5; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';

    return 0;
}