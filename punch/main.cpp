#include <iostream>
#include <vector>
using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
 //write some code here
 //?ถ้าเราลบเกินที่มีใน vector ได้มั้ย?
 //ลบจากหลังไปหน้า index จะได้ไม่เลื่อน
 //ถ้าลบเกิรก้ลบแค่ที่มีอยุ่
 int loop= (k*2)+1;
 //int start;
 //int size_v= v.size();
 //checkก่อนว่า diff เกิน k มั้ย
 //เกินหน้าหลัง

 int diff_back = v.end()-it-1;
 //cout<<v.end()-v.begin()<<endl;
 int diff_front =it - v.begin();
 //cout<<diff_front<<endl;

 if ((diff_back<k)and (diff_front <k)){
    loop = v.size();
    k = (v.size())-1/2;
 }

 //เกินหลัง
 else if (diff_back < k){
    loop = 1+k+diff_back;
    //cout<<diff_back<<endl;
    k = diff_back;
 }

 //เกินหน้า
 else if (diff_front < k){
    loop = 1+k+diff_front;

    //k = diff_front;
    //cout<<loop<< " "<< k <<endl;

 }


 for (int i=0; i<loop; i++){
    v.erase (it+k-i);
 }
  return v;
 //int loop= k*2+1;
 //int start=
 //for (int i=0; i<loop; i++){
 //   v.erase()
 //}
 //for (int i=0; i<v.size(); i++){
 //   cout << v[i] << endl;
 }

 //don’t forget to return something

int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}
