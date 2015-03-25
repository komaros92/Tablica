#include <iostream>
#include <vector>
using namespace std;

void main ()
{
	vector<int> v;
	for(int i = 1; i <= 10; ++i) 
	{
		v.push_back(i);
	}

  //zadziała dla wektora, ale nie dla listy!
	for(int i = 0; i < v.size(); ++i) 
	{
		cout << v[i] << ", ";
	}
	cout << endl;

  //od przodu
  for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
    cout << *it << ", ";
  }
  cout << endl;

  //od tyłu
  for(vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
  {
	  cout << *it << ", ";
  }
  cout << endl;
}
