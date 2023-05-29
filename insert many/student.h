#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
    sort(data.begin(), data.end());

    CP::vector<T> v;
    auto itThis = this->begin();
    auto itData = data.begin();

    int i=0;
    while (v.size() < mSize+data.size()) {
        if (i==itData->first) {
            //std::cout << "in ";
            v.push_back(itData->second);
            //std::cout << v[-1] << " ";
            itData++;
            i -= 1;
        }
        else {
            v.push_back(*itThis);
            //std::cout << *itThis << " ";
            itThis++;
        }
        i++;
    }

    using std::swap;
    swap(this->mSize, v.mSize);
    swap(this->mCap, v.mCap);
    swap(this->mData, v.mData);

}

#endif
