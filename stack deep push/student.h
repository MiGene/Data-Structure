#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  //เอาออกมาเกบไว้ก่อน -> push value ->
  if (pos > mSize) pos = mSize;
  CP::stack<T> keepOutMem;
  for (int i=0; i<pos; i++) {
    keepOutMem.push(this->top());
    this->pop();
  }
  this->push(value);
  while (!keepOutMem.empty()) {
    this->push(keepOutMem.top());
    keepOutMem.pop();
  }
}

#endif
