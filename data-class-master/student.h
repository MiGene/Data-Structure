#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  //this->erase(this->begin());
  //std::cout << pos[0];
    //for (int i=pos.size()-1; i>=0; i--) {
    //    this->erase(this->begin()+pos[i]);
    //}
    CP::vector<T> v;
    auto it = pos.begin();
    for (int i=0; i< this->size(); i++) {
        if (it != pos.end()){
            if (*it != i) {
                v.push_back(mData[i]);
                //std::cout << "push " << mData[i] << "\n";
            }
            else it++; //std::cout << "iout : " << i << "\n";
        }
        else {
            v.push_back(mData[i]);
        }
        //std::cout << "iout : " << i << "\n";
    }
    //std::cout << "size: " << v.size() << "\n";
    /*for (auto &x: v) std::cout << x << " ";
    std::cout << "\n";*/

    using std::swap;
    swap(this->mSize, v.mSize);
    swap(this->mCap, v.mCap);
    swap(this->mData, v.mData);
}

#endif
