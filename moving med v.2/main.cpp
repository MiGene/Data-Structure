#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,num;
    vector<int> v;
    cin  >> n >> m;
    for (int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
}
