#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  //std::cout << mData[(mFront+pos)%mCap];
  int pushed = mData[(mFront+pos)%mCap];
  size_t ind = pos;
  for (size_t i=0; i<mSize-pos-1;i++) {
    //std::cout << "instead : " << mData[(ind+1)%mCap] << " ";
    mData[(mFront+ind+mCap)%mCap] = mData[(mFront+ind+1)%mCap];
    ind++;
  }
  mData[(mFront+mSize-1)%mCap] = pushed;
}

#endif
