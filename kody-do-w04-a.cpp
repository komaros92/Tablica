#include <iostream>
#include <vector>
using namespace std;

class A 
{ 
 public:
	 A() { cout << "A" << endl; }
	 A(const A&) { cout << "B" << endl; }
	 ~A() { cout << "C" << endl; }
};

int main() {
  A x, y;
	vector <A> v; //a co się stanie, kiedy zamiast wektora obiektów klasy A
	              //użyjemy wektora wskaźników A* ?

	v.push_back(x);
	v.push_back(y);

	return 0;
}
