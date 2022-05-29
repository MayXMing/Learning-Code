#include<iostream>
using namespace std;

int main() {
	
	
	int a = 5;
	cout << "shrot短整型所占的内存空间大小为：" << sizeof(short) << endl;
	cout << "int整型所占的内存空间大小为：" << sizeof(int) << endl;
	cout << "long长整型所占的内存空间大小为：" << sizeof(long) << endl;
	cout << "long long 长长整型所占的内存空间大小为：" << sizeof(long long) << endl;
	cout << "a所占的内存空间大小为：" << sizeof(a) << endl;

	system("pause");

	return 0;

}