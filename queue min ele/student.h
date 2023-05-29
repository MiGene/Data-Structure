#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
  //your code here
  std::vector<T> v;
  for (auto &x : pos) {
    if (x<mSize) {
        v.push_back(mData[x]);
    }
  }

  T minn=v[0];
  for (auto &x : v) {
    if (comp(x,minn)) minn=x;
  }
  return minn;
}

#endif
