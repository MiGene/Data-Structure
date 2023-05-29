#include <iostream>
#include<set>
#include<vector>
#include <map>
#include<algorithm>
using namespace std;

//เก็บ {begin,end} ใน array
int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,be,en,want;
    cin >> n >> m;
    vector<int> v;
    for (int i=0; i<n; i++){
        cin >> be >> en;
        v.push_back(be);
        v.push_back(en);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it;
    for (int i=0;i<m;i++){
        cin >> want;
        it = lower_bound(v.begin(),v.end(),want);
        if (*it==0 and want!=*it) {
            cout << "0 ";
        }
        else if ((it-v.begin())%2 != 0){
            cout << "1 ";
        }
        else if (((it-v.begin())%2 == 0) and (want==*it)) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }

    }

