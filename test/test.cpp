#include "test.h"
#include <iostream>
using namespace std;

using namespace virtualFunction;

//void A::eat()
//{
//	cout<<"use A eat"<<endl;
//}
//
//A::~A()
//{
//	cout<<"A Destroy"<<endl;
//}
//
//void B::eat()
//{
//	cout<<"use B eat"<<endl;
//}
//
//B::~B()
//{
//	cout<<"B Destroy"<<endl;
//}
//


/*Base类的方法实现*/
Base::Base()
{
	cout << "establish Base Class" << endl;
}
Base::~Base()
{
	cout << "release Base Class" << endl;
}
void Base::function1()
{
	cout << "This is Base function1" << endl;
}
void Base::function2()
{
	cout << "This is Base function2" << endl;
}


/*Child类的方法实现*/
Child::Child()
{
	cout << "establish Child Class" << endl;
}

Child::~Child()
{
	cout << "Release Child Class" << endl;
}

//继承Base基类重写function1()方法,注：function1()在base基类中是虚函数
void Child::function1()
{
	cout << "This is Child function1" << endl;
}

void Child::function2()
{
	cout << "This is Child function2" << endl;
}




//纯虚函数类
//Baseabstract类的方法实现
Baseabstract::Baseabstract()
{
	cout << "Establish Baseabstract Class" << endl;
}
Baseabstract::~Baseabstract()
{
	cout << "Release Baseabstract Class" << endl;
}

void Baseabstract::function1()
{
	cout << "This is Baseabstract virtual function1" << endl;
}




void Baseabstract::function2()
{
	cout << "This is Baseabstract function2" << endl;
}

//重写Baseabstract functon1()


Childabstract::Childabstract()
{

}
Childabstract::~Childabstract()
{

}


void Childabstract::function1()
{
	cout << "This is Childabstract function1" << endl;
}


void Childabstract::function2()
{
	cout << "This is Childabstract function2" << endl;
}








