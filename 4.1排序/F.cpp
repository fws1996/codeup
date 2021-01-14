#include <cstdio>
#include <algorithm>
using namespace std;

struct Rat
{
	int weight;
	char color[10];
}wrat[101];

bool cmp(Rat a, Rat b){
	return a.weight > b.weight;
}
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n) != EOF){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %s",&wrat[i].weight,wrat[i].color);
		}
		sort(wrat, wrat + n, cmp);
		for (int i = 0; i < n; ++i)
		{
			printf("%s\n", wrat[i].color);
		}
	}
	return 0;
}