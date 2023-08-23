//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	string filename = R"(E:\test.txt)";
//
//	ofstream fout;
//	fout.open(filename,ios::app|ios::binary);
//
//	if (fout.is_open() == false)
//	{
//		cout << "打开文件" << filename << "失败.\n";
//		return 0;
//	}
//
//	//向文件中写入数据
//	struct st_girl {
//		char name[31];
//		int no;
//		char memo[301];
//		double weight;
//	}girl;
//
//	girl = { "西施",3,"中国历史第一美女",45.8 };
//	fout.write((const char*)&girl,sizeof(st_girl));
//	girl = { "冰冰",8,"也是个大美女哦。",55.2 };
//	fout.write((const char*)&girl, sizeof(st_girl));     // 写入第二块数据。
//
//	fout.close();
//
//	cout << "操作文件完成.\n";
//
//
//
//}