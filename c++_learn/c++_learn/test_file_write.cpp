//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	string filename = R"(E:\test.txt)";
//	//�����ļ���������󣬴��ļ�������ļ������ڣ��򴴽���
//		//ofstream fout(filename,ios::app);
//	//ofstream fout(filename, ios::out);
//	//ofstream fout(filename, ios::trunc);	
//	//ofstream fout(filename, ios::app);
//
//		ofstream fout;
//		fout.open(filename,ios::trunc);	//ios::trunc��ʾ����յ�ǰ�ļ����ݣ���д��
//
//		//�жϴ��ļ��Ƿ�ɹ�
//		//ʧ�ܵ�ԭ���У�
//		if (fout.is_open() == false)
//		{
//			cout << "���ļ�" << filename << "ʧ�ܡ�\n";  return 0;
//		}
//
//		// ���ļ���д�����ݡ�
//		fout << "��ʩ|19|��Ư��\n";
//		fout << "����|22|Ư��\n";
//		fout << "����|25|һ��\n";
//		fout << "����|26|��Ʒ\n";
//		fout.close();	   // �ر��ļ���fout����ʧЧǰ���Զ�����close()��
//
//		cout << "�����ļ���ɡ�\n";
//
//		return 0;
//}