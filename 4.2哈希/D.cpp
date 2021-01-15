#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0;i < s2.length();++i)
	{
		
		while(s1.find(s2[i]) != string::npos){
			s1.erase(s1.find(s2[i]),1);
		}
	}
	cout << s1 << endl;
	return 0;
}