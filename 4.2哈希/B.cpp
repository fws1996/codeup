#include <iostream>
#include <vector>
#include <set>
#include <cstring>
using namespace std;
int hashTable[2000][2000] = {0};
int main(int argc, char const *argv[])
{
	int m,n;
	set<int> nums;
	set<int> groups;
	vector<int> nums2;
	vector<int> groups2;
	int in[2][210] = {0};
	cin >> m;
	while(m--){
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			in[0][i] = temp;
			nums.insert(temp);
		}
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			in[1][i] = temp;
			groups.insert(temp);
		}
		for (int i = 0; i < n; ++i)
		{
			hashTable[in[1][i]][in[0][i]]++;
		}
		for (set<int>::iterator it = nums.begin();it != nums.end();++it)
		{
			nums2.push_back(*it);
		}
		for (set<int>::iterator it = groups.begin();it != groups.end();++it)
		{
			groups2.push_back(*it);
		}
		for (int i = 0; i < groups2.size(); ++i)
		{
			cout << groups2[i] << "={";
			for (int j = 0; j < nums2.size(); ++j)
			{
				cout << nums2[j] << "=" << hashTable[groups2[i]][nums2[j]];
				if(j < nums2.size() - 1 )
					cout << ",";
				else
					cout << "}" << endl;
			}
		}
		nums.clear();
		nums2.clear();
		groups.clear();
		groups2.clear();
		memset(in,0,sizeof(in));
		memset(hashTable, 0 ,sizeof(hashTable));
	}
	return 0;
}