#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
/*
 map<string,int> m = {{"a",1},{"b",2}};
 //m["a"] = 2;
 //m["b"] = 1'
 m.erase("a");
 for (auto &x : m) {
    cout << x.first << x.second << endl;
 }
 */

 vector<int> v;
 for (int i=0;i<10;i++){
    v[i] = i;
    cout << "hi" ;
 }
 cout << v.size() << endl;
 /*
 v.erase(v.begin()+3,v.begin()+4097);
 cout << v.size();
 for (int i=0; i<v.size(); i++) {
    cout << v[i] << " ";
 }
 */
}
