#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,
vector<pair<vector<int>::iterator,int>> &multiply) {
//write your code here

    vector<int> u;
    //vector<int>::iterator it;
    sort(multiply.begin(),multiply.end());
    //for (auto &x : multiply) cout << v[x.first - v.begin()] <<endl;
    auto it = multiply.begin();
    bool used=false;
    int si = v.size();
    for (int i=0; i<si;i++) {

        if (used == false) {
        int numMul = v[it->first - v.begin()];
        int times = it->second;

        if (v[i]==numMul) {
            if (it<multiply.end()) {
            //cout << "if" << endl;
            for (int j=0; j<=times; j++){
            u.push_back(v[i]);
            //cout << "pushing" << endl;
            //it++;
            //cout << it->first - v.begin() << endl;
            }
            it++;
            if (it>=multiply.end()) used = true;
            }
        }
        else {
            //cout << "else" << endl;
            u.push_back(v[i]);
        }
        }
        else u.push_back(v[i]);
    }
    v=u;
}
int main() {
ios_base::sync_with_stdio(false);cin.tie(0);
int n,m;
cin >> n >> m;
vector<int> v(n);
vector<pair<vector<int>::iterator,int>> multiply(m);
for (int i = 0;i < n;i++) cin >> v[i];
for (int i = 0;i < m;i++) {
int a,b;
cin >> a >> b;
multiply[i].first = v.begin()+a;
multiply[i].second = b;
}
member_multiply(v,multiply);
cout << "======= result ========" << endl;
cout << v.size() << endl;
for (auto &x : v) {
cout << x << " ";
}
cout << endl;
}
