#include<iostream>
using namespace std;

int main()
{
	//�ַ����͵ı�﷽ʽ��
	char ch = 'a';

	cout << ch << endl;

	cout << "ch��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(ch) << endl;

	//��β鿴�ַ������ascll�룺

	cout << (int)ch << endl;


	//C����ַ�����ʾ��ʽ��
	char op[] = "ab";//5242228

	cout << op << endl;
	
	cout <<"op��ռ�õ��ڴ�ռ�Ϊ��"<< sizeof(op) << endl;

    //C++����ַ�����ʾ��ʽ��

	string op2 = "ab";

	cout << op2 << endl;

	cout <<"op2��ռ�õ��ڴ�ռ�Ϊ��"<< sizeof(op2)<<endl;

	//C++ʹ��string����Ҫ��һ��ͷ�ļ���#include<string>

	cout<<"\\" << endl;//  \\�����\ ����˼

	cout << "\n";//\n�ǹ�껻����һ�е���˼,��endl������һ��

	cout << "My\tname\tis\tGxm\n";//\t����˼��ˮƽ�Ʊ�

	cout << "aaaaaaa\thello world" << endl;


	system("pause");

	return 0;
}
