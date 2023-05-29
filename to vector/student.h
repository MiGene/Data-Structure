#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  int i=0;
  while (!empty() && i<k) {
    res.push_back(mData[(mFront+i)%mCap]);
    i++;
    //std::cout << "2 ";
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mData = new T[to-from];
  mSize = to-from;
  mCap = mSize;
  mFront = 0;

  auto it = from;
  for (size_t i=0; i<to-from; i++) {
    mData[(mFront+i)%mCap] = *it;
    it++;
    //std::cout << "1 ";
  }

}

#endif
