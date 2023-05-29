#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
 //ตัดช่วงที่ไม่สนใจมาต่อกันก่อน
 //เอาช่วงที่สนใจมาวนย้อนหลังแล้วยัดลงเวกเตอร
 vector<int> u;
 //first cut
 for (int i=0; i<a;i++){
    u.push_back(v[i]);
 }
 for (int i=b; i>=a; i--){
    u.push_back(v[i]);
 }
 for (int i=b+1;i<v.size(); i++){
    u.push_back(v[i]);
 }
 v = u;
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
