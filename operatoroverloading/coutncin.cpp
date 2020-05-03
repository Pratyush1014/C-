#include"iostream"
using namespace std;
class obj
{
	public:
	char *name;
	int val;
	obj (char *n=0,int  v=0)
	{
		this->name=n;
		this->val=v;
	}
};
ostream & operator << (ostream & cout,obj & a)
{
	cout<<a.name<<' '<<a.val<<endl;
}
istream & operator >> (istream & cin,obj & b )
{
	cout<<"enter the infos";
	b.name=new char[20];
	cin>>b.name>>b.val;
}
main()
{
	obj a("alpha",10);
	cout<<a;
	operator<<(cout,a);
	obj b;
	cin>>b;
	operator<<(cout,b);
}
