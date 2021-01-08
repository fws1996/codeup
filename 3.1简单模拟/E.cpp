#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d",&n);
	vector<int> dist(n+1);
	int d=0,num;
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d",&num);
		d+=num;
		dist[i] = d;
	}
	scanf("%d",&m);
	int a,b,d1,d2;
	for (int i = 0; i < m; ++i)
	{
		d1=0,d2=0;
		scanf("%d%d",&a,&b);
		if(a>b)
			swap(a,b);
		d1 += dist[b-1] - dist[a-1];
		d2 = d - d1;
		if(d1 < d2)
				printf("%d\n", d1);
			else
				printf("%d\n", d2);
	}
	return 0;
}