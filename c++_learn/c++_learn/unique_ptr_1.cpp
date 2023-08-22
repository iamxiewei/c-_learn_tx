//#include<iostream>
//
//using namespace std;
//
//
//class AA
//{
//public:
//	string m_name;
//	AA() { cout << m_name << "调用构造函数AA()。\n"; }
//	AA(const string& name) : m_name(name) { cout << "调用构造函数AA(" << m_name << ")。\n"; }
//	~AA() { cout << m_name << "调用了析构函数~AA(" << m_name << ")。\n"; }
//};
//
//unique_ptr<AA> func()
//{
//	unique_ptr<AA> pp(new AA("西施3"));
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
//	//方法一
//	//unique_ptr<AA> p0(new AA("西施"));     // 分配内存并初始化。
//
//	//方法二
//	//unique_ptr<AA> p0 = make_unique<AA>("西施");   // C++14标准。
//	//unique_ptr<int> pp1 = make_unique<int>();         // 数据类型为int。
//	//unique_ptr<AA> pp2 = make_unique<AA>();       // 数据类型为AA，默认构造函数。
//	//unique_ptr<AA> pp3 = make_unique<AA>("西施");  // 数据类型为AA，一个参数的构造函数。
//	////unique_ptr<AA> pp4 = make_unique<AA>("西施", 8); // 数据类型为AA，两个参数的构造函数。
//
//	//unique_ptr<AA> pu1(new AA("西施1"));
//
//	//unique_ptr<AA> pu2;
//	//
//	//pu2 = unique_ptr<AA>(new AA("西施2"));
//	//cout << "调用func()之前\n";
//	//pu2 = func();
//	//cout << "调用func()之后" << endl;
//
//	//unique_ptr<AA> pu(new AA("西施"));
//
//	//cout << "赋值前.\n";
//	//if (pu != nullptr)
//	//{
//	//	cout << "pu不是空的" << endl;
//	//}
//	//pu = nullptr;
//	//cout << "赋值后" << endl;
//	//if (pu == nullptr)
//	//{
//	//	cout << "pu是空的" << endl;
//	//}
//
//	unique_ptr<AA> pu(new AA("西施"));
//
//	cout << "开始调用函数\n";
//
//	func4(move(pu));
//	cout << "调用函数完成\n";
//	if (pu == nullptr)
//	{
//		cout << "pu非空";
//	}
//	return 0;
//}