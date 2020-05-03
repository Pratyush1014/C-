#include"iostream"
using namespace std;
class object
{
	public:
	char * name;
	int value;
	object (char * n=NULL,int v=0)
	{
		this->name = n;
		this->value =v;
	}
	bool operator <(object that)
	{
		return this->value<that.value ? 1 : 0;
	}
};
ostream & operator << (ostream &cout,object &MAX)
{
	cout<<MAX.name<<' '<<MAX.value;
}
main()
{
	object a("alpha",90);
	object b("bravo",80);		
	object c("charlie",60);
	object d("delta",40);
	object e[]={a,b,c,d};
	object MAX = e[0];
	for(int i=1;i<4;i++)
	{
		if(MAX < e[i])
			MAX = e[i];
	}
	cout<<MAX;
}
	
