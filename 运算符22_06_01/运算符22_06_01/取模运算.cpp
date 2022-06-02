#include<iostream>
using namespace std;

int main()
{
	//取模/取余运算的本质就是找出两个数的余数
	int a1 = 10;
	int a2 = 3;

	cout << "数字a1和a2的余数为：" << a1 % a2 << endl;

	
	int b1 = 10;
	int b2 = 50;

	cout << "数字b1和b2的余数为：" << b1 % b2 << endl;
	//当被除数小于除数时，得到的余数就是被除数本身


	/*int c1 = 10;
	int c2 = 0;

	cout << "数字c1和c2的余数为：" << c1 % c2 << endl;
     跟除法一样，除数为0的时候程序会报错！！*/

	//两个小数不能做取模运算！会直接报错！

	system("pause");

	return 0;
}
