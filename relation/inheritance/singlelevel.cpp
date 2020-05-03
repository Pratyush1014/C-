#include"iostream"
using namespace std;
class A
{
	public :
		A(){cout<<"im parent"<<endl;}
};
class B: public A
{
	public :
		B(){cout<<"im child"<<endl;}
};
main()
{
	B obj;
}
