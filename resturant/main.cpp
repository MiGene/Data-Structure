#include <iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    int time, queueLeft=m-n;
    vector<int> allTime;
    if (n>m) n=m;
    for (int i=0; i<n; i++) {
        cin >> time;
        allTime.push_back(time);
        cout << "0" << "\n";
    }
    int timeStamp =0;
    while (queueLeft>0) {
            timeStamp += 1;
                for (int j=0; j<n; j++) {
                    if (timeStamp % allTime[j] == 0) {
                        cout << timeStamp << "\n";
                        //cout << "in" << endl;
                        queueLeft -= 1;
                        if (queueLeft<=0) break;
                    }
                }
            }


}
