#include"iostream"
using namespace std;
class parent
{
	public :
		int a;
};
class child : public parent
{
	public :
		int b;
};
main()
{
	parent *p = new child ;
	child c;
	p=&c;//since you are using pointer you need to pass an address or else it points to default values
	c.a = 10;
	c.b = 20;
	cout<<c.a<<' '<<c.b<<endl;
	cout<<p->a<<endl;
	//cout<<p->b<<endl;
}
