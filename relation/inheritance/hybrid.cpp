#include"iostream"
using namespace std;
class A
{
	public :
		A(){cout<<"I'm the primary parent"<<endl;}
};
class B : public A
{
	public :
		B(){cout<<"I'm the child of primary parent"<<endl;}
};
class C
{
	public :
		C(){cout<<"I'm the second gen parent"<<endl;}
};
class D : public B,public C
{
	public :
		D(){cout<<"I'm the child of secgen parent and child of pri parent"<<endl;}
};
main()
{
	D obj;
}
