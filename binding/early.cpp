#include"iostream"
using namespace std;
class parent 
{
	public :
	parent()
	{
		cout<<"p ctor invokation"<<endl;
	}
	~parent()
	{
		cout<<"p dtor"<<endl;
	}
		void run()
		{
			cout<<"running"<<endl;
		}
};
class child : public parent
{
	public :
		child()
		{
			cout<<"I'm child ctor"<<endl;
		}
		~child()
		{
			cout<<"c dtor"<<endl;
		}
		void run()
		{
			cout<<"child's run"<<endl;
		}
		void fun ()
		{
			cout<<"I'm having fun"<<endl;
		}
};
main()
{
	parent p = child();//Early binding also called upcasting 
	p.run();
	parent * p1 = new child();
	p1->run();
	delete p1;
	//p->fun();//not a property of parent
}
