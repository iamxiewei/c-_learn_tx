//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	string filename = R"(E:\test.txt)";
//	//创建文件输出流对象，打开文件，如果文件不存在，则创建它
//		//ofstream fout(filename,ios::app);
//	//ofstream fout(filename, ios::out);
//	//ofstream fout(filename, ios::trunc);	
//	//ofstream fout(filename, ios::app);
//
//		ofstream fout;
//		fout.open(filename,ios::trunc);	//ios::trunc表示先清空当前文件内容，再写入
//
//		//判断打开文件是否成功
//		//失败的原因有：
//		if (fout.is_open() == false)
//		{
//			cout << "打开文件" << filename << "失败。\n";  return 0;
//		}
//
//		// 向文件中写入数据。
//		fout << "西施|19|极漂亮\n";
//		fout << "冰冰|22|漂亮\n";
//		fout << "幂幂|25|一般\n";
//		fout << "晶晶|26|极品\n";
//		fout.close();	   // 关闭文件，fout对象失效前会自动调用close()。
//
//		cout << "操作文件完成。\n";
//
//		return 0;
//}