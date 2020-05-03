#include"iostream"
using namespace std;
class INT
{
	public:
		int data;
	INT(int x=0)
	{
		this->data=x;
	}
	INT operator *(INT);	
	void print()
	{
		cout<<this->data<<endl;
	}
};
void (INT :: *w)() = & INT :: print;
INT INT :: operator *(INT that)
{
	INT res;
	res.data = this->data * that.data;
	return res;
}
int INT  ::  *d=& INT :: data;
main()
{
	INT a,b;
	INT *p;
	p=&a;
	(p->*d)=10;
	b=30;
	INT c=a*b;
	INT *cp;
	cp = &c;
	(cp->*w)();
	
}
