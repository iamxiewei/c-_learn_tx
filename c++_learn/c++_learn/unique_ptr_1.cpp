//#include<iostream>
//
//using namespace std;
//
//
//class AA
//{
//public:
//	string m_name;
//	AA() { cout << m_name << "���ù��캯��AA()��\n"; }
//	AA(const string& name) : m_name(name) { cout << "���ù��캯��AA(" << m_name << ")��\n"; }
//	~AA() { cout << m_name << "��������������~AA(" << m_name << ")��\n"; }
//};
//
//unique_ptr<AA> func()
//{
//	unique_ptr<AA> pp(new AA("��ʩ3"));
//	return pp;
//}
//
//
//
//void func4(unique_ptr<AA> a)
//{
//	cout << a->m_name << endl;
//}
//int main()
//{
//	//����һ
//	//unique_ptr<AA> p0(new AA("��ʩ"));     // �����ڴ沢��ʼ����
//
//	//������
//	//unique_ptr<AA> p0 = make_unique<AA>("��ʩ");   // C++14��׼��
//	//unique_ptr<int> pp1 = make_unique<int>();         // ��������Ϊint��
//	//unique_ptr<AA> pp2 = make_unique<AA>();       // ��������ΪAA��Ĭ�Ϲ��캯����
//	//unique_ptr<AA> pp3 = make_unique<AA>("��ʩ");  // ��������ΪAA��һ�������Ĺ��캯����
//	////unique_ptr<AA> pp4 = make_unique<AA>("��ʩ", 8); // ��������ΪAA�����������Ĺ��캯����
//
//	//unique_ptr<AA> pu1(new AA("��ʩ1"));
//
//	//unique_ptr<AA> pu2;
//	//
//	//pu2 = unique_ptr<AA>(new AA("��ʩ2"));
//	//cout << "����func()֮ǰ\n";
//	//pu2 = func();
//	//cout << "����func()֮��" << endl;
//
//	//unique_ptr<AA> pu(new AA("��ʩ"));
//
//	//cout << "��ֵǰ.\n";
//	//if (pu != nullptr)
//	//{
//	//	cout << "pu���ǿյ�" << endl;
//	//}
//	//pu = nullptr;
//	//cout << "��ֵ��" << endl;
//	//if (pu == nullptr)
//	//{
//	//	cout << "pu�ǿյ�" << endl;
//	//}
//
//	unique_ptr<AA> pu(new AA("��ʩ"));
//
//	cout << "��ʼ���ú���\n";
//
//	func4(move(pu));
//	cout << "���ú������\n";
//	if (pu == nullptr)
//	{
//		cout << "pu�ǿ�";
//	}
//	return 0;
//}