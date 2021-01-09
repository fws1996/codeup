#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,value,x,k;
	std::vector<int> v;
	while(cin >> n){
		v.clear();
		k=-1;
		while(n--){
			cin >> value;
			v.push_back(value);
		}
		cin >> x;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i] == x){
				k = i;
				break;
			}
		}
		cout<<k<<endl;
	}
	return 0;
}