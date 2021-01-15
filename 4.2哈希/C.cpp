#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int maxn = 10010;
int hashTable[maxn] = {0};
int main(int argc, char const *argv[])
{
	int n,a;
	vector<int> nums;
	while(cin >> n){
		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			hashTable[a]++;
			nums.push_back(a);
		}
		for (int i = 0; i < nums.size(); ++i)
		{
			if(hashTable[nums[i]] == 1){
				printf("%d\n", nums[i]);
				break;
			}
			if (i == nums.size() - 1 && hashTable[nums[i]] != 1)
			{
				printf("None\n");
			}
		}
		nums.clear();
		memset(hashTable,0,sizeof(hashTable));
	}
	return 0;
}