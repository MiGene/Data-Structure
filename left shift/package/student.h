#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  CP::list<T>::iterator itend = end(); itend--;
  CP::list<T>::iterator itbg = begin();
  CP::list<T>::iterator itbg1 = ++itbg; itbg--;
  mHeader->next = itbg1.ptr;
  mHeader->prev = itbg.ptr;
  itbg.ptr->prev = itend.ptr;
  itbg.ptr->next = mHeader;
  itend.ptr->next = itbg.ptr;
  itbg1.ptr->prev = mHeader;
}

#endif
