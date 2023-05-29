#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int n;
    long long int k;
    long long int summa=1;
    long long int i=1;
    cin >> n >> k ;
    if (n==0 || n==1){
        cout << "0";
    }
    else if (k==1){
        cout << n-1 << endl;
    }
    else {
        for (long long int i=0; i<10000000000; i++){
            summa += pow(k,i);
            if (summa>=n) {
                cout << i << endl;
                break;
            }
        }

    }
}
