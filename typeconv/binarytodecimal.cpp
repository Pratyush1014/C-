#include"iostream"
#include"math.h"
using namespace std;
class decimal ;
class binary ;
class binary
{
	public:
	int data;
	binary();
	binary(int );
	binary(decimal );
	operator decimal();
};
class decimal
{
	public:
	int data;
	decimal();
	decimal(int );
};
binary :: binary (){}
binary :: binary (int x){this->data = x;}
binary :: binary (decimal x )
{
	int sum=0;
	int y=0;
	while(x.data>0)
	{
		int i = x.data%2;
		sum =sum + int(i*pow(10,y));
		y++;
		x.data=x.data/2;
	}
	this->data = sum;
}
decimal :: decimal (){}
decimal :: decimal (int x ){this->data = x;}
binary :: operator decimal()
{
	decimal sum=0;
	int i=0;
	while(this->data>0)
	{
		sum.data = sum.data + int((this->data%10)*pow(2,i));
		i++;	
		this->data = this->data/10;
	}
	return sum;
}
main()
{
	binary b;
	b=1010;//int to binary handled by ctor
	decimal d;
	d=b;//binary to decimal by ctor or operator type
	cout<<d.data<<endl;
	decimal e=190;
	binary f;
	f=e;//binary to decimal by ctor or operator type
	cout<<f.data<<endl;
}
