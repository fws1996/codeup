#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

struct Student
{
	int id;
	char name[10];
	int score;
}stu[100010];

bool cmp1(Student a, Student b){
	return a.id < b.id;
}

bool cmp2(Student a, Student b){
	if(strcmp(a.name,b.name) == 0)
		return a.id < b.id;
	else
		return strcmp(a.name, b.name) < 0;
}

bool cmp3(Student a, Student b){
	if(a.score != b.score)
		return a.score < b.score;
	else
		return a.id < b. id;
}

int main(int argc, char const *argv[])
{
	int n,c,ca = 0;
	while(scanf("%d %d",&n,&c) != EOF){
		if(n == 0)
			break;
		ca++;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %s %d",&stu[i].id,stu[i].name,&stu[i].score);
		}
		if(c == 1)
			sort(stu,stu + n,cmp1);
		else if(c == 2)
			sort(stu, stu + n, cmp2);
		else
			sort(stu, stu + n, cmp3);
		printf("Case %d:\n", ca);
		for (int i = 0; i < n; ++i)
		{
			printf("%06d %s %d\n",stu[i].id, stu[i].name, stu[i].score);
		}
		
	}
	return 0;
}