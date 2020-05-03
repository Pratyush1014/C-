#include"iostream"
using namespace std;
class faculty
{
	public:
	char * name ;
	faculty(char * name){cout<<"faculty exists"<<endl;
			this->name=name;}
	~faculty(){cout<<"faculty doesnt exist"<<endl;}
};
faculty a("alpha");
class dept
{
	public:
		faculty *fact ;
		dept(){ fact = & a ; cout<<"dept is created"<<endl;}
		~dept(){cout<<"dept is destroyed"<<endl;}
};
class univ
{
	public:
		dept deptobj;
		univ(){cout<<"univ is created"<<endl;}
		~univ(){cout<<"univ is destroyed"<<endl;}
};
main()
{
	cout << a . name << endl ;
	univ *obj = new univ ;
	cout<<obj->deptobj.fact->name<<endl;
	delete obj;
	cout<<"end of world"<<endl;

}
