#include"iostream"
using namespace std;
class whatsapp
{
	char *name;
	public:
	static char *mssg;
		void setname(char *name)
		{
			this->name=name;
		}
		void setmssg(char *msg)
		{
			char *x=new char[100];
			memset (x,0,sizeof(x));
			this->mssg=msg;
			strcpy(x,this->name);
			strcat(x," : ");
			strcat(x,this->mssg);
			this->mssg=x;
		}
		void getmssg()
		{
			cout<<this->mssg<<endl;
		}
		
};
char * whatsapp :: mssg="NO MSSG";
main()
{
	whatsapp a,b;
	a.setname("alpha");
	b.setname("beta");
	a.setmssg("Hi beta whatsup");
	b.getmssg();
	b.setmssg("Nothing special what abt u");
	a.getmssg();
}
