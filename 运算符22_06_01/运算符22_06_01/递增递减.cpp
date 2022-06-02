#include<iostream>
using namespace std;

int main()
{
	//1.前置递增
	int a1 = 10;
	
	++a1;//让变量+1
	
	cout << "a1 = " << a1 << endl;


	//2.后置递增
	int a2 = 20;
	
	a2++;//让变量+1
	
	cout << "a2 = " << a2 << endl;


	//3、前置和后置的区别
	//前置让变量先加递增/递减，再进行数字运算；后置是让变量先进行表达式运算，然后再让变量进行递增/递减的操作。
	
	//前置递增
	int a3 = 10;
	int b1 = ++a3 * 10;

	cout << "a3 = " << a3 << endl;//结果为11
	cout << "b1 = " << b1 << endl;//结果为110


	//后置递增
	int a4 = 10;
	int b2 = a4++ * 10;

	cout << "a4 = " << a4 << endl;//结果为11
	cout << "b2 = " << b2 << endl;//结果为100

	//递加与递减同理！！！



	system("pause");

	return 0;
}
