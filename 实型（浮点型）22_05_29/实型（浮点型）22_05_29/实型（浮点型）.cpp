#include<iostream>
using namespace std;

int main()
{
	//默认情况下，输出一个小数，只会显示出6位有效数字
	//单精度float
	float Fa = 3.14159f;//单精度数字一般加f结尾；不加也能正常显示，但是系统计算过程就是用double类型再转换成float显示的
	cout << "Fa = " << Fa << endl;
	//双精度 double
	double Da = 3.1415926;
	cout << "Da = " << Da << endl;


	//统计float和double所占用的内存空间
	cout << "float 所占用的内存空间是： " << sizeof(float )<< endl;//4字节
	
	cout << "double 所占用的内存空间是： " << sizeof(double)<< endl;//8字节

	//科学计数法表示小数

	float Fb = 3e5;//3*10^5
	cout << "Fb = " << Fb << endl;
	
	float Fc = 3e-4;//3*0.1^4
	cout << "Fc = " << Fc << endl;
	

	system("pause");

	return 0;

}