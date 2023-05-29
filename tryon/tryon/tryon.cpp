// tryon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include<map>
using namespace std;
int main()

{
    
    map<string, int> m;
    map<int, string> swap;
    m["a"] = 1;
    m["b"] = 2;
    //map<int, string>::reverse_iterator it;
    
    string sin;
    cin >> sin;
    int k = 3;
    map<int, string>::iterator it;
    if ((it = m.find("a")) != m.end()) {
        cout << "found";
    }
    else {
        cout << "not found";
    }

    for (auto& x : m) {
        cout << x.first << " --> " << x.second << endl;
    }
    




}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
