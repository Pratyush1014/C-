#include"iostream"
using namespace std;
class A
{
	public :
		int x;
};
class B :virtual public A
{};
class C :virtual public A
{};
class D : public C,public B
{};
main()
{
	D obj ;
	obj.x = 10;
	cout<<obj.x<<endl;
}
