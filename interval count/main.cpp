#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()

{
    /*
    vector<int> v={0,1,4,3,2};
    vector<int>::iterator it;
    it = lower_bound(v.begin(),v.end(),2);
    cout << *it;
    */

    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,k, num, want;
    cin >> n >> m >> k;
    //set<int> s;
    vector<int> v;
    for (int i=0; i<n; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());

    for (int i=0; i<m; i++) {
        int keep;
        cin >> want;
        keep = 0;
        vector<int>::iterator it_low;
        vector<int>::iterator it_up;
        it_low = lower_bound(v.begin(),v.end(),want-k);
        it_up = upper_bound(v.begin(),v.end(),want+k);
        //lower_bound(v.begin())
        for (int i= it_low-v.begin(); i<it_up-v.begin()+1;i++) {
                //if ((v[i]>=want-k) and (v[i]<=want+k)) {
                //    keep += 1;
                //}
                keep += 1;
        }
        keep -= 1;
         cout << keep << " ";

    }

}
