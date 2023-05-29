#include <iostream>
#include<map>
using namespace std;

int main()
{
    int getin;
    cin >> getin;
    string sin;
    map<string,int> m;
    for (int i=0; i<getin; i++) {
        cin >> sin;
        map<string, int>::iterator it;
        if (( it = m.find(sin))!= m.end()) {
            m[sin] += 1;
        }
        else {
            //cout << "in!!" << endl;
            m[sin] = 1;
        }
    }

    map<int, string> rev;
    for (auto &x : m){
        rev[x.second] = x.first;
    }

    map<int, string>::iterator it1;
    it1 = rev.begin();
    //it1 = rev.begin()+1;
    //cout << m.size() << endl;
    //cout << it1->first <<endl;
    for (int i=0; i<rev.size()-1;i++) {
        //cout << it1->first << endl;
        it1++;

    }
    cout << it1->second << " " << it1->first << endl;
    //cout << "a =" << it1->second << "no" << endl;
    //for (auto &x : rev) {
    //    cout << x.first << " --> " << x.second << endl;
    //}
}
