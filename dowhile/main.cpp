#include <iostream>

using namespace std;

int main()
{
    /*
    string sth;
    while (sth != "bye"){
        cout << "enter your name ";
        getline(cin, sth);
    }
    */
    string sth;
    do {
        //string sth;
        cout << "enter your name ";
        getline(cin, sth);
    }
    while (sth != "b");
}
