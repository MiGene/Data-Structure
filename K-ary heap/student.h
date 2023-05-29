#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>



template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while (idx > 0){ //want ปัดลง
        size_t p = (idx-1)/4;
        if (mLess(tmp,mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c=0;
    while ((c=4*idx+1)<mSize){
        size_t maxx =c;
        if (c+1<mSize && mLess(mData[maxx],mData[c+1])) maxx = c+1;
        if (c+2<mSize && mLess(mData[maxx],mData[c+2])) maxx = c+2;
        if (c+3<mSize && mLess(mData[maxx],mData[c+3])) maxx = c+3;
        c = maxx;
        if (mLess(mData[c],tmp)) break;
        mData[idx] = mData[c];
        idx = c;

    }
    mData[idx] = tmp;
}

#endif

