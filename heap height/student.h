#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<math.h>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int n = size();
  //int height=0;
  int summa=0;
  if (n==0 ) return -1;
  else if (n==1) return 0;
  else {
      for (int i=0; i<100000000; i++) {
        summa += pow(2,i);
        if (summa>=n) return i;
      }
  }

}

#endif

