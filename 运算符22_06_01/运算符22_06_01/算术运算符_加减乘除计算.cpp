#include<iostream>
using namespace std;

int main()
{
	int a1 = 55;

	int a2 = 10;

	cout << "����a1��b1�ĺ�Ϊ��" << a1 + a2 << endl;
	
	cout << "����a1��b1�Ĳ�Ϊ��" << a1 - a2 << endl;
	
	cout << "����a1��b1�ĳ˻�Ϊ��" << a1 * a2 << endl;
	
	cout << "����a1��b1����Ϊ��" << a1 / a2<< endl;
	//ע������������������ֻ�ᱣ���������֣�ϵͳ���Զ���С������������ͬʱ��������Ϊ0���������ᱨ��
	
	cout << "\n";

	//С�����Լ���
	double b1 = 1.1;

	double b2 = 0.0542;


	cout << "b1��b2�ĺ�Ϊ��" << b1 + b2 << endl;

	cout << "b1��b2�Ĳ�Ϊ��" << b1 - b2 << endl;

	cout << "b1��b2�ĳ˻�Ϊ��" << b1 * b2 << endl;

	cout << "b1��b2����Ϊ��" << b1 / b2 << endl;//С�������Ȼ��С��������ͬ��c++��ֻ�ᱣ��6λ��Ч����


	system("pause");

	return 0;
}
