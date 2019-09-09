#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
//struct student 
//{
//	int num;
//	char name[32];
//	float score;
//}stu;
//int fun(char *s1,char *s2)
//{
//	int i = 0;
//	while (s1[i] == s2[i]&&s2[i]!='\0')
//	{
//		i++;
//	}
//	return (s1[i] == '\0'&&s2[i] == '\0');
//}
int main()
{
	
	/*char a[] = { "123456789" }, *p = a;
	int i = 0;
	while (*p)
	{
		if (i % 2 == 0)
			*p = '!';
		i++; p++;
	}
	put(a);*/
	/*char str[] = "ABCDEFG";
	char *p1, *p2;
	p1 = "abcd", p2 = "efgh";
	strcpy(str + 1, p2 + 1);
	strcpy(str + 3, p1 + 3);
	printf("%s", str);*/
	//char a[] = "abc";
	//char b[] = "bcdf";
	//int ret =fun(a, b);
	//printf("%d", ret);
	/*unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char *b = (char *)&a;
	printf("%08x,%08x", i, *b);*/
	/*int x = 1, y = 012;
	printf("%d", y*x++);*/
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++)
	{
		switch (i/j)
		{
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	return 0;
}