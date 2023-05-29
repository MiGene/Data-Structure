#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  CP::vector<T>::iterator it;
  CP::vector<T>::iterator itm;

  //vector(const vector<T>& a)

  CP::vector<T> v(2*mSize);
  it = v.begin();
  itm = this->begin();
  for (int i=0; i<mSize; i++) {
    *it = *itm;
    it++;
    itm++;
  }
  itm = this->end()-1;
  for (int i=0; i<mSize; i++) {
    *it = *itm;
    it++;
    itm--;
  }
    //std::cout << "size: " << v.size() << "\n";
  //for (auto &x: v) std::cout << x << " ";
    using std::swap;
    swap(this->mSize,v.mSize);
    swap(this->mCap,v.mCap);
    swap(this->mData,v.mData);
}

#endif
