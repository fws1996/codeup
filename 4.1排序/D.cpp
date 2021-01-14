#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	char s[201];
	while(gets(s)){
		int l = strlen(s);
		sort(s,s + l);
		printf("%s\n",s);
	}
	return 0;
}