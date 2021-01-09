#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,value,s,count;
	vector<int> v;
	while(cin >> n){
		if(n == 0)
			break;
		v.clear();
		count = 0;
		while(n--){
			cin >> value;
			v.push_back(value);
		}
		cin >> s;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i] == s)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}