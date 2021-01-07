#include <stdio.h>
const int maxn = 100010;
int main(int argc, char const *argv[])
{
	int l,m;
	while(scanf("%d%d",&l,&m) != EOF){
		int trees[maxn] = {0};
		int num=0;
		if(l == 0 && m == 0) break;
		for (int i = 0; i < m; ++i)
		{
			int left, right;
			scanf("%d%d",&left,&right);
			for (int j = left; j <= right; ++j)
			{
				trees[j] = 1;
			}
		}
		for (int i = 0; i <= l; ++i)
		{
			if(trees[i] == 0)
				num++;
		}
		printf("%d\n", num);
	}
	return 0;
}