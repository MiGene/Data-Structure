#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n,m,inn,inm;
    vector<int> v;
    set<int> s;
    set<int> inter;
    cin >> n >> m;
    for (int i=0; i<n;i++){
        cin >> inn;
        v.push_back(inn);
    }
    for (int i=0; i<m; i++){
        cin >> inm;
        s.insert(inm);
    }
    set<int>::iterator it;
    for (int i=0; i<v.size();i++){
        if ((it = s.find(v[i])) != s.end()) {
            inter.insert(v[i]);
        }
    }
    for (auto &x : inter) {
        cout << x << " ";
    }
    /*
    for (int i=0; i<inter.size();i++) {
        cout << inter[i] << " ";
    }
    */
}

