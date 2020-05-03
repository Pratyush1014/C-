#include"iostream"
using namespace std;
class father
{
	public :
		father (){cout<<"i'm the father"<<endl;}
		void home () {cout<<"its father's home"<<endl;}
};
class mother
{
	public :
		mother (){cout<<"i'm the mother"<<endl;}
		void home () {cout<<"its mother's home"<<endl;}
};
class child : public father ,public mother
{
	public :
		child (){cout<<"i'm the child"<<endl;}
		void home () {cout<<"its child's home"<<endl;}
};
main()
{
	child c;
	c.home();//overriding of child's home process
	c.father :: home();//to remove ambiguity
	c.mother :: home();
}
