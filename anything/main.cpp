#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    /*
    vector<int> u,v;
    v = {0,1,2,3,4,5};
    int a,b;
    a = 1;
    b=4;
    for(int i = 0; i<a;i++){
        u.push_back(v[i]);
        }
    for (int i=b+1; i<v.size(); i++){
        u.push_back(v[i]);
        }

    int add=a;
    for (int i=a; i<b; i++){
        if (i%2!=0){
            u.insert(u.begin()+add,v[i]);
            //{0,1,2,3,4} --> {0,4}
            add += 1;
        }
    }
    for (int i=0; i<u.size();i++) {

        cout << u[i] << endl;
    }
    */
    set<int> s = {1,1,2,3,2,3};
    s.insert(1);
    s.insert(1);
    for (auto it = s.begin(); it!=s.end(); it++) {
        cout << *it << " ";
    }
    }



