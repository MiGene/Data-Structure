#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b;
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        cin >> a >> b;
        if (a==b) cout << "a and b are the same node" << endl;
        else {
            bool anc = false;
            bool ancA = false; //bool ancB = false;
            int moreN = max(a,b);
            int lessN = min(a,b);
            if (lessN == a) ancA = true;
            //cout << lessN << endl;
            while (moreN>0) {
                moreN = (moreN-1)/2;
                //cout << "more " << moreN << endl;
                if (moreN==lessN) {anc = true; break;}
            }
        //cout << "anc " << anc << endl;
        if (anc==true && ancA==true) cout << "a is an ancestor of b"<<endl;
        else if (anc==true && ancA == false) cout << "b is an ancestor of a"<<endl;
        else cout << "a and b are not related"<<endl;
        }
    }
}
