#include"iostream"
using namespace std;
class far;
class cel
{
	public :
	int data;
	cel (){};
	cel (int x)
	{
		this->data = x;
	}
	cel (far );
	operator far();
};
class far
{
	public :
	int data;
	far (){};
	far (int x)
	{
		this->data = x;
	}
	
};
cel :: operator far()
	{
		cout<<"cel to far"<<endl;
		return (data-9)/32;
	}
cel :: cel (far x)
	{
		cout<<"far to cel"<<endl;
		data = x.data/32 + 9;
	}
main()
{
	cel c = cel (100);
	far f;
	f = c;//cel to far
	cout<<f.data<<endl;
	far g = far (200);
	cel d;
	d = g;//far to cel
	cout<<d.data<<endl;
}
