#include <iostream>

using namespace std;

int main()
{

    int H,M;
    cin >> H >> M;
    int snooze;
    cin >> snooze;
    //cout << snooze;
    int mins;
    mins = H*60 + M;
    //cout << mins;
    int lastmins;
    lastmins = mins+snooze;
    //cout << lastmins;
    int rH,rM;
    rH = lastmins/60;
    int leftmins;
    //cout << rH*60;
    leftmins = lastmins - rH*60;
    rH = rH%24;
    //cout << lastmins;
    rM = leftmins;

    //cout << rM;

    //คิดกรณีที่เกินเที่ยงคืนด้วย
    //ตอนนี้ขอคิดแบบบstr มาบวกกันก่อน
    //cout << rH << rM;
    string hour, minute;
    //cout << hour;

    if (rH < 10 and rM < 10){
        cout << "0" << rH;
        cout << " 0"<< rM;
    }
    else if (rH < 10 ){
        cout << "0" << rH;
        cout << " "<< rM;
    }

    else {
        cout << rH << " " << rM;
    }

    return 0;
}
