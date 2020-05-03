#include"iostream"
using namespace std;
class facebook
{
	public :
		virtual void login()=0;
		void post() {cout<<"your post"<<endl;}
		void likes(){cout<<"your likes"<<endl;}
};
class myfacebook : public facebook
{
	public :
		void login ()
		{cout<<"you aere logged in "<<endl;}
};
main()
{
	myfacebook prog;
	//prog.post();error call login first
	prog.login();
	prog.post();
	prog.likes();
}
