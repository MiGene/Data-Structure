#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector<int> pb(vector<int> &v, int loop) {
//    v.push_back()
//}

int main()
{

    vector<int> v;
    int times;
    cin >> times ;//>> endl;
    for (int i=0; i<times; i++){
        string command;
        cin >> command; //>>endl;

        if (command == "pb"){
                int x ;
            cin >> x ; //>> endl;
            v.push_back(x);
        }
        else if (command == "sa") {
            sort(v.begin(),v.end());
        }
        else if (command == "sd"){
            sort(v.begin(),v.end());
            vector<int> u;
            for (int i=v.size()-1; i>=0; i--){
                u.push_back(v[i]);
            }
            v = u;
        }
        else if (command == "r") {

            vector<int> u;
            for (int i=v.size()-1; i>=0; i--){
                u.push_back(v[i]);
            }
            v = u;
        }
        else if (command == "d"){
            int i;
            cin >> i ;// endl;
            //4vector<int> u;
            v.erase(v.begin()+i);
        }
    }
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " " ;
    }
    /*
    vector<int> v = {0,1,2,3};

    vector<int> u;
            for (int i=v.size()-1; i>=0; i--){
                u.push_back(v[i]);
            }
            v = u;

    for (int i=0; i<v.size();i++){
        cout << v[i] << " ";
    */
}


