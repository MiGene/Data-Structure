#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include<math.h>
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for (int i=0; i<mSize; i++) {
    //std::cout << mData[i] << " ";
    if (mData[i] == k) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  //ไล่หลังไปหน้า
  //std::cout << mSize;

  for (int i=mSize-1; i>=0; i--) {
    //std::cout << i << ") " << mData[i] << " ";
    if (mData[i]==k && i!=0) return (int)log2(i+1);
    else if (mData[i]==k && i==0) return 0;
  }
  return -1;
}

#endif

