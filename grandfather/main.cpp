#include <iostream>
#include<map>
using namespace std;

//ยัดทุกคสพ.พ่อลูก แล้วหาว่าสองคนนี้พ่อเปนใครปู่เป็นใคร
//สร้างทั้ง map s->f

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    map<long long int,long long int> sf;
    long long int s,f;
    for (int i=0; i<n; i++) {
        cin >> f >> s;
        //if ((it = m.find(s)) != m.end()) {
        sf[s] = f;
        //}
    }
    long long int c1,c2;
    long long int f1,f2,F1,F2;
    //F1 = F2 = 0;
    for (int i=0; i<m; i++) {
        cin >> c1 >> c2;
        bool c1appear, c2appear;
        bool F1appear, F2appear;
        c1appear = c2appear = true;
        F1appear = F2appear = true;
        if (c1 == c2) {
            cout << "NO" << endl;
        }
        else {
        map<long long int,long long int>::iterator it1;
        if ((it1 = sf.find(c1)) != sf.end()) {
                f1 = it1->second;
                map<long long int,long long int>::iterator it1_1;
            if ((it1_1 = sf.find(f1)) != sf.end()) {
               F1 = it1_1->second;
            }
            else {
                F1appear = false;
            }
        }
        else {
            c1appear = false;
        }
        map<long long int,long long int>::iterator it2;
        if ((it2 = sf.find(c2)) != sf.end()) {
                f2 = it2->second;
            map<long long int,long long int>::iterator it2_2;
            if ((it2_2 = sf.find(f2)) != sf.end()) {
               F2 = it2_2->second;
            }
            else {
                F2appear = false;
            }
        }
        else {
            c2appear = false;
        }
        //cout << F1 << " : " << F2 << endl;
        if ((c1appear == false) or (c2appear == false)){
                  cout << "NO" << endl;
                 }
        else if ((F1appear == false) or (F2appear == false)){
                cout << "NO" << endl;
        }
        else if (F1 == F2) {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }
        }

    }
}
