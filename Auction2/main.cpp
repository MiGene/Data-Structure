#include <iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<queue>
using namespace std;

//leftover อาจจะไม่ถึง 0 ก้ได้
//ทำจนกว่าจนคนประมูลจะหมดไม่ก้ของหมด

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,a;
    cin >> n >> m >> a;
    map<int,map<int,int>> auctioning;
    map<int,vector<int>> reciever;
    map<int,int> leftover;

    for (int i=1; i<=m; i++) {
        vector<int> v;
        reciever[i] = v;
    }
    int num;
    for (int i=1; i<=n; i++) {
        map<int,int> M;
        auctioning[i] = M;
        cin >> num;
        leftover[i] = num;
    }
    string cmd;
    int user,prod,price;
    for (int i=0; i<a; i++) {
        cin >> cmd;
        if (cmd == "B") {
            cin >> user >> prod >> price;
            /*
            map<int,map<int,int>>::iterator it;
            if ((it=auctioning.find(user)) == auctioning.end()) {    //มี user นี้มั้ย

                auctioning[user] = tempM;
                tempM[prod] = price;
            }
            */
            auctioning[user][prod] = price;

        }
        else {
            cin >> user >> prod;
            map<int,map<int,int>>::iterator it;
            if ((it=auctioning.find(user)) != auctioning.end()){
                map<int,int>::iterator it2;
                if ((it2 = auctioning[user].find(prod))!= auctioning[user].end()) {
                    auctioning[user].erase(it2->first);
                }
            }
        }
    }

    for (int i=1; i<=n; i++) {
        priority_queue<pair<int,int>> ranking;
        map<int,int>::iterator it3;
        for (auto &x:auctioning) {
            if ((it3=x.second.find(i))!=x.second.end()) {
                ranking.push({x.second[i],x.first});
            }
        }
        if (!ranking.empty()) {
            while (leftover[i]>0 && !ranking.empty()) {
                reciever[ranking.top().second].push_back(i);
                ranking.pop();
                leftover[i] -= 1;
            }
        }
    }


    for (auto &x : reciever) {
        if (!x.second.empty()) {
            for (auto &y : x.second) {
                cout << y << " ";
            }
            cout << "\n";
        }
        else cout << "NONE" << "\n";
    }

}
