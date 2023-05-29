#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if (mSize == 0 && other.size() >=1) return true;
  else if (mSize >= 1 && other.size() >=1 && mData[0] < other[0]) return true;
  else if (mSize >= 1 && other.size()>=1) {
        int i=0;
    while (i < mSize && i < other.size()){
        if (mData[i] < other[i]) return true;
        else if (mData[i] > other[i]) return false;
        i++;
    }
    if (mSize > other.size()) return false;
    else if (other.size() > mSize) return true;
  }
  return false;

}

#endif
