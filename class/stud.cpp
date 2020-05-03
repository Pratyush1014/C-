#include"iostream"
using namespace std;
class student
{
	public:	
	int roll;
	int age;
	char *name;

		void set (int r,int a,char *n)	
		{
			this->roll=r;
			this->age=a;
			this->name=n;
		}
		void get()
		{
			cout<<this->roll<<' '<<this->age<<' '<<this->name<<endl;
		}
};
main()
{
	int n;
	cout<<"enter the number of inputs"<<endl;
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++)
	{
		s[i].name=new char[20];
		cout<<"enter roll age and name"<<endl;
		cin>>s[i].roll>>s[i].age>>s[i].name;
		s[i].set(s[i].roll,s[i].age,s[i].name);
	}
	 for(int i=0;i<n;i++)
        {
                s[i].get();
        }

}
