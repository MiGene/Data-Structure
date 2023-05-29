#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
  //write your code only in this function
    if (other.size() == this->size()) {
        for (int i=0; i<this->size();i++) {
            if (mData[i]!=other[i]) return false;
        }
        return true;
    }
    return false;
}

#endif
