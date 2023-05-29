#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> allVec;
  int round = mSize/k;
  int firstNVec = mSize%k;
  int i=1;
  int ind=mSize-1;
  if (firstNVec == 0) {
    while (ind>=0) {
        std::vector<T>  v;
        for (int j=0; j<round; j++) {
            v.push_back(mData[ind]);
            ind--;
        }
        allVec.push_back(v);
    }
  }

  else {
    while (ind>=0) {
        std::vector<T>  v;
        if (i<=firstNVec) {
            for (int j=0; j<round+1; j++) {
                v.push_back(mData[ind]);
                ind--;
            }
        i++;
        }
        else {
            for (int j=0; j<round; j++) {
                v.push_back(mData[ind]);
                ind--;
            }
        }
         allVec.push_back(v);
    }
  }

  return allVec;

}
#endif
