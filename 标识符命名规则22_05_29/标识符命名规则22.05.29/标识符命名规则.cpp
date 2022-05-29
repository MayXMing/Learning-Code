#include<iostream>
using namespace std;

int main() {
	//标识符的命名规则：
//1、标识符不可以是关键字
	//int int=10;

//2、标识符是由字母、数字、下划线组成
	int aaa=20;
	int a12_ = 30;

	int _12s = 50;

//3、标识符第一个字符只能是字母或者下划线
//int 12a = 50;
//4、标识符区分大小写
	int abbb = 100;
	//cout << ABBB << endl;  ABBB和abbb不是同一个名称，无法输出

	//标识符最好可以做到见名知意

	system("pause");

	return 0;
}
