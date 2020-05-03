#include"iostream"
using namespace std;
class parent
{
	public :
		void m1(){cout<<"im p m1"<<endl;}
		virtual void m2(){cout<<"im p m2"<<endl;}
};
class child : public parent
{
	public :
		void m1(){cout<<"im c m1"<<endl;}
		void m2(){cout<<"im c m2"<<endl;}
};
main()
{
	child obj;
	obj.m1();//overriding of m1
	obj.m2();
	parent *p = new child;
	p=&obj;
	p->m1();//early binding or compiletime binding,parent method is called
	p->m2();//late binding or runtime binding
}
