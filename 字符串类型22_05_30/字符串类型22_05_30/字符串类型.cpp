#include<iostream>
using namespace std;

int main()
{
	//字符类型的表达方式：
	char ch = 'a';

	cout << ch << endl;

	cout << "ch所占用的内存空间为：" << sizeof(ch) << endl;

	//如何查看字符代表的ascll码：

	cout << (int)ch << endl;


	//C风格字符串表示格式：
	char op[] = "ab";//5242228

	cout << op << endl;
	
	cout <<"op所占用的内存空间为："<< sizeof(op) << endl;

    //C++风格字符串表示格式：

	string op2 = "ab";

	cout << op2 << endl;

	cout <<"op2所占用的内存空间为："<< sizeof(op2)<<endl;

	//C++使用string函数要加一个头文件：#include<string>

	cout<<"\\" << endl;//  \\是输出\ 的意思

	cout << "\n";//\n是光标换到下一行的意思,跟endl的作用一样

	cout << "My\tname\tis\tGxm\n";//\t的意思是水平制表

	cout << "aaaaaaa\thello world" << endl;


	system("pause");

	return 0;
}
