#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"
#include<math.h>

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  size_t start = 0;
  for (int i=0; i<k; i++) start += pow(2,i);
  //start += 1;
  //std::cout << start << " //";
  int round = pow(2,k);
  for (int i=0; i<round; i++) {
    if (start<mSize) {
    r.push_back(mData[start]);
    start += 1;
    }
  }

  sort(r.rbegin(), r.rend(),mLess);
  return r;
}

#endif

