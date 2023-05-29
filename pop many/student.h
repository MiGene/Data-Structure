#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if (mSize < K) {
    while(!(this->empty())) this->pop();
  }
  else {
    for (int i=0; i<K; i++) this->pop();

  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
    std::stack<T> s;
    int i=0;
    while (i<K && !this->empty()) {
            s.push(this->top());
            this->pop();
            i++;
    }
    std::stack<T> lastS;
    while (!s.empty()) {
        lastS.push(s.top());
        s.pop();
    }
    return lastS;
  //don't forget to return an std::stack
}

#endif
