#include"iostream"
using namespace std;
class INT
{
	public :
	int data;
	INT (int x=0)
	{	
		this->data = x;
	}
	INT operator + (INT that)
	{
		cout<<"INT + INT"<<endl;
		INT res;
		res.data = this->data + that.data ;
		return res;
	}
	INT operator + (int x)
	{
		cout<<"INT + int"<<endl;
		INT res;
		res.data = this->data + x;
		return res;
	}
	void print()
	{
		cout<<this->data<<endl;
	}
};
INT operator +(int x ,INT y)
{
	INT res;
	cout<<"int + int"<<endl;
	res.data = x + y.data;
	return res;
}
main()
{
	int a=10;
	int b=20;
	int c=a+b;
	cout<<c<<endl;
	INT d=100;
	INT e=200;
	INT f=d+e;
	f.print();
	INT g=d+a;
	g.print();
	INT h=b+e;
	h.print();
	INT i=d+a+b+e;
	i.print();
}
