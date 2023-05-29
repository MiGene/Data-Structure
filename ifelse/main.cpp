#include <iostream>

using namespace std;

int main()
{
    float num;
    cout << "number:";
    cin >> num;
    if (num<10) {
        cout << "less" <<endl;
    }
    else if (num<30){
        cout << "great"<<endl;
    }
    else {
        cout << "more"<<endl;
    }
    int age;
    cout << "age: ";
    cin >> age;
    if (age == 1) {
        cout << "HBD";
    }
    else if (age <= 3) {
        cout << "Yay";
    }
    else {
        cout << "Just sleep";
    }
}

