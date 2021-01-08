#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str1[20],str2[20];
	while(scanf("%s%s",str1,str2) != EOF){
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int num1 = 0,num2 = 0;
		for (int i = 0; i < len1; ++i)
		{
			if(str1[i] >= '0' && str1[i] <= '9')
				num1 = num1 * 10 + (str1[i] - '0');
		}
		if(str1[0] == '-')
			num1 = -num1;
		for (int i = 0; i < len2; ++i)
		{
			if(str2[i] >= '0' && str2[i] <= '9')
				num2 = num2 * 10 + (str2[i] - '0');
		}
		if(str2[0] == '-')
			num2 = -num2;
		printf("%d\n", num1 + num2);
	}
	
	return 0;
}