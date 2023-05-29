#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n, num;
    set<int> s;
    cin >> n;
    bool inset = true;
    for (int i=0; i<n;i++) {
        cin >> num;
        if ((num < 1) or (num > n)) {
            //cout << "NO";
            inset = false;
            break;
        }
        s.insert(num);
    }
    if (inset == false) {
        cout << "NO";
    }
    else if (s.size()!=n) {
        cout << "NO";
    }

    else {
        cout << "YES";
    }
}
