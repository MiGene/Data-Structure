#include <iostream>
#include <vector>

using namespace std;

    void  combi (int n, vector<int> &sol, int len, int k, int chosen){
        if (len<n) {
            if (len-chosen < n-k){
                sol[len] =0;
                combi(n,sol,len+1,k,chosen);
            }
            if (chosen<k) {
                sol[len] = 1;
                combi(n,sol,len+1,k,chosen+1);
            }
        }
        else {
            for (int i=0; i<n; i++) {
                if (sol[i]==1) {
                    cout << i+1 << " ";
                }
            }
            cout << endl;
        }
    }

int main()
{

    vector<int> sol = [0,0,0,0];
    combi(4,sol,0,2,0);

}

