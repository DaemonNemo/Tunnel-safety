/*************************************************************************
    > File Name: test.c
    > Author: Nemo
    > Mail: 2068351709@qq.com
    > Created Time: 2018年01月13日 星期六 13时06分00秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *func(char *buf,int len)
{
	char *end = buf + len;
	static char src[1024] = {0};
	int i = 0;
	while(end != ' ')
	{
		src[i] = *end;
		i++;
		if(end = buf)
		{
			break;
		}
		end--;
	}
	return src;
}

int main01()
{
	char buf[1024];
	printf("请输入一个数字：");
	scanf("%s\n",buf);
	int len = strlen(buf);
	char *p = func(buf,len);
	printf("p = %s\n",p);
	return 0;
}

int main()
{
	int ret = sizeof("我");
	printf("%d\n",ret);
	return 0;
}
