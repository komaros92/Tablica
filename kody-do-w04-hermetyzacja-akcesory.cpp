#include <iostream>
#include <vector>
using namespace std;

class A { 
	friend void f(A &a);
	friend int main(); //patologia stosowana
public:
	A() { cout << "A" << endl; x = y = 0; }
	A(const A&) { cout << "B" << endl; }
	~A() { cout << "C" << endl; }
	int get_x() { return x; }
	void set_x(int x) { this->x = x; }

protected:
	int x;

private:
	int y;
};

void f(A &a)
{
  a.x = 999; //zadziała, bo f jest przyjacielem A
}

int main() 
{
  A a;
  cout << a.x << endl; //to zadziała, bo main() jest bliskim przyjacielem A
  
	a.set_x(7);
	cout << a.get_x() << endl;
	return 0;
}
