// more pointers
#include <iostream>
#include<vector>
using namespace std;

int main ()
{
    //vector<int> v = {0,1,2,3};
    vector<int> &v;
    vector<int> * p;
    p = &v;
    cout << p;
    /*
  int numbers[5];
  int a=5;
  int * p;
  p = &numbers[0];
  cout << "p: " << p << endl;
  cout << "&number: " << &numbers << endl;
  for (int i=0; i<5;i++){
    cout << numbers[i] << endl;
  }
  /*
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;
  */
}
