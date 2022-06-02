#include<iostream>
using namespace std;

int main()
{
	int a1 = 55;

	int a2 = 10;

	cout << "数字a1和b1的和为：" << a1 + a2 << endl;
	
	cout << "数字a1和b1的差为：" << a1 - a2 << endl;
	
	cout << "数字a1和b1的乘积为：" << a1 * a2 << endl;
	
	cout << "数字a1和b1的商为：" << a1 / a2<< endl;
	//注：两个整数相除，结果只会保留整数部分，系统会自动将小数部分舍弃；同时除数不能为0，否则程序会报错。
	
	cout << "\n";

	//小数可以计算
	double b1 = 1.1;

	double b2 = 0.0542;


	cout << "b1和b2的和为：" << b1 + b2 << endl;

	cout << "b1和b2的差为：" << b1 - b2 << endl;

	cout << "b1和b2的乘积为：" << b1 * b2 << endl;

	cout << "b1和b2的商为：" << b1 / b2 << endl;//小数相除依然是小数，但是同样c++里只会保留6位有效数字


	system("pause");

	return 0;
}
