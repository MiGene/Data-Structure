#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  if (k!=0){
    CP::vector<T> v;
    auto it = first;
    //auto itOld = v.begin() + ((first-this->begin()+k)%(last-first));
    //std::cout << itOld - v.begin() << " "
    auto itOld = first+k;
    if (first+k >= last) {
        auto itOld = v.begin() + ((first-this->begin()+k)%(last-first));
    }
    else auto itOld = first+k;
    int i=0;
    while (itOld<last) {
        v.push_back(*it);
        *it = *itOld;
        it++;
        itOld++;
        i++;
    }
    auto itNew = first+v.size();
    for (int i=0; i<v.size();i++) {
        *itNew = v[i];
        itNew++;
    }
}
}

#endif
