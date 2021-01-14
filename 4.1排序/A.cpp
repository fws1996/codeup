#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int num[105];
	while(scanf("%d",&n) != EOF){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &num[i]);
		};
		sort(num,num + n);
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", num[i]);
		}
		printf("\n");
	}
	return 0;
}