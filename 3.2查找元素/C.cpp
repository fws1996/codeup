#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
struct student
{
    char id[100];
    char name[100];
    char sex[10];
    int age;
};
int main(){
    int n,m;
    while(scanf("%d",&n) != EOF){
        vector<student> v;
        student stu;
        while(n--){
            scanf("%s %s %s %d",stu.id,stu.name,stu.sex,&stu.age);
            v.push_back(stu);
        }
        scanf("%d",&m);
        while (m--){
            int isExist = 0;
            char num[100];
            scanf("%s",num);
            for (int i = 0; i < v.size(); ++i) {
                if(!strcmp(num,v[i].id)) {
                    printf("%s %s %s %d\n", v[i].id,v[i].name,v[i].sex,v[i].age);
                    isExist = 1;
                    break;
                }
            }
            if(isExist == 0)
                printf("No Answer!\n");
        }
    }
    return 0;
}