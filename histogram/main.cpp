#include <iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    string word;
    cin >> n;
    map<string,int> dic;
    map<string,int>::iterator it;
    for (int i=0; i<n; i++) {
            cin >> word;
            if ((it = dic.find(word))!= dic.end()){
                dic[word] += 1;
             }
            else {
                dic[word] = 1;
            }
    }
    for (auto &x : dic) {
        if (x.second > 1) {
            cout << x.first << " " << x.second << "\n";
        }
    }
}
