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
//		cout << "���ļ�" << filename << "ʧ��.\n";
//		return 0;
//	}
//
//	//���ļ���д������
//	struct st_girl {
//		char name[31];
//		int no;
//		char memo[301];
//		double weight;
//	}girl;
//
//	girl = { "��ʩ",3,"�й���ʷ��һ��Ů",45.8 };
//	fout.write((const char*)&girl,sizeof(st_girl));
//	girl = { "����",8,"Ҳ�Ǹ�����ŮŶ��",55.2 };
//	fout.write((const char*)&girl, sizeof(st_girl));     // д��ڶ������ݡ�
//
//	fout.close();
//
//	cout << "�����ļ����.\n";
//
//
//
//}