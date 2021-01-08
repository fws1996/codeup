#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n) != EOF){
		int a,j=0,o=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&a);
			if(a % 2 == 1)
				j++;
			else
				o++;
		}
		if (j>o)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}