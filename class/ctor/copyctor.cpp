#include"iostream"
using namespace std ;
class test
{
	public :
		char * name ;
		int roll ;
		test(char * name = '\0',int roll = 0){cout<<"Object has been created"<<endl;
			this->name = name ; this->roll = roll ;}
		test(const test &);
		~test(){cout<<"Object has been destroyed"<<endl;}
};
test :: test (const test & object )
{
	this->name = object.name ;
	this->roll = object.roll ;
}
main()
{
	test obj1 ;
	obj1 = test("alpha",1) ;
	test obj2 ;
	obj2 = test(obj1);
	cout<<obj2.name<<endl<<obj2.roll<<endl;
}
