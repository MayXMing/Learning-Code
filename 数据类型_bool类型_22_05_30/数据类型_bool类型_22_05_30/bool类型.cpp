#include<iostream>
using namespace std;

int main()
{
	//����bool��������
	bool player1 = true;//true�������1

	cout << player1 << endl;

	bool player2 = false;//false�������0

	cout << "�����벼������player2��ֵ��";

	cin >> player2;

	cout << player2 << endl;
	
	cout << "player2��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(player2) << endl;//bool��ռ�õ��ڴ�ռ���1

	cout << "bool��ռ�õ��ڴ�ռ�Ϊ��"<< sizeof(bool) << endl;//bool��ռ�õ��ڴ�ռ���1

	//������ 1������ 0����١�

	string str ;
	cout << "�������ַ�������str��ֵ��";
	cin >> str;//cin>>�������뺯��
	cout << "�ַ�������str��ֵΪ��" << str << endl;

	system("pause");

	return 0;
}
