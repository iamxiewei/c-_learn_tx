#include <iostream>
#include <memory>
using  namespace std;

class AA
{
public:
	string m_name;
	AA() { cout << m_name << "���ù��캯��AA()��\n"; }
	AA(const string& name) : m_name(name) { cout << "���ù��캯��AA(" << m_name << ")��\n"; }
	~AA() { cout << "��������������~AA(" << m_name << ")��\n"; }
};

int main()
{
	//AA* parr1 = new AA[2];   // ��ָͨ�����顣
	////AA* parr1 = new AA[2]{ string("��ʩ"), string("����") };
	//parr1[0].m_name = "��ʩ1";
	//cout << "parr1[0].m_name=" << parr1[0].m_name << endl;
	//parr1[1].m_name = "��ʩ2";
	//cout << "parr1[1].m_name=" << parr1[1].m_name << endl;
	//delete [] parr1;

	unique_ptr<AA[]> parr2(new AA[2]);   // unique_ptr���顣
	//unique_ptr<AA[]> parr2(new AA[2]{ string("��ʩ"), string("����") });
	parr2[0].m_name = "��ʩ1";
	cout << "parr2[0].m_name=" << parr2[0].m_name << endl;
	parr2[1].m_name = "��ʩ2";
	cout << "parr2[1].m_name=" << parr2[1].m_name << endl;
}
