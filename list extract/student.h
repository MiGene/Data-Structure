#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  CP::list<T>::iterator it = a;
  while (it != b) {
    if (*it == value) {
        auto itnext = --it; ++it;
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;

        output.mHeader->next->prev = it.ptr;
        it.ptr->next = output.mHeader->next;
        output.mHeader->next = it.ptr;
        it.ptr->prev = output.mHeader;
        output.mSize += 1;
        mSize -= 1;

        it = itnext;
    }
    ++it;
  }
}

#endif
