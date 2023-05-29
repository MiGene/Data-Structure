#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int start=1;
    while (num > start) {
        start *= 2;
    }
    cout << start - num;
}
