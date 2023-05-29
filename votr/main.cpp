#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    string name;
    map<string, int> m;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> name;
        map<string, int>::iterator it;
        if ((it = m.find(name))!= m.end()) {
            m[name] += 1;
        }
        else {
            m[name] = 1;
        }
    }

    //!!!!!!!!!! ไม่ควรทำ rev เพราะอาจจะได้คะแนนเสียงเท่ากัน แต่พอเอาไปใส่ rev จะกลายเป็นมี key เดียว ตัว value หายไปหลายตัว
    /*
    map<int,string> rev;
    for (auto &x : m){
        rev[x.second] = x.first;
    }

    if (k>m.size()) {
        k = m.size();
    }

    //cout << m.size() << " " << k << endl;
    auto it1 = rev.end();
    for (int i=0; i<k;i++) {
        it1--;
        //cout << it1->first << " ";
    }

    for (auto &x:m) {
        cout << x.first << " : " << x.second << endl;
    }

    cout << it1->first;
    */

    //เอาคะแนนโหวตมาใส่เวกเตอร แล้ววนหาเลขที่น้อยสุดที่เข้าได้ --> เลขซ้ำ 1,1,2,2 ก้ต้องใส่ จะได้ดูจำนวน k คน
    vector<int> v;
    for (auto &x : m) {
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());
    if (k>v.size()) {
        cout << v[0];
    }
    else {
        cout << v[v.size()-k];
    }
}
