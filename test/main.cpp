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
	cout << "��������ָ�룬ָ��������󣬶�̬����"<< endl;
	Base *A = new Child;
	A->function1(); //��������ķ�������Ϊ�����е��������Ϊ�麯������������������麯�����Ե��õ�������ķ�������̬������
	A->function2(); //��Ȼָ��ָ���������Ķ��󣬵���������ʱ�����Ի��������ģ�����ʵ���ϵ��õĻ��ǻ���ĺ���
	delete A;
	
	cout << "��������ָ�룬ָ���������"<< endl;
	Child *B = new Child;
	B->function1();
	B->function2();
	delete B;

	cout << "��������ָ�룬ָ�������"<< endl;
	Base *C = new Base;
	C->function1();
	C->function2();
	delete C;


	cout << "---------------"<< endl;

	cout << "���麯������" << endl;
	//Baseabstract *baseAbstract = new Baseabstract;   //����ᱨ����Ϊ�����಻�ܱ�ʵ�����������ࣺ���д��麯�������ǳ�����	

	Childabstract *childAbstract = new Childabstract;//��������ָ�룬ʵ��������������������жԻ�����Ĵ��麯��������д�����Կ���ʵ�����������
	                                                 //������ಢû�жԸ��������еĴ��麯��������д����ô���໹�ǳ����࣬���ǲ��ܱ�ʵ����(ע��)
	childAbstract->function1();
	childAbstract->function2();

	Baseabstract *baseAbstract = new Childabstract;  //��������ָ�룬ʵ��������������ַ���Ҳ���У���Ϊ���õķ���һ����������д�˸����еĴ��麯��
	baseAbstract->function1();
	baseAbstract->function2();

	system("pause");
	return 0;
}