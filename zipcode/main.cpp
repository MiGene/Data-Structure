#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Letter{
public:
 string name; string address; string province; string district; int zip;
 bool operator < (const Letter& other) const {
 //**Begin Insert**
 if (zip == other.zip) {
    if (address == other.address) {
            if (district == other.district) {

                if (province == other.province) {
                    return name < other.name;
                }
                else return province < other.province;
            }
            else return district < other.district;

    }
    else return address < other.address;
 }
 else return zip < other.zip;
 //**End Insert**
 }
};
class ZipInfo{
public:
 int zip;
 string province;
 string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
 //**Begin Insert**
 for (int i=0; i<letters.size();i++) {
    for (int j=0; j<zipinfo.size();j++) {
        if (letters[i].province == zipinfo[j].province && letters[i].district == zipinfo[j].district) {
            letters[i].zip = zipinfo[j].zip;
            break;
        }
    }
 }
 sort(letters.begin(), letters.end());
 /*
 for(int i=0; i<letters.size(); i++) {
    cout << letters[i].zip << " " << letters[i].address << " " << letters[i].name << endl;
 }*/
 //**End Insert**
}
int main() {
 int nzip;
 cin>>nzip;
 vector<ZipInfo> zipinfo;
 for (int i = 0; i < nzip; i++) {
 ZipInfo z;
 cin>>z.zip>>z.district>>z.province;
 zipinfo.push_back(z);
 }
 int n;
 cin>>n;
 vector<Letter> letters;
 for (int i = 0; i < n; i++) {
 Letter l;
 cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
 letters.push_back(l);
 }
 correctZipAndSortLetters(zipinfo, letters);
 for (auto& l:letters) {
 cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
 }
}
