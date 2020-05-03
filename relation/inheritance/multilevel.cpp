#include"iostream"
using namespace std;
class A
{
	public :
		A(){cout<<"Im parent of B"<<endl;}
};
class B : public A
{
	public :
		B(){cout<<"Im child of A"<<endl;}
};
class C : public B
{
	public :
		C(){cout<<"Im child of B"<<endl;}
};
main()
{
	C obj;
}
