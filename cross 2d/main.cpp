#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) {
 //your code here
 //ลบ row ก่อน column
    //if (!(r2<r1 || c2<c1 || m.empty())) {
        vector<vector<int>> v;
        int r=0;
        //cout << "in ";
        //r (c)
        // ถ้าเป็น r/c ตัวที่อยุ่ในช่วงนั้นๆจะไม่ add เข้า
        while (r!=m.size()) {
            //cout << "in w ";
            vector<int> sub;
            if ((r<r1 || r>r2) && r2>=r1) {
                //cout << "in if";
                int c=0;
                while (c!=m[0].size()) {
                    if ((c<c1 || c>c2) && c2>=c1) {
                        sub.push_back(m[r][c]);
                    }
                    else if (c2<c1) {
                        sub.push_back(m[r][c]);
                    }
                    c++;
                }
                v.push_back(sub); //จะมีเคสที่ไม่เอาทุก c มั้ย
                //cout << "push "<< endl;
            }
            r++;
        }
        m = v;
    //}
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 vector<vector<int>> m;
 int r,c,r1,r2,c1,c2;
 cin>> r >> c;
 cin >> r1 >> r2 >> c1 >> c2;
 m.resize(r);
 for (int i =0;i < r;i++) {
 m[i].resize(c);
 for (int j = 0;j < c;j++) {
 cin >> m[i][j];
 }
 }
 cross_2d(m,r1,r2,c1,c2);
 for (int i =0;i < m.size();i++) {
 for (int j = 0;j < m[i].size();j++) {
 cout << m[i][j] << " ";
 }
 cout << "\n";
 }
 return 0;
}
