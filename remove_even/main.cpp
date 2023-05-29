#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
 //write your code only in this function
 //มองแค่ตำแหน่งที่ต้องการ แล้วนลูปลบตำแหน่งเลขคู่ออกไป ลบโดยใช้v.erase(pos)
 //(1,5) (2,5)
 //ถ้าเริ่มจากตำแหน่งคี่ก้จะเริ่มลบที่ตำแหน่งต่อไป และบวกเพิ่มทีละ 2
 //ถ้าเริ่มจากตำแหน่งคู่ก้จะเริ่มลบที่ตัวนั้นเลย ละบวกเพิ่มไปอีก 2

 //หรือว่ามันจะเป็นแบบ python ที่พอลบเลยแล้วมันก้ร่นๆเข้ามา

 //หรือควรจะตัดต่อค่านั้นๆมา
 //เอาค่าที่อยุ่นอกเหนือที่สนใจไปใส่ใน vector ใหม่ก่อน
 //แล้วค่อยมองตัวนั้นๆที่สนใจ เอามา insert ในตำแหน่งที่เว้นไว้
 //{0,1,2,3,4,5,6,7} want(1,5) --> {0,6,7}
 //inset ใส่ตำแหน่งที่ a ด้วยการวนลูปตำแหน่งที่want {1,2,3,4,5}
 //เอา 1,3,5 ยัดเข้า insert ตำแหน่งที่ 1,2,3

 //ตัดแปะตัวไม่เกี่ยวข้องก่อน
 //?ต้องแยกเคสเลขคู่เลขคี่มั้ย
 //ต้องคิดว่าถ้าข้อมูลที่เกินตำแหน่ง want มันไม่มีจะเข้าได้มั้ยอะไรยังไงปะ
    vector<int> u;
    //v = {0,1,2,3,4,5,6,7};
    //int a,b;
    //a = 1;
    //b=4;
    for(int i = 0; i<a;i++){
        u.push_back(v[i]);
        }
    //if (a==0 and b==0)u.pop_back();
    //if (a-b == 0) b-=1;
    for (int i=b+1; i<v.size(); i++){
        u.push_back(v[i]);
        }
    /*for (int i=a; i<b; i++){
        if (i%2==0){
            u.push_back(v[i]);
        }
    }*/
    int add=a;
    for (int i=a; i<b+1; i++){
        if (i%2!=0){
            u.insert(u.begin()+add,v[i]);
            //{0,1,2,3,4} --> {0,4}
            add += 1;
        }
    }
    v = u;


 //ถ้าวนลูปไม่ว่าตำแหน่งไหนก้ตาม ถ้าตำแหน่งนั้นๆเป็นคู่ก้ลบออก

 /* ลบแบบนี้อาจจะมี index ที่ผิดๆได้
 if (a%2 != 0){
    for (int i = a+1;i < b+1;i++){
        v.erase(v.begin()+i);
    }
 }
 else {
 for (int i=a ; i<b+1 ;i++){
    v.erase(v.begin()+i);
    }
    //cout << v[1];
 } */

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
 remove_even(v,a,b);
 //display content of the vector
 for (auto &x : v) {
    cout << x << " ";
 }
 cout << endl;
}
