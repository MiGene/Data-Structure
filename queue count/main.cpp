#include <iostream>
#include <vector>
#include <queue>
using namespace std;
size_t qcount(queue<int> q, int k) {
 //write your code here
 int num = 0;
 int sth;
 int si= q.size();
 if (!q.empty()) {
    for (int i=0; i<si;i++)
 {
    sth = q.front();
    q.pop();
    if (sth == k) num += 1;
 } }
 return num;
}
int main() {
 // for faster cin, cout
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n,k;
 cin >> n >> k;
 queue<int> q;
 for (int i = 0;i < n;i++) {
 int a;
 cin >> a;
 q.push(a);
 }
 cout << qcount(q,k) << endl;
}
