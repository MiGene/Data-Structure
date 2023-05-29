#include <iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,w,num,med;
    set<int> s;
    vector<int> v;
    cin >> n >> w;
    vector<int> keep;

    //if (w>=n) w = n-1;


    for (int i=0; i<=w; i++) {
        cin >> num;
        v.push_back(num);
        keep.push_back(num);
    }
    //cout << v[0] << " " << v[1] << " " << v[2] << endl;
    sort(v.begin(),v.end());
    cout << v[w/2] << " ";

    vector<int>::iterator it;
    vector<int>::iterator findIt;
    it = keep.begin();
    for (int i=w+1; i<n ;i++) {
        //cout << "in1" << endl;
        findIt = find(v.begin(),v.end(), *it);
        //cout << *it << endl;
        //if (findIt!=v.end()) cout << "found" << endl;
        //else cout << "not" << endl;
        v.erase(findIt);
        //cout << "in e" << endl;
        it++;
        cin >> num;
        keep.push_back(num);
        v.push_back(num);
        sort(v.begin(),v.end());
        cout << v[w/2] << " ";
        //cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }


}
