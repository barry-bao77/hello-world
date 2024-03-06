
#include <iostream>
using namespace std;
//class A //基类
//{
//public:
//	void eat();
//	virtual~A();
//};
//
//class B : public A   //子类
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
	//声明基类
	class Base
	{
	public:

		Base();
		~Base();

		virtual void function1();
		void function2();
	};

	//声明子类
	class Child : public Base
	{

	public:
		Child();
		~Child();
		//如果派生类里面是像重载虚函数 就加上关键字override 这样编译器可以辅助检查是不是正确重载，如果没加这个关键字 也没什么严重的error 只是少了编译器检查的安全性

		void function1() override;
		void function2() ;
	};

	//声明抽象类
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




