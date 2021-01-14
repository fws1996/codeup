#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
	char id[20];
	int score;
}stu[1010];

bool cmp(Student a, Student b){
	return a.score > b.score;
}
int main(int argc, char const *argv[])
{
	int n,m,g,q,temp;
	int scores[15];

	while(cin >> n >> m >> g){
		if(n == 0)
			break;
		for (int i = 1; i <= m; ++i)
		{
			cin >> scores[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> stu[i].id >> q;
			for (int j = 0; j < q; ++j)
			{
				cin >> temp;
				stu[i].score += scores[temp];
			}
		}
		sort(stu, stu + n, cmp);
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (stu[i].score >= 32)
				count++;
		}
		cout << count << endl;
		for (int i = 0; i < count; ++i)
		{
			// printf("%s %d\n", stu[i].id, stu[i].score);
			cout << stu[i].id << " " << stu[i].score << endl;
		}
	}
	return 0;
}