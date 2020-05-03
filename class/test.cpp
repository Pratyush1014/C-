#include"iostream"
using namespace std;
class test
{
	public :
		void method(){cout<<"method"<<endl;}
};
void ( test :: *m) () = & test :: method;
main()
{
	test c;
	test *p=&c;
	c.method();
	p->method();
	(p->*m)();
	(c.*m)();
}
