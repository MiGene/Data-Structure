#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  //ดึงอันหลักมาเก็บไว้้ก่อน แล้วค่อยยัดอันใหม่เข้า แล้วค่อยเอาอันเก่ากลับมา
    if (k>mSize) k=mSize;
    if (m>s2.size()) m=s2.size();

  CP::stack<T> keepStack1;
  CP::stack<T> keepStack2;
  for (int i=0; i<k; i++) {
    keepStack1.push(this->top());
    this->pop();
  }
  for (int i=0; i<m; i++) {
    keepStack2.push(s2.top());
    s2.pop();
  }

  while (!keepStack2.empty()){
    this->push(keepStack2.top());
    keepStack2.pop();
  }


  while (!keepStack1.empty()){
    this->push(keepStack1.top());
    keepStack1.pop();
  }

}

#endif
