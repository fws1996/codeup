#include <cstdio>
using namespace std;
struct student
{
	int id;
	char name[100];
	char sex[100];
	int age;
}stu[21];
int main(int argc, char const *argv[])
{
	int n,m,num;
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d %s %s %d",&stu[i].id,stu[i].name,stu[i].sex,&stu[i].age);
		}
		scanf("%d",&num);
		for (int i = 0; i < n; ++i)
		{
			if(stu[i].id == num){
				printf("%d %s %s %d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].age);
				break;
			}
		}
	}
	
	return 0;
}