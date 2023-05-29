#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    CP::vector<T> v(mSize);
    for (int i=0; i<mSize; i++) {
        v[i] = mData[i];
    }

    using std::swap;
    swap(this->mData, v.mData);
    swap(this->mSize, v.mSize);
    swap(this->mCap, v.mCap);

    //delete [] v.mData;
}

#endif
