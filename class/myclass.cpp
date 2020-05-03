#include"iostream"
using namespace std;
class myclass
{
	public:
		char *name;
		int status;
		static int count;
		void enroll(char *name)
		{
			this->name=name;
			this->status=0;
		}
		void in()
		{
			if(this->status==0)
			{
				cout<<this->name<<" is in my class"<<endl;
				count++;
				this->status=1;
			}
			else
			{
				cout<<"invalid in operation"<<endl;
				return;
			}
		}
		void out()
		{
			if(this->status==1)
			{
				cout<<this->name<<" is not in my class"<<endl;
				count--;
				this->status=0;
			}
			else
			{
				cout<<"invalid out operation"<<endl;
			}
		}
	
};
int myclass :: count=0;
main()
{
	myclass a,b,c,d,e;
	a.enroll("alpha");
	b.enroll("beta");	
	d.enroll("delta");
	e.enroll("echo");
	a.in();
	b.in();
	c.in();
	d.in();
	e.out();
	a.out();
	cout<<"presenties "<<myclass :: count<<endl;
}
