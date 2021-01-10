#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int len = s.length();
	int side = (len + 2) / 3;
	int mid = len - side * 2;
	for (int i = 0; i < side - 1; ++i)
	{
		cout << s[i];
		for (int i = 0; i < mid; ++i)
		{
			cout << " ";
		}
		cout << s[len - 1 - i] << endl;
	}
	for (int i = side-1; i < side + mid + 1; ++i)
	{
		cout << s[i];
	}
	return 0;
}