#include <cstdio>
int main(int argc, char const *argv[])
{
	int h;
	while(scanf("%d",&h) != EOF){
		for (int i = 1; i <= h; ++i)
		{
			for (int j = 0; j < (h - i)*2; ++j)
			{
				printf(" ");
			}
			for (int j = (h - i)*2; j < h + (h - 1) * 2; ++j)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}