#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}
int main(int argc, char const *argv[])
{
	int m,row=0,col=0,diag=0;
	int a[10][10];
	vector<int> v;
	scanf("%d",&m);
	for (int i = 0; i < m; ++i)
	{
		row = 0;
		for (int j = 0; j < m; ++j)
		{
			scanf("%d",&a[i][j]);
			row += a[i][j];
			if(i == j)
				diag += a[i][j];
		}
		v.push_back(row);
	}
	for (int i = 0; i < m; ++i)
	{
		col = 0;
		for (int j = 0; j < m; ++j)
		{
			col += a[j][i];
		}
		v.push_back(col);
	}
	v.push_back(diag);
	sort(v.begin(), v.end(),cmp);
	for (int i = 0; i < v.size(); ++i)
	{
		if(i == v.size() - 1)
			printf("%d ", v[i]);
		else
			printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}