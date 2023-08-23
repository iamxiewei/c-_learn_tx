#include <iostream>
#include <fstream>  // fstream类需要包含的头文件。
using  namespace std;

int main()
{
	string filename = R"(E:\test.txt)";

	fstream fs;
	fs.open(filename, ios::in | ios::out);

	if (fs.is_open() == false)
	{
		cout << "打开文件" << filename << "失败。\n";  return 0;
	}

	fs.seekg(26);    // 把文件位置指针移动到第26字节处。

	fs << "我是一只傻傻的小菜鸟。\n";

	/*string buffer;
	while (fs >> buffer)
	{
		cout << buffer << endl;
	}*/

	fs.close();	   // 关闭文件，fs对象失效前会自动调用close()。

	cout << "操作文件完成。\n";
}
