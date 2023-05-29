#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    int pushed = mData[(mFront+pos)%mCap];
    size_t ind = pos;
    for (int i=0; i<pos; i++) {
        mData[(ind+mFront+mCap)%mCap] = mData[(mFront+ind-1+mCap)%mCap];
        ind--;
    }
    mData[mFront] = pushed;
}

#endif
