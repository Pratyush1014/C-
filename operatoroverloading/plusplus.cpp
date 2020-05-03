#include"iostream"
using namespace std;
class obj
{
	public:
	char *name;
	int data;
	obj (char *n,int x)
	{
		this->name = n;
		this->data = x;
	}
	void operator ++ ()
	{
		this->data = this->data + 1;
	}
	void operator ++ (int )
	{
		this->data = this->data + 1;
	}
	void print()
	{
		cout<<this->name<<' '<<this->data;
	}
	obj * operator -> ()
	{
		return this;
	}
};
main()
{
	obj a("alpha",10);
	a++;
	a.print();
	obj b("bravo",20);
	b->print();
}
