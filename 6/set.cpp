#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	set<int> s;
	s.insert(3);
	s.insert(5);
	s.insert(2);
	s.insert(3);
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}

	return 0;
}