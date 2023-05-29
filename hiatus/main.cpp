#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    int n,m,year,month;
    cin >> n >> m;

    for (int i=0; i<n;i++){
        cin >> year >> month;
        v.push_back({year,month});
    }
    sort(v.begin(),v.end());

    vector<pair<int,int>>::iterator it;
    int wanty, wantm;
    pair<int,int> p;
    for (int i=0; i<m; i++){
        cin >> wanty >> wantm;
        pair<int,int> p = {wanty,wantm};
        it = lower_bound(v.begin(),v.end(),p);
        if ((it->first == wanty) and (it->second == wantm)) {
            cout << "0 0" << "\n";
        }
        else if ((it==v.begin()) and ((it->first!=wanty) or (it->second!=wantm))) {
            cout << "-1 -1" << "\n";
        }
        else {
            it--;
            cout << it->first << " " << it->second << "\n";
        }

    }



    //for (int i=0; i<v.size();i++) {
      //  cout << v[i].first << " " << v[i].second << endl;

    //}

    /*
    set<pair<int,int>> s;
    for (int i=0;i<n;i++){
            cin >> year >> month;
        s.insert({year,month});
    }
    set<pair<int,int>>::iterator it;
    set<pair<int,int>>::iterator it2;

    int wanty,wantm;
    for (int i=0;i<m;i++) {
        cin >> wanty >> wantm;
        if ((it = s.find({wanty,wantm}))!= s.end()) {
            cout << "0 0" << endl;
        }
        else {
            it2 = s.upper_bound({wanty,wantm});
        if (it2 == s.begin()) {
            cout << "-1 -1" << "\n";
        }
        else {
                it2--;
            cout << it2->first << " " << it2->second << "\n";
        }


        }
    }
    */
}
