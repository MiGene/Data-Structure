#include <iostream>

using namespace std;
namespace CP {
 template <typename T1, typename T2, typename T3>
 class tripple{
public :
    T1 first;
    T2 second;
    T3 third;

bool operator== (const tripple<T1,T2,T3> &other) {
    return (first == other.first && second == other.second && third == other.third);
}
 };
}


int main()
{
    CP::tripple <int, int, int> t1,t2;
    t1.first = 1; t1.second=2; t1.third=3;
    t2.first = 1; t2.second=2; t2.third=3;
    if (t1==t2) cout << "yes";
    else cout << "no";

}
