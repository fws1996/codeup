#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n) != EOF){
		vector<int> v;
		while(n--)
		{
			int value;
			scanf("%d",&value);
			v.push_back(value);
		}
		int v1[5] = {0};
		int count = 0;
		int count3 = 0;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i] % 5 == 0 && v[i] % 2 == 0){
				v1[0] += v[i];
			}
			if(v[i] % 5 == 1){
				count++;
				if(count % 2 == 1)
					v1[1] += v[i];
				else
					v1[1] -= v[i];
			}
			if(v[i] % 5 == 2)
				v1[2]++;
			if(v[i] % 5 == 3){
				v1[3] += v[i];
				count3++;
			}
			if(v[i] % 5 == 4 && v[i] > v1[4]){
				v1[4] = v[i];
			}
		}
		if(v1[0] != 0)
			printf("%d", v1[0]);
		else
			printf("N");
		if (count != 0)
			printf(" %d", v1[1]);
		else
			printf(" N");
		if (v1[2] != 0)
			printf(" %d", v1[2]);
		else
			printf(" N");
		if(v1[3] != 0)
			printf(" %.1f", (double)v1[3] / count3);
		else
			printf(" N");
		if(v1[4] != 0)
			printf(" %d\n", v1[4]);
		else
			printf(" N\n");
	}
	return 0;
}