#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void vector_swap(vector<int>& v1, vector<int>& v2,
	int start1, int end1,
	int start2, int end2) {
	//ดึงตัวที่ต้องการจาก v1 มาแล้วยัดเข้า t1 ลบตัวที่ดึงมาออก
	//ดึงตัวจาก v2 ที่จะถูกแทนที่ออกมาไว้ที่ t2 ลบตัวที่ดึงมาออก
	// เอา t1 insert เข้า v2
	// เอา t2 insert เข้า v1
	vector<int> t1, t2;

	for (int i = start1; i < end1; i++) {
		t1.push_back(v1[i]);
	}

	for (int i = start2; i < end2; i++) {
		t2.push_back(v2[i]);
	}
    //int k = 0;
    v1.erase(v1.begin()+start1, v1.begin()+end1);
    v2.erase(v2.begin()+start2, v2.begin()+end2);
    v2.insert(v2.begin()+start2,t1.begin(),t1.end());
    v1.insert(v1.begin()+start1,t2.begin(),t2.end());

    /*
	for (int i = 0; i < end1 - start1 ; i--) {
		t1.erase(v1.begin() + end1-1 -k);
		k--;
	}

	for (int i = end2 - 1; i >= start2; i--) {
		t1.erase(v2.begin() + i);
	}
    /*
	int j = 0;
	for (int i = 0; i < t1.size(); i++) {
		auto it1 = v2.begin() + start2 + j;
		v2.insert(it1, t1[i]);
		j++;
	}
	for (int i = 0; i < t2.size(); i++) {
		auto it2 = v2.begin() + start1 + j;
		v2.insert(it2, t2[i]);
		j++;
	}
	*/

    /*
    cout << "size" << v1.size() <<endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << endl;
	}
    */


}
int main() {
	//read input
	int n, c;
	vector<int>v1, v2;
	cin >> n; //number of v1
	for (int i = 0; i < n; i++) {
		cin >> c;
		v1.push_back(c);
	}
	cin >> n; //number of v2
	for (int i = 0; i < n; i++) {
		cin >> c;
		v2.push_back(c);
	}
	int s1, e1, s2, e2; //position
	cin >> s1 >> e1 >> s2 >> e2;
	//call the function
	vector_swap(v1, v2, s1, e1, s2, e2);
	//display content of the stack
	cout << "v1 has " << v1.size() << endl;
	for (auto& x : v1) { cout << x << " "; }
	cout << endl;
	//display content of the stack
	cout << "v2 has " << v2.size() << endl;
	for (auto& x : v2) { cout << x << " "; }
	cout << endl;
}
