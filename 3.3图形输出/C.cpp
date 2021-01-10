#include <cstdio>
int main(int argc, char const *argv[])
{
	int m,h;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&h);
		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < h - i - 1; ++j)
			{
				printf(" ");
			}
			for (int j = 0; j < h + i * 2; ++j)
			{
				printf("*");
			}
			for (int j = 0; j < h - i - 1; ++j)
			{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}