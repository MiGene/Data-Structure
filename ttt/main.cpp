#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
//#include<pair>
using namespace std;

class Student {
public :
    Student(string name, int grade) {
    this->name = name;
    this->grade = grade;
    }
    string name;
    int grade;
};

int main()
{
    auto compareByName = [](const Student& lhs, const Student& rhs) {
    return lhs.name > rhs.name;
    };
    auto compareByGrade = [](const Student& lhs, const Student& rhs){
    return lhs.grade > rhs.grade;
    };

    Student a("Seethong",4);
    Student b("Mini", 3);
    Student c("Felix",5);
    priority_queue<Student, vector<Student>, decltype(compareByGrade)> pq(compareByGrade);
    pq.push(b);
    pq.push(c);
    pq.push(a);
    cout << pq.top().name;
    //cout << compareByName(a,b);

}




