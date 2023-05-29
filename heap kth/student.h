#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> v;
  size_t round = 7;
  if (mSize<round) round = mSize;
  for (size_t i=0; i<round; i++) {
    v.push_back(mData[i]);
  }
  sort(v.rbegin(), v.rend(), mLess);
  return v[k-1];
}

#endif
