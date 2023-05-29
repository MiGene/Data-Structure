void replace(const T& x, list<T>& y) {
  //write your code here
    CP::list<T>::iterator it = begin();
    while (it!=end()) {
        //if (it != begin())++it;
        auto itnext = ++it; --it;
    //std::cout << *it;
        if (*it == x) {
            auto ity = y.begin();
           for (size_t i=0; i<y.mSize; i++) {
                insert(it, *ity); ++ity;
           }
        erase(it);
        }
        it = itnext;
    }
}
