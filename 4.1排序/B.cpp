#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int num[1010];
	while(scanf("%d",&n) != EOF){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&num[i]);
		}
		sort(num, num + n);
		if(n == 1){
			printf("%d\n", num[n - 1]);
			printf("-1\n");
		}
		else{
			printf("%d\n", num[n - 1]);
			for (int i = 0; i < n-1; ++i)
			{
				printf("%d ", num[i]);
			}
		}

	}
	return 0;
}