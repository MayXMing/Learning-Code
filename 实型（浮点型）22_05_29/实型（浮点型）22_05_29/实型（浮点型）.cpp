#include<iostream>
using namespace std;

int main()
{
	//Ĭ������£����һ��С����ֻ����ʾ��6λ��Ч����
	//������float
	float Fa = 3.14159f;//����������һ���f��β������Ҳ��������ʾ������ϵͳ������̾�����double������ת����float��ʾ��
	cout << "Fa = " << Fa << endl;
	//˫���� double
	double Da = 3.1415926;
	cout << "Da = " << Da << endl;


	//ͳ��float��double��ռ�õ��ڴ�ռ�
	cout << "float ��ռ�õ��ڴ�ռ��ǣ� " << sizeof(float )<< endl;//4�ֽ�
	
	cout << "double ��ռ�õ��ڴ�ռ��ǣ� " << sizeof(double)<< endl;//8�ֽ�

	//��ѧ��������ʾС��

	float Fb = 3e5;//3*10^5
	cout << "Fb = " << Fb << endl;
	
	float Fc = 3e-4;//3*0.1^4
	cout << "Fc = " << Fc << endl;
	

	system("pause");

	return 0;

}