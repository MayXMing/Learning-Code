#include<iostream>
using namespace std;

int main() {

	short num1 =32767;//shortռ�ÿռ�2�ֽڣ�ȡֵ��Χ-2^15~2^15-1��-32768~32767)
	int num2 = 2147483647;//intռ�ÿռ�4�ֽڣ�ȡֵ��Χ-2^31~2^31-1��-2147483648~2147483647��
	long num3 = 2147483647;//ռ�ÿռ�windowsΪ4�ֽڣ�linux32λҲ��4�ֽڣ�64λ8�ֽڣ�ȡֵ��Χ-2^31~2^31-1��-2147483648~2147483647��
	long long num4 = 9223372036854775807;//ռ�ÿռ�8�ֽڣ�ȡֵ��Χ-2^63~2^63-1��-9223372036854775808~9223372036854775807��
	cout << "num1="<<num1 << endl;
	cout << "num2="<<num2 << endl;
	cout << "num3="<<num3 << endl;
	cout << "num4="<<num4 << endl;
	


	system("pause");

	return 0;
}
