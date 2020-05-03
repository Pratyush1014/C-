#include"iostream"
using namespace std;
class test
{
	public :
		char *name;
		test();
		test(char *);
		~test();
};
test :: test(){cout<<"D ctor"<<endl;}
test :: test(char * name)
{
	this->name=name;
	cout<<this->name<<" allocates memory"<<endl;
}
test :: ~test(){cout<<this->name<<" deallocates memory"<<endl;}
main()
{
	test obj;
	test obj1("a");
	test obj2("b");
	test *p = new test ("c");
	delete p;
	cout<<"end of process"<<endl;
}
