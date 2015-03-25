#include <iostream>
#include <vector>
using namespace std;

class A 
{
public:
	~A() { cout <<"~A()"; }
	void m() { cout <<"A::m()"; }
};

class B :public A 
{
public:
	~B() { cout <<"~B()"; }
	void m() { cout <<"B::m()"; }
};

void main() 
{
	A *obj =new B();
	obj->m();
	delete obj;
}
