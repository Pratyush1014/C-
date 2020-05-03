#include"iostream"
using namespace std;
class array
{
	public:
		char *name;
		int value;
		array(char *name = NULL,int x=0)
		{
			this->name = name;
			this->value= x;
		}
		void operator [] (int x)
		{
			if(x==0)
			{
				cout<<this->name;				
			}
			else
			{
				cout<<this->value;
			}
		}
		void operator () (int x)
		{
			if(x==0)
			{
				cout<<this->name;				
			}
			else
			{
				cout<<this->value;
			}
		}
		void print()
		{
			cout<<this->name<<' '<<this->value;
		}
		array * operator -> ()
		{
			return this;
		}
};
main()
{
	array a("alpha ",10);
	a[0];
	a->print();
	a[1];
	a->print();
}
