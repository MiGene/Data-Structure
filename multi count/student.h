#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> v;
    if (!k.empty()) {
    std::map<T,size_t> m;
    for (auto &x:k) {
        m[x] = 0;
    }

    for (size_t i=0; i<mSize; i++) {
        T num = mData[(mFront+i)%mCap];
        if (m.find(num) != m.end()) {
            m[num] += 1;
        }
    }

    for (auto &x:k) {
        //std::pair<T,size_t> p = {}
        v.push_back({x,m[x]});
    }

    }

    return v;

}

#endif
