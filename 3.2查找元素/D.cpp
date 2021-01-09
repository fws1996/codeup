#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m,a[101],b[101];
	bool exist = false;
	while(scanf("%d",&n) != EOF){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for (int i = 0; i < m; ++i)
		{
			scanf("%d",&b[i]);
		}
		for (int i = 0; i < m; ++i)
		{
			exist = false;
			for (int j = 0; j < n; ++j)
			{
				if(b[i] == a[j]){
					printf("YES\n");
					exist = true;
					break;
				}
			}
			if(exist == false)
				printf("NO\n");
		}

	}
	return 0;
}