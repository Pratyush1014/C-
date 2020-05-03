#include"iostream"
using namespace std;
class A
{
	public :
		A(){cout<<"im the parent"<<endl;}
};
class B : public A
{
	public :
		B(){cout<<"im the B child"<<endl;}
};
class C : public A
{
	public :
		C(){cout<<"im the C child"<<endl;}
};
main()
{
	B obj;
	C objj;
}
