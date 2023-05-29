#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (m<=0) return false;
  else if (&mData[0] > a || a>&mData[mSize-1]) return false;
  else if (&mData[0] > a+m-1 || a+m-1>&mData[mSize-1]) return false;
  else if (&mData[0] > b || b>&mData[mSize-1])  return false;
  else if (&mData[0] > b+m-1 || b+m-1>&mData[mSize-1])  return false;
  //else if (b<=a && a!=0 && b!=0) return false;
  else if (a<b && a+m-1 >= b) return false;
  else if (b<a && b+m-1 >= a) return false;
  else {
        /*
    CP::vector<T> keepIt;
    auto itA1 = a;
    auto itB1 = b;
    for (int i=0; i<m; i++) {
        keepIt.push_back(*itB1);
        *itB1 = *itA1;
        itA1++;
        itB1++;
    }
    auto itA2 = a;
    for (int i=0; i<m; i++) {
        *itA2 = keepIt[i];
        itA2++;
    }*/
    for (int i=0; i<m;i++) {
        std::swap(*a,*b);
        a++; b++;

    }
    return true;
  }

  return false;
}

#endif
