#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {0,1,2,3,4,5};
    auto it1 = v.begin();
    auto it2 =v.begin()+3;
    cout << *(find(it1,it2,2));
    //cout << *(find(v.begin(), v.begin()+3, 5));

    /*
    if (find(v.begin(), v.begin()+3, 2) != v.begin()+3){
        cout << "found";
    }
    else {
        cout << "Not";
    }
    */


    /*sort
    vector<int> v = {5,4,3,2,1};
    sort(v.begin(),v.end());
    for (int i =0; i<v.size(); i++){
        cout << v[i];
    }
    */


}
