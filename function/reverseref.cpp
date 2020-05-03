#include"iostream"
using namespace std;
int reverse(int &);
int reverse(int &p)
{
	int r=0;
	while(p>0)
	{
		r=r*10+p%10;
		p=p/10;
	}
	return r;
}
main()
{
	int n;
	cout<<"enter"<<endl;
	cin>>n;
	int y;
	int &x=y;
	x=reverse(n);
	cout<<y<<endl;
}
