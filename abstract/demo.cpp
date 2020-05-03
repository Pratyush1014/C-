#include"iostream"
using namespace std;
class parent
{
	public:
	parent (){cout<<"i'm parent ctor"<<endl;}
	virtual~parent (){cout<<"i'm parent dtor"<<endl;}
};
class child : public parent
{
	public:
	child (){cout<<"i'm child ctor"<<endl;}
	~child (){cout<<"i'm child dtor"<<endl;}
};
main()
{
	parent *p = new child;
	delete p;//does early binding if virtual dtor isnt used
}
