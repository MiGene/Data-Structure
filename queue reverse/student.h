#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  size_t ind1 = a;
  size_t ind2 = b;
  while (ind1<ind2) {
    std::swap(mData[(mFront+ind1)%mCap], mData[(mFront+ind2)%mCap]);
    ind1++; ind2--;
  }
}

#endif
