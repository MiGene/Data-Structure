#include <iostream>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
    int n,m,a;
    cin >> n >> m >> a;
    map<int,pair<int,priority_queue<pair<int,int>>>> pieces;
    map<int,set<int>> users;
    set<pair<int,int>> withdraw;
    stack<vector<int>> st;
    for (int i=1; i<=m; i++) {
        set<int> s;
        users[i] = s;
    }
    int prod;
    for (int i=1; i<=n; i++) {
        cin >> prod;
        pieces[i].first = prod;
    }
    string cmd;
    int user,auc,price;
    for (int i=0; i<a; i++) {
        cin >> cmd;
        if (cmd == "B") {
            cin >> user >> auc >> price;
            pieces[auc].second.push({price,user});
            st.push({user,auc,price});
        }
        else {
            cin >> user >> auc;
            withdraw.insert({user,auc});
        }
    }

    for (auto &x : pieces) {
            while (x.second.first > 0 && !x.second.second.empty()) {
                pair<int,int> winner = x.second.second.top();
                x.second.second.pop();
                set<pair<int,int>>::iterator it;
                pair<int,int> temp = {winner.second, x.first}; //, x.second.second.first};
                stack<vector<int>> TT = st;
                vector<int> tempStLong = TT.top(); TT.pop();
                pair<int,int> tempSt = {tempStLong[0],tempStLong[1]};
                while (temp != tempSt) {
                    cout << "in while" << endl;
                    tempStLong = TT.top(); TT.pop();
                    tempSt = {tempStLong[0],tempStLong[1]};
                    TT.pop();
                }
                if (tempStLong[2] == winner.first){
                    if ((it = withdraw.find({winner.second,x.first})) == withdraw.end()){
                        users[winner.second].insert(x.first);
                         x.second.first -= 1;
                    }
                }
            }

    }
    for (auto &x : users) {
        if (!x.second.empty()) {
            for (auto &y : x.second) {
                cout << y << " ";
            }
            cout << "\n";
        }
        else cout << "NONE" << "\n";
    }

}
