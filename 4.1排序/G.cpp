#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,mid;
	int list[10010];
	while(scanf("%d", &n) != EOF){
		if(n == 0)
			break;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&list[i]);
		}
		sort(list, list + n);
		if(n % 2 == 0)
			mid = (list[n/2 - 1] + list[n/2]) / 2;
		else
			mid = list[n/2];
		printf("%d\n", mid);
	}
	return 0;
}