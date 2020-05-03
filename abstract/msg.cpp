#include"iostream"
using namespace std;
class thinking 
{
	public :
		virtual void get()=0;
		virtual void set()=0;
};
class implement : public thinking
{
	public :
		void get(){cout<<"get"<<endl;}
		void set(){cout<<"set"<<endl;}
};
main()
{
	implement obj;
	obj.set();
	obj.get();
}
