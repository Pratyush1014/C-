#include"iostream"
using namespace std;
class INT 
{
	public:
	int data;
	void print()
	{
		cout<<this->data<<endl;
	}
	INT (int x=0)
	{
		this->data = x;
	}
	INT operator +(/*this->data ,*/ INT y)
	{
		INT res;
		res.data = this->data + y.data;
		return res;
	}
};
void (INT :: *p)()=& INT :: print;
int INT :: *d = & INT :: data;
main()
{
	INT x;
	INT y;
	x.*d=10;
	y.*d=20;
	INT *sum = new INT (x+y);
	(sum->*p)();
} 
