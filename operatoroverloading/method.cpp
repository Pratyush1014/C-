#include"iostream"
using namespace std;
class INT
{	
	public:
	int data;
	void print();
	INT (int =0);
	INT operator + (/*this->x ,*/INT y)
	{
		INT res;
		res.data = this->data + y.data;
		return res;
	}
};
void INT:: print()
{
	cout<<this->data;
}
INT :: INT (int data)
{
	this->data = data;
}
main()
{
	INT x=10;
	INT y=10;
	INT *sum=new INT (x+y);
	(sum->print)();
}
