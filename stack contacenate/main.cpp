#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2) {
 //write your code only in this function
 //ดึง s1 มาใส่ vec แล้วก้เอา s2 มาใส่vec แล้วไล่เอาจากหลังไปหน้าของ vec ยัดเข้าไปใน s1
 vector<int> v;
 int n;
 int times1 = s1.size(), times2=s2.size();

 for (int i=0; i<times1;i++) {
    n = s1.top();
    s1.pop();
    v.push_back(n);
    //cout << "in1 ";
 }
 for (int i=0; i<times2;i++) {
    n = s2.top();
    s2.pop();
    v.push_back(n);
    //cout << "in2 ";
 }
 //for (int i=0; i<v.size();i++) {
   // cout << v[i] << " ";
 //}
 for (int i=v.size()-1; i>=0 ;i--) {
    s1.push(v[i]);
 }
}
int main() {
 //read input
 int n,m;
 int c;
 cin >> n >> m;
 stack<int> s1,s2;
 for (int i = 0;i < n;i++) {
 cin >> c;
 s1.push(c);
 }
 for (int i = 0;i < m;i++) {
 cin >> c;
 s2.push(c);
 }
 //call the function
 stack_concat(s1,s2);
 //display content of the stack
 cout << "S1 has " << s1.size() << endl;
 while (!s1.empty()) {
 cout << s1.top() << " ";
 s1.pop();
 }
 cout << endl;
 //display content of the stack
 cout << "S2 has " << s2.size() << endl;
 while (!s2.empty()) {
 cout << s2.top() << " ";
 s2.pop();
 }
 cout << endl;
}
