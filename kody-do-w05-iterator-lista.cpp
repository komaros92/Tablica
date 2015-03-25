#include <iostream>
#include <list>
using namespace std;

typedef list<int> LI; //dzięki temu kod jest czytelniejszy

int main () {
	LI v;
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	v.push_back(400);

	LI::iterator it;
	
	for(it = v.begin(); it != v.end(); ++it)
	{
    cout << *it << endl;
	}

	return 0;
}
