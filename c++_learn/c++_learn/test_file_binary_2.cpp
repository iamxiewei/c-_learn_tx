#include <iostream>
#include <fstream>  // fstream����Ҫ������ͷ�ļ���
using  namespace std;

int main()
{
	string filename = R"(E:\test.txt)";

	fstream fs;
	fs.open(filename, ios::in | ios::out);

	if (fs.is_open() == false)
	{
		cout << "���ļ�" << filename << "ʧ�ܡ�\n";  return 0;
	}

	fs.seekg(26);    // ���ļ�λ��ָ���ƶ�����26�ֽڴ���

	fs << "����һֻɵɵ��С����\n";

	/*string buffer;
	while (fs >> buffer)
	{
		cout << buffer << endl;
	}*/

	fs.close();	   // �ر��ļ���fs����ʧЧǰ���Զ�����close()��

	cout << "�����ļ���ɡ�\n";
}
