#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF){
		int s1[10] = {0};
		int s2[10] = {0};
		int sum = 0;
		int m,n;
		for (m = 0; a > 0; ++m)
		{
			s1[m] = a % 10;
			a /= 10;
		}
		for (n = 0; b > 0; ++n)
		{
			s2[n] = b % 10;
			b /= 10;
		}
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				sum += (s1[i] * s2[j]);
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}