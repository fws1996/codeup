#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(int argc, char const *argv[])
{
	int num[10];
	while(cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6] >> num[7] >> num[8] >> num[9]){
		sort(num, num + 10, cmp);
		for (int i = 0; i < 10; ++i)
		{
			if(num[i] % 2 == 1){
				if(i < 9)
					printf("%d ", num[i]);
				else
					printf("%d\n", num[i]);
			}
		}
		sort(num, num + 10);
		for (int i = 0; i < 10; ++i)
		{
			if(num[i] % 2 == 0){
				if(i < 9)
					printf("%d ", num[i]);
				else
					printf("%d\n", num[i]);
			}
		}
	}
	return 0;
}