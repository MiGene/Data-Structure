#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,a;
    cin >> n >> a;
    vector<int> v;
    v.push_back(a);
    //if (2*a+1 < n) v.push_back(2*a+1);
    //if (2*a+2 < n) v.push_back(2*a+1);
    for (int i=0; i<v.size(); i++) {
        if (v[i]*2+1 < n) v.push_back(v[i]*2+1);
        if (v[i]*2+2 < n) v.push_back(v[i]*2+2);
    }
    cout << v.size() << endl;
    for (auto &x:v) cout << x << " " ;

}
