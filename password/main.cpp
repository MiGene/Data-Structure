#include <iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int N,M,L,num;
    string word;
    vector<int> v;
    set<string> s;
    //map<string> m;
    //char ch = "a";
    //cout << ch;

    cin >> N >> M >> L;
    set<string>::iterator it;
    for (int i=0;i<L;i++) {
        cin >> num;
        v.push_back(num);
    }
    for (int i=0;i<N;i++){
        cin >> word;
        s.insert(word);
    }
    for (int i=0;i<M;i++){
        cin >> word;
        string newWord;
        for (int i =0;i<L;i++) {
            char ch = word.at(i);
            //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
            int realPlus = v[i]%26;
            if (!((97<= ch+realPlus) && (ch+realPlus <=122))) {
                ch += realPlus-26;
            }
            else ch += realPlus;
            newWord += ch;
        }
        //cout << newWord << " ";
        if ((it=s.find(newWord)) != s.end()) {
            cout << "Match" << "\n";
        }
        else {
            cout << "Unknown" << "\n";
        }
    }

}
