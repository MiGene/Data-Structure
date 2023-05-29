#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<set>
template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
    std::set<CP::vector<T>::iterator> s;
    if (mSize == 0) return false;

    else {
        auto it2 = &mData[0];
        while (it2<&mData[0]+mSize) {
            s.insert(it2);
            it2++;
        }
        //std::set<CP::vector<T>::iterator>::iterator it2;
        if (s.find(it) !=s.end()) return true;
        return false;
    }
}

#endif
