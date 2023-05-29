#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  CP::vector<T> v;
  std::set<T> s;
  //std::set<T>::iterator it;
  for (int i=0; i<mSize; i++) {
    //std::cout << "in";
    //s.insert(mData[i]);
    if ((s.find(mData[i])) == s.end()) {
        //std::cout << "in";
        s.insert(mData[i]);
        v.push_back(mData[i]);
    }
  }
    //std::cout << v.mSize;
  using std::swap;
  swap(this->mSize, v.mSize);
  swap(this->mCap, v.mCap);
  swap(this->mData, v.mData);
}

#endif
