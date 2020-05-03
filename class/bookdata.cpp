#include"iostream"
using namespace std;
class book
{
	public :
	char *name;
	int edition;
	static char *publication;
	void setname (char *);
	void getname ();
	void setprice(int );
	void getprice(int );
	static void setpub(char *);
	static void getpub();
};
char* book :: publication="\0";
void book :: setpub(char *n)
{
	publication=n;//dont use *publication=*n;,use pointers to refer to address
}
void book :: getpub()
{
	cout<<publication<<endl;
}
void book :: setname(char *name)
{
	this->name=name;
}
void book ::getname()
{
	cout<<this->name<<endl;
}
void (book :: *sn)(char *)=&book :: setname;
void (book :: *gn)()=&book :: getname;
main()
{
	book :: setpub("Enigma");
	book :: getpub();
	book a;
	book *p=&a;
	(p->*sn)("Alpha");
	(p->*gn)();
}
