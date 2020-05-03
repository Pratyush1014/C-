#include"iostream"
#include"string.h"
using namespace std;
template <class any1,class any2>
class object
{
	public:
	any1 x;
	any2 y;
	object (any1 x,any2 y)
	{
		this->x=x;
		this->y=y;
		cout<<this->x<<' '<<this->y<<endl;
	}
};
main()
{
	object <int,int>a(1,2);
	object <double,float>b (11.2,3.4f);
	object <string,char>c("india",'a');
}
