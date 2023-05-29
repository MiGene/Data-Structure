#include <iostream>
#include<vector>
using namespace std;

int main()
{
    //ไล่เก็บทีละตัวลง matrix array
    //สร้าง array want
    //หา max ของ array want
    int height, width,round;
        cin >> height;
        cin >> width;
        cin >> round;
    //cout << height << width;
    int member = height*width;
    int matrix[height][width];   //สร้างช่องว่างแล้วยัดเลขเข้า
    //for (int i=0; i<member; i++)


        for (int h=0; h<height; h++)
            for(int w=0; w<width; w++) {
                int num;
                cin >> num;
                matrix[h][w] = num;
            }

    //หา max แต่ละ want

    for (int r=0; r<round; r++)  {
        int r1,c1,r2,c2;
        cin >> r1;
        cin >> c1;
        cin >> r2;
        cin >> c2;


        if ( r1>r2 or c1>c2) {//and (r1!=0 and r2!=0 and c1!=0 and c2!=0)){
                cout << "INVALID" << endl;
        }
        else if ( (r1>height or c1>width) and (r2>height or c2>width)) { //or (r1==0 or r2==0 or c1==0 or c2==0)) {
            cout << "OUTSIDE" << endl;
        }
        else {
            if (r2>height) {
            r2 = height;
            }
            if (c2>width) {
                c2 = width;
            }
            int maxxi;
            maxxi = matrix[r1-1][c1-1];
            for (int h= r1-1; h<r2; h++)
                for (int w=c1-1; w<c2; w++) {
                    if (maxxi< matrix[h][w]) {
                        maxxi = matrix[h][w];
                    }
                }
            cout << maxxi<< endl;
        }

    }



}


