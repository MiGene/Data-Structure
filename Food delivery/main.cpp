#include <iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    //queue สองร้าน เอามาเทียบกัน
    int n,m,price,times=0,goal;
    int cmd;
    int shop;
    cin >> n >> m;
    vector<int> v;
    vector<pair<int,int>> round;
    int maxGoal;
    queue<int> q1, q2;
    cin >> goal;
    v.push_back(goal);
    maxGoal = goal;
    for (int i=0; i<m-1; i++) {
        cin >> goal;
        v.push_back(goal);
        if (goal > maxGoal) maxGoal = goal;
    }

    int p, p1, p2, total=0;
    for (int i=0; i<n; i++) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> shop >> price;
            if (shop == 1) q1.push(price);
            else q2.push(price);
        }
        else {

            if (q1.empty()) {
                p = q2.front();
                q2.pop();
                total += p;
                times += 1;
                //cout << "q1 emp" << endl;
            }

            else if (q2.empty()) {
                p = q1.front();
                q1.pop();
                total += p;
                times += 1;
                //cout << "q2 emp" << endl;
            }

            else {
            //cout << "compare" << endl;
            p1 = q1.front();
            p2 = q2.front();

            if (p1<p2) {
                q1.pop();
                total += p1;
                times += 1;
            }
            else if (p2<p1) {
                q2.pop();
                total += p2;
                times += 1;
            }
            else if (p1==p2) {
                q1.pop();
                total += p1;
                times += 1;
            }
            }
            round.push_back({total,times});
            if (total > maxGoal) break;
        }
    }
    vector<pair<int,int>>::iterator it;
    for (auto &x : v) {
        pair<int,int> pa = {x,0};
        it = lower_bound(round.begin(),round.end(),pa);
        if (it == round.end()) cout << "-1 ";

        else {
                int s = it->second;
                cout << s << " ";
        }
    }
}

