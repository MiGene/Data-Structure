#include <iostream>
#include<map>
#include <iomanip>
using namespace std;
//เก็บ map {(sub,pair(score,round), (teach,(pair(score,round))}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    int n,score,round;
    string sub,teach;
    map<string,pair<int,int>> m;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> sub >> teach >> score;
        map<string,pair<int,int>>::iterator it;
        if ((it = m.find(sub))!= m.end()){
            m[sub].first += score;
            m[sub].second += 1;
            //cout << "int1"<< endl;
        }
        else {
            m[sub] = {score,1};
            //cout << "int2"<< endl;
        }
        if ((it = m.find(teach))!= m.end()){
            m[teach].first += score;
            m[teach].second += 1;
            //cout << "int3"<< endl;
        }
        else {
            m[teach] = {score,1};
            //cout << "int4"<< endl;
        }
    }

    //pair<pair<int,int>,int> p = {{1,2},0};
    //cout << p.first.first ;
    for (auto &x : m) {
            cout << x.first << " " << (x.second.first+0.0)/x.second.second << "\n";
        }
}
