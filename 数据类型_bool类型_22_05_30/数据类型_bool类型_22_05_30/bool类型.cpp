#include<iostream>
using namespace std;

int main()
{
	//创建bool数据类型
	bool player1 = true;//true代表的是1

	cout << player1 << endl;

	bool player2 = false;//false代表的是0

	cout << "请输入布尔变量player2的值：";

	cin >> player2;

	cout << player2 << endl;
	
	cout << "player2所占用的内存空间为：" << sizeof(player2) << endl;//bool所占用的内存空间是1

	cout << "bool所占用的内存空间为："<< sizeof(bool) << endl;//bool所占用的内存空间是1

	//本质上 1代表真 0代表假。

	string str ;
	cout << "请输入字符串变量str的值：";
	cin >> str;//cin>>代表输入函数
	cout << "字符串变量str的值为：" << str << endl;

	system("pause");

	return 0;
}
