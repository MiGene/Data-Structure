#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include<stack>
#include<map>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  stack<int> nums;
  int n1,n2;
  //stack<int> operat;
  //int result;
  //cout << v.size();
  for (int i=0; i<v.size(); i++) {
    if (v[i].first == 1) {
        nums.push(v[i].second);
        //cout << "inn" << endl;
    }
    else {
        //cout << "ino" << endl;
        n1 = nums.top();
        nums.pop();
        n2 = nums.top();
        nums.pop();
        if (v[i].second == 0){
            nums.push(n1+n2);
        }
        else if (v[i].second == 1){
            nums.push(n2-n1);
        }
        else if (v[i].second == 2){
            nums.push(n1*n2);
        }
        else if (v[i].second == 3){
            nums.push(n2/n1);
        }

    }

    /*
    else {
        int p = v[i].second;
        if (operat.empty()) {
            operat.push(v[i].second);
        }
        if (!operat.empty() && operat.top >= p){
            n1 = nums.top();
            nums.pop();
            n2 = nums.top();
            nums.pop();
            if (operat.top == 0) {
                nums.push(n1+n2);
            }
            else if (operat.top == 1){
                nums.push(n1-n2);
            }
            else if (operat.top == 2){
                nums.push(n1*n2);
            }
            else if (operat.top == 3){
                nums.push(n1/n2);
            }
        }
        else {
            n1 = nums.top();
            nums.pop();
            n2 = nums.top();
            nums.pop();
            if (p == 0) {
                nums.push(n1+n2);
            }
            else if (p == 1){
                nums.push(n1-n2);
            }
            else if (p == 2){
                nums.push(n1*n2);
            }
            else if (p == 3){
                nums.push(n1/n2);
            }
        }
    }
    */
  }
    int result;
    result = nums.top();
    return result;
  //DON"T FORGET TO RETURN THE RESULT
}

#endif
