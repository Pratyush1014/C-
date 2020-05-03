#include"iostream"
using namespace std;
class Father
{
	public :
		Father()
		{
			cout<<"Invokation of Father ctor"<<endl;
		}
	virtual	void fun()//implements late binding
		{
			cout<<"Parent's fun"<<endl;
		}
		~Father()
		{
			cout<<"Invokation father dtor"<<endl;
		}
};
class Child  : public Father
{
	public :
		Child()
		{
			cout<<"Invokation of Child ctor"<<endl;
		}
		void fun()
		{
			cout<<"I'm child's fun() "<<endl;
		}
		~Child()
		{
			cout<<"Invokation of child dtor"<<endl;
		}
};
main()
{
	Father *f = new Child();
	f->fun();
	delete f;
}
