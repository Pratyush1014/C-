#include"iostream"
using namespace std;
class INT
{
	public:
		int data;
		INT(int x=0)
		{
			this->data = x;
		}
		void print();
};
void INT :: print()
{
	cout<<this->data;
}
void (INT :: *p)() = & INT :: print ;
INT operator +(INT obj1 ,INT obj2)
{
	INT res;
	res.data = obj1.data + obj2.data ;
	return res;
}
main()
{
	INT x = 10;
	INT y = 20;
	INT sum = x+y;
	INT *i=&sum;
	(i->*p)();
}
