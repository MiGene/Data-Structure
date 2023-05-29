#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    //std::cout << mSize;
    if (mCap-mSize < other.mCap- other.mSize) return -1;
    else if (mCap-mSize == other.mCap- other.mSize) return 0;
    else return 1;
    //std::cout << mCap << " ";
    //eturn other.mCap;
}

#endif
