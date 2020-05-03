#include"iostream"
using namespace std;
class person
{
	public:
		char * name;
		int age;
		person(char *name="\0",int age=0)
		{
			this->name = name;
			this->age = age;
		}
		void getinfo()
		{
			cout<<this->name<<" "<<this->age<<endl;
		}
		
};
main()
{
	person a;
	person b=person("beta",23);
	person c=person("charlie");
	b.getinfo();
	c.getinfo();
}
