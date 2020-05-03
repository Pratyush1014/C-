#include"iostream"
using namespace std;
class parent
{
	public :
		char *name;
		parent(){}//when child is called at that time parent is also called and its ctor is mandatory
		parent(char *n)
		{
			this->name=n;
		}
};
class child : public parent
{
	public :
		int id;
		child(){}
		child (char *n,int i):parent(n)
		{
			this->id = i;
		}
};
ostream& operator << (ostream &cout,child &c)
{
	cout<<c.name<<' '<<c.id<<endl;
}
main()
{
	child c;
	c = child ("alpha",3456);
	cout<<c<<endl;
}
