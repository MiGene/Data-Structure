#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        //เอาของใน stack ออกให้หมด เกบไว้ทั้ง 2 แล้วค่อยยัด 2 ลง 1
        CP::stack<T> s1;
        CP::stack<T> s2;
        while (!this->empty()) {
            s1.push(this->top());
            this->pop();
        }
        while (!s.empty()) {
            s2.push(s.top());
            s.pop();
        }
        while (!s2.empty()) {
            this->push(s2.top());
            s2.pop();
        }
        while (!s1.empty()) {
            this->push(s1.top());
            s1.pop();
        }
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        CP::stack<T> s1;
        CP::stack<T> s2;
        while (!q.empty()) {
            s2.push(q.front());
            q.pop();
        }
        while (!this->empty()) {
            s1.push(this->top());
            this->pop();
        }
        while (!s2.empty()) {
            this->push(s2.top());
            s2.pop();
        }
        while (!s1.empty()) {
            this->push(s1.top());
            s1.pop();
        }
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()) {
            this->push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()) {
            this->push(q.front());
            q.pop();
        }

    }
}
