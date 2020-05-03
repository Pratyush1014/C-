#include"iostream"
using namespace std;
class employee
{
	public :
		char * ename;
		int id;
		int sal;
		static char * cname;
		static int inc;
		void setname(char *);
		void getname();
		void setid(int );
		void getid();
		void setsal(int );
		void getsal();
		void setin(int );
		static void setcompany(char *);
		static void getcompany();
};
//pointer to method
void (employee :: *m1)(char *)= & employee :: setname;
void (employee :: *m2)(int )= & employee :: setid;
//pointer to data member
int employee :: *p1=& employee :: id;
int employee :: *p2=& employee :: sal;
void employee :: setin(int n)
{
	inc=n;
}
void employee :: setname(char *name)
{
	this->ename=name;
}
void employee :: getname()
{
        cout<<this->ename<<endl;
}
void employee :: setid(int id)
{
        this->id=id;
}
void employee :: getid()
{
        cout<<this->id<<endl;
}
void employee :: setsal(int sal)
{
	this->sal=sal;
}
void employee :: getsal()
{
	this->sal=sal;
        cout<<this->sal*inc/100+sal<<endl;
}
void employee :: setcompany(char *name)
{
        cname=name;
}
void employee :: getcompany()
{
        cout<<cname<<endl;
}
char *  employee :: cname="\0";
int employee :: inc = 0 ;
main()
{
	employee a,b,c,d;
	employee *bp=&b;
	employee *bc=&c;
	employee::setcompany("Hotel");
	employee::getcompany();
	a.setname("alpha");
	a.getname();
	a.setsal(15000);
	a.getsal();
	a.setin(15);
	a.getsal();
	bp->setname("Beta");
	bp->getname();
	(bc->*m1)("Charlie");
	bc->getname();
	(c.*m2)(1234);
	bc->getid();
}

