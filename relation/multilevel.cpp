#include"iostream"
using namespace std;
class person
{
	public :
		char *name;
		int age;
		person(){name = "NoName" ; age = 0;}
		person(char *n,int a){this->name =n;this->age= a;}
};
class intern : public person
{
	public :
		int id;
		intern() : person(){id = 0;}
		intern(char *n,int a,int i) : person(n,a)
		{
			id = i;
		}
};
class employee : public intern
{
	public :
		float sal;
		employee() : intern (){sal=0;}
		employee(char *n,int a,int i,float s) : intern(n,a,i)
		{
			this->sal = s;
		}
};
main()
{
	employee obj;
	obj = employee("alpha",43,65785,25000);
	cout<<obj.name<<endl;
	cout<<obj.age<<endl;
	cout<<obj.id<<endl;
	cout<<obj.sal<<endl;
}
