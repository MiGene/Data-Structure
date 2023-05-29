#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    bool win = true;
    int n,m,mypow;
    cin >> n >> m;
    map<int,int> mycard;
    map<int,int>::iterator it;
    int cards, yourpow,rounds;
    for (int i=0; i<n; i++) {
        cin >> mypow;
        if ((it=mycard.find(mypow))!=mycard.end()) {
            mycard[mypow] += 1;
        }
        else {
            mycard[mypow] = 1;
        }
    }
    //cout << mycard[10];

    for (int i=0; i<m; i++) {
        cin >> cards;
        for (int j=0; j<cards; j++) {
            cin >> yourpow;
            it = mycard.upper_bound(yourpow);
            if (it!=mycard.end()) {
                mycard[it->first] -= 1;
                //cout << "found" << endl;

                if (mycard[it->first]==0) {
                    mycard.erase(it->first);
                    //cout << "erase" << endl;
                }
            }
            else {
                win = false;
                break;
            }
        }
        rounds = i;
        if (win==false) break;
    }
    rounds += 1;
    if (win) rounds += 1;
    cout << rounds;


    /*
    vector<int> v;
    vector<int>::iterator it;
    for (int i=0; i<n; i++){
        cin >> mypow;
        v.push_back(mypow);
    }


    sort(v.begin(),v.end());
    int cards, yourpow,rounds;
    for (int i=0; i<m; i++){
        cin >> cards;
        for (int j=0; j<cards; j++){
            cin >> yourpow;
            it = upper_bound(v.begin(),v.end(),yourpow);

            if (it == v.end()){
                win = false;
                //cout << "not found" << endl;
                break;
            }
            else if (*it>yourpow) {
                v.erase(it);
                //cout << "in erase" << endl;
            }
        }
        rounds = i;
        if (win == false) break;
        //cout << "in last" << endl;

    }

    rounds+=1;
    if (win == true) rounds += 1;
    //if (rounds==2) rounds =1;
    cout << rounds;
    */
}
