#include <iostream>
#include<map>
#include <iomanip>
using namespace std;

int main()
{
     cout << std::fixed << std::setprecision(2);
    //map sum score and map round in
    int n;
    int sub, score;
    string teach;
    map<int,int> sumsub, roundsub;
    map<string,int> sumteach, roundteach;
    map<int,int>::iterator itsub;
    map<string,int>::iterator itteach;
    for (int i = 0; i<n; i++){
        cin >> sub >> teach >> score;
        if ((itsub = sumsub.find(sub))!= sumsub.end()){
            sumsub[sub] += score;
        }
        else {
            sumsub[sub] = score;
        }
        if ((itsub = roundsub.find(sub))!= roundsub.end()){
            roundsub[sub] += 1;
        }
        else {
            roundsub[sub] = 1;
        }
        if ((itteach = sumteach.find(teach))!= sumteach.end()){
            sumteach[teach] += score;
        }
        else {
            sumteach[teach] = score;
        }
        if ((itteach = roundteach.find(teach))!= roundteach.end()){
            roundteach[teach] += 1;
        }
        else {
            roundteach[teach] = 1;
        }
    }
    map<int,int> avesub;
    map<string,int> aveteach;
    map<int,int>::iterator itsumsub;
    map<int,int>::iterator itroundsub;
    map<string,int>::iterator itsumteach;
    map<string,int>::iterator itroundteach;
    itsumsub = sumsub.begin();
    itroundsub = roundsub.begin();
    itsumteach = sumteach.begin();
    itroundteach = roundteach.begin();
    for (int i=0; i<sumsub.size()-1; i++){
            avesub[itsumsub->first] = (itsumsub->second)/(itroundsub->second);
    }
    for (int i=0; i<sumteach.size()-1; i++){
            aveteach[itsumteach->first] = (itsumteach->second)/(itroundteach->second);
    }
    for (auto &x : avesub) {
        cout << x.first << " " << x.second << endl;
    }
    for (auto &x : aveteach) {
        cout << x.first << " " << x.second << endl;
    }
}
