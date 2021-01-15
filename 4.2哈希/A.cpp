#include <cstdio>
#include <string.h>
const int maxn = 210;
int hashTable[maxn] = {0};
int main(int argc, char const *argv[])
{
	int n,m,p;
	while(scanf("%d %d",&n,&m) != EOF){
		memset(hashTable,0,sizeof(int)*210);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&p);
			hashTable[i] = p;
		}
		
		for (int i = 0; i < n; ++i)
		{
			int common = 0;
			for (int j = 0; j < n; ++j)
			{
				if(i != j && hashTable[i] == hashTable[j])
					common++;
			}
			if (common != 0)
				printf("%d\n", common);
			else
				printf("BeiJu\n");
		}
	}
	return 0;
}