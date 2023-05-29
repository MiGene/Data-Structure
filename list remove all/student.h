#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  size_t del = 0;
  CP::list<T>::iterator it = begin();
  for (size_t i=0; i<mSize; i++) {
    if (*it == value) {
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        delete it.ptr;
        del += 1;
    }
    ++it;
  }
  mSize -= del;
}

#endif
