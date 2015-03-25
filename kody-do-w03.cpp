Kody z wykładu W-03

Listing 3.1.
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main()
{
 vector <int> v;
 //cout << v.size() << endl;
 v.push_back(3467);
 try 
 {
 assert(1 < v.size());
 v.at(1) = 123;
 cout << v.at(0) << endl;
 } 
 catch(...)
 {
 cout << "problem" << endl;
 }
 //cout << v.size() << endl;
 return 0;
}

Listing 3.2.
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class A
{
public:
 A() { cout << "A()" << endl; }
 A(const A&) { cout << "A(A&)" << endl; }
 ~A() { cout << "~A()" << endl; }
};

void foo(A &x)
{
 //cout << "foo" << endl;
}

int main()
{
 //cout << "start" << endl;
 A a;
 //cout << "srodek" << endl;
 foo(a);
 //cout << "stop" << endl;
 return 0;
}


Listing 3.3.
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

int main()
{
 string x = "aaa";
 string wynik = x + "bbb" + "ccc"; ///dlaczego dziala?
 //string wynik = "aaa" + "bbb" + "ccc"; ///dlaczego nie dziala?
 cout << wynik << endl;
 /*
    vector <string> v; 
 v.push_back("ala");
 cout << v.at(0) << endl;
 */
 return 0;
}
