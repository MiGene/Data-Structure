#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int getDigit(int num, int s){
    int modder = 10;
    for (int i = 0; i < s; i++) modder *= 10;
    num %= modder;
    num /= modder/10;
    return num;
}

void radixSort(vector<int> &v, int d){
    queue<int> q[10];
    for (int i = 0; i < d; i++){
        int k = 0;
        for (int j = 0; j < v.size(); j++){
            q[getDigit(v[j],i)].push(v[j]);
        }
        for (int j = 0; j < 10; j++){
            while(q[j].size()>0){
                *(v.begin()+k)=q[j].front();
                q[j].pop();
                k++;
            }
        }
    }
}
int main()
{
    int n,w;
    cin >> n >> w;
    vector<int> vec;
    for (int i = 0; i< n; i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    for (int i = 0; i < n-w; i++){
        vector<int> v (vec.begin()+i,vec.begin()+i+w+1);
        radixSort(v,7);
        cout<<*(v.end()-(1+w/2))<<" ";
    }
    return 0;
}
