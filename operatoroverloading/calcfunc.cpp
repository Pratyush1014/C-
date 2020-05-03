#include"iostream"
using namespace std;
class INT
{
	public :
	int data ;
	void print();
	INT (int =0);
};
INT :: INT (int x)
{
	this->data = x;
}
void INT :: print()
{
	cout<<this->data<<endl;
}
void (INT :: *p)()= & INT :: print;
INT operator +(INT x,INT y)
{
	INT res;
	res.data=x.data + y.data ;
	return res;
}
INT operator -(INT x,INT y)
{
	INT res;
	res.data = x.data - y.data;
	return res;
}
INT operator *(INT x,INT y)
{
	INT res;
	res.data = x.data * y.data;
	return res;
}
INT operator /(INT x, INT y)
{
	INT res;
	res.data = x.data / y.data ;
	return res;
}
main()
{
	INT x = 100;
	INT y = 10;
	INT *add =new INT( x+y);
	INT *sub =new INT( x-y);
	INT *mult =new INT( x*y);
	INT *div =new INT(x/y);
	(add->*p)();
	(sub->*p)();
	(mult->*p)();
	(div->*p)();
}

