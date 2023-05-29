#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    /*
    vector<int> a = {3,2};  //#include<vector> ด้วย

    cout << "a is ";
    a.push_back(1);     //append
    a.insert(a.begin(),4);  //?insert ที่อื่นได้มั้ย

    sort(a.begin(), a.end()); //#include<algorithm> ด้วย
    for (size_t i=0; i<a.size(); i++){  //? size_t เสมอตอนไล่ array?
        cout << a[i] << " ";
    }
    */
    /*
    int mat[2][3];
    //for (int i=0; i<6; i++){
    for (int r=0; r<2;r++)
        for (int c=0; c<3; c++){
            int a;
            cin >> a;
            mat[r][c] = a;
        }

    for (int r=0; r<2;r++)
        for (int c=0 ;c<3; c++){
            cout << mat[r][c];
        }
        mat[2] = 0
        cout << mat[2];
    */
    int r1,r2,c1,c2;
    cin >> r1 >>r2>>c1>>c2;
    if (( r2-r1<0 or c2-c1<0)and (r1!=0 and r2!=0 and c1!=0 and c2!=0)){
                cout << "INVALID" << endl;
    }
}
