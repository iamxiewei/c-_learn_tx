//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//int main()
//{
//	string filename = R"(E:\test.txt)";
//
//	ifstream fin;
//	fin.open(filename,ios::in);
//
//	if (fin.is_open() == false)
//	{
//		cout << "打开文件" << filename << "失败.\n";
//	}
//
//	//第一种方法
//	/*string buffer;
//	while (getline(fin,buffer))
//	{
//		cout << buffer << endl;
//	}*/
//
//	//第三种方法
//	string buffer;
//	while (fin>>buffer)
//	{
//		cout << buffer << endl;
//	}
//	
//
//	return 0;
//
//}
//
//
