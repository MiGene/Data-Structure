#include <iostream>
#include<vector>
#include<set>
using namespace std;

int N[20000000];
int M[20000000];

int main()
{

    int n,m;
    //vector<int> N,M;
    set<int> inter;
    cin >> n >> m;
    int inn;
    for (int i=0;i<n; i++){
        cin >> inn ;
        N[i] = inn;
    }
    for (int i=0;i<m; i++){
        cin >> inn ;
        M[i] = inn;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (N[i] == M[j]){
                    if (*(inter.find(N[i])) != N[i] ){
                        inter.insert(N[i]);
                break;
                    }
            }
        }
    }

    for (auto it= inter.begin(); it!=inter.end(); it++) {
        cout << *it << " " ;
    }


}

