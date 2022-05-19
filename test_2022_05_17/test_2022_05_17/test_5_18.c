#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 1584
//
//
//
//
//int main()
//{
//	int acudy = 10000;
//	
//	const int n = MAX-acudy;
//	
//	printf("n=%d\n", n);
//
//	return 0;
//}


//性别


//int main()
//{
//	enum Sex {
//		MALE = 56, FEMALE = 57, SECRET = 65//枚举变量
//	};
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("%d\n", s);
//
//	return 0;
//}

#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	
	
	printf("%d\n", strlen(arr1));
	printf("%d\n",strlen(arr2));
	return 0;
}