#include "test.h"

//#include <iostream>

//using namespace std;
using namespace virtualFunction;

int main()
{
	/*A*a = new B;
	a->eat();
	delete a;*/
	/*ClxBase *pTest = new ClxDerived;
	pTest->DoSomething();
	delete pTest;*/
	cout << "声明父类指针，指向子类对象，多态体现"<< endl;
	Base *A = new Child;
	A->function1(); //调用子类的方法，因为父类中的这个方法为虚函数，子类重载了这个虚函数所以调用的是子类的方法，多态的体现
	A->function2(); //虽然指针指向的是子类的对象，但是声明的时候是以基类申明的，所以实际上调用的还是基类的函数
	delete A;
	
	cout << "声明子类指针，指向子类对象"<< endl;
	Child *B = new Child;
	B->function1();
	B->function2();
	delete B;

	cout << "声明父类指针，指向父类对象"<< endl;
	Base *C = new Base;
	C->function1();
	C->function2();
	delete C;


	cout << "---------------"<< endl;

	cout << "纯虚函数例子" << endl;
	//Baseabstract *baseAbstract = new Baseabstract;   //编译会报错，因为抽象类不能被实例化，抽象类：含有纯虚函数的类是抽象类	

	Childabstract *childAbstract = new Childabstract;//声明子类指针，实例化子类对象，因其子类有对基类里的纯虚函数进行重写，所以可以实例化子类对象
	                                                 //如果子类并没有对父类里所有的纯虚函数进行重写，那么子类还是抽象类，还是不能被实例化(注意)
	childAbstract->function1();
	childAbstract->function2();

	Baseabstract *baseAbstract = new Childabstract;  //声明基类指针，实例化子类对象，这种方法也可行，因为调用的方法一定是子类重写了父类中的纯虚函数
	baseAbstract->function1();
	baseAbstract->function2();

	system("pause");
	return 0;
}