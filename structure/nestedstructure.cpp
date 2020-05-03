#include"iostream"
#pragma pack(1)
using namespace std ;
struct university
{
	char * name ;
	university(char * name)
	{
		this->name = name ;
	}
	struct csedept
	{
		csedept()
		{
			cout << "CSE dept is created "<<endl ;
		}
	};
	struct mncdept
	{
		int students ;
		mncdept(int students)
		{
			this->students = students ;
		}
	};
};
main()
{
	university obj = university("IIT");
	cout<<obj.name<<endl;
	university::csedept obj2 ;
	university::mncdept obj3(5) ;
	cout << obj3.students<<endl ;
	
}
