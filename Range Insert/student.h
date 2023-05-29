#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  CP::vector<T> v;
  //int pos = position - this->begin();
  CP::vector<T>::iterator itThis;
  itThis = this->begin();
  while (itThis != position) {
    v.push_back(*itThis);
    itThis++;
    //std::cout << "in1" << std::endl;
  }
  CP::vector<T>::iterator itInsert;
  if (itThis == position) {
        itInsert = first;
    while (itInsert != last) {
        v.push_back(*itInsert);
        itInsert++;
        //std::cout << last-first << std::endl;
    }
  }
  CP::vector<T>::iterator itLast;
  itLast = itThis;
  while (itLast != this->end()) {
    v.push_back(*itLast);
    itLast++;
    //std::cout << "in3" << std::endl;
  }

  using std::swap;
  swap(this->mSize, v.mSize);
  swap(this->mCap, v.mCap);
  swap(this->mData, v.mData);

}

#endif
