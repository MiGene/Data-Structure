#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int relation(long long S, long long a, long long b) {
    long long minn = min(a,b);
    long long maxx = max(a,b);

    if (minn == maxx) return 4;

    long long parent = (maxx-1)/S;
    if (parent == minn) return 1;

    parent = maxx;
    if (minn == 0) return 2;
    while(parent>0) {
        if (parent == minn) return 2;
        parent = (parent-1)/S;
    }

    long long summ=0;
    bool sameL = false;
    int i=0;
    while (summ<=maxx) {
        //std::cout << "s :"<<summ << "m : " << maxx;
        summ += pow(S,i);
        if (summ<=maxx && maxx<summ+pow(S,i+1) && summ<=minn && minn<summ+pow(S,i+1)) sameL =true;
        i++;
    }

    if (sameL) return 4;
    else return 3;

}
int main() {
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n;
 long long S,a,b;
 cin >> n;
 while (n--) {
    cin >> S >> a >> b;


    cout << relation(S,a,b) << " ";
 }
 cout << endl;
}
