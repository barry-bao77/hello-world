
#include <iostream>
using namespace std;
//class A //����
//{
//public:
//	void eat();
//	virtual~A();
//};
//
//class B : public A   //����
//{
//public:
//	void eat();
//	~B();
//};
//
//class ClxBase
//{
//public:
//	ClxBase() {};
//	/*virtual*/ ~ClxBase() {cout << "Output from the destructor of class ClxBase!" << endl; };
//
//	virtual void DoSomething() { cout << "Do something in class ClxBase!" << endl; };
//};
//
//class ClxDerived : public ClxBase
//{
//public:
//	ClxDerived() {};
//	~ClxDerived() { cout << "Output from the destructor of class ClxDerived!" << endl; }; 
//
//	void DoSomething() { cout << "Do something in class ClxDerived!" << endl; };
//};


namespace virtualFunction
{
	//��������
	class Base
	{
	public:

		Base();
		~Base();

		virtual void function1();
		void function2();
	};

	//��������
	class Child : public Base
	{

	public:
		Child();
		~Child();
		//����������������������麯�� �ͼ��Ϲؼ���override �������������Ը�������ǲ�����ȷ���أ����û������ؼ��� Ҳûʲô���ص�error ֻ�����˱��������İ�ȫ��

		void function1() override;
		void function2() ;
	};

	//����������
	class Baseabstract
	{
	public:
		Baseabstract();
		~Baseabstract();

		virtual void  function1() = 0;
		virtual void  function2();
	};


	class Childabstract : public Baseabstract
	{
	public:
		Childabstract();
		~Childabstract();

		void  function1()  override;
		void  function2()  override;
	};
}




