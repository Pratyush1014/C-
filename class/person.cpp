#include"iostream"
using namespace std;
class person 
{
	public:
		char *name;
		int age;
		void get (char *n,int a)
		{
			this->name=n;
			this->age=a;
		}
	friend void display(person *);
};
void display(person *p)
{
	cout<<p->name<<p->age<<endl;
}
main()
{
	int n;
	cout<<"enter the number of entries"<<endl;
	cin>>n;
	person p[n];
	int age;
	char name[20];
	for(int i=0;i<n;i++)
	{
		cout<<"name age"<<endl;
		cin>>name>>age;
		p[i].get(name,age);
		display(p+i);
	}
}
	
