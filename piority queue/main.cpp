#include <iostream>
#include<queue>
#include<string>

using namespace std;


class Student {
public:
    void setName(string name) {
    this->name = name;
    }
    void setId(int id) {
    //this->id = id;
    if (id<0) {this->id = 0;}
    else {this->id = id;}
    }
    string getName() {
        return "name : " + name;
    }
    string getId() {
        return "id : " + to_string(id);
    }
private :
    string name;
    int id;
};

int main()
{
    Student a;
    a.setName("Seethong");
    a.setId(3);
    cout << a.getName() << endl;
    cout << a.getId() << endl;
}
