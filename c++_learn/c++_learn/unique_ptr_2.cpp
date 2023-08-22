#include <iostream>
#include <memory>
using  namespace std;

class AA
{
public:
	string m_name;
	AA() { cout << m_name << "调用构造函数AA()。\n"; }
	AA(const string& name) : m_name(name) { cout << "调用构造函数AA(" << m_name << ")。\n"; }
	~AA() { cout << "调用了析构函数~AA(" << m_name << ")。\n"; }
};

int main()
{
	//AA* parr1 = new AA[2];   // 普通指针数组。
	////AA* parr1 = new AA[2]{ string("西施"), string("冰冰") };
	//parr1[0].m_name = "西施1";
	//cout << "parr1[0].m_name=" << parr1[0].m_name << endl;
	//parr1[1].m_name = "西施2";
	//cout << "parr1[1].m_name=" << parr1[1].m_name << endl;
	//delete [] parr1;

	unique_ptr<AA[]> parr2(new AA[2]);   // unique_ptr数组。
	//unique_ptr<AA[]> parr2(new AA[2]{ string("西施"), string("冰冰") });
	parr2[0].m_name = "西施1";
	cout << "parr2[0].m_name=" << parr2[0].m_name << endl;
	parr2[1].m_name = "西施2";
	cout << "parr2[1].m_name=" << parr2[1].m_name << endl;
}
