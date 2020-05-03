#include"iostream"
using namespace std ;
inline int & sum (int &x ,int &y)
{
	int o = x + y ;
	int &d = o;
	return d ;
}
main()
{
	int x,y ;
	cin>>x>>y ;
	int &t = x ;
	int &r = y ;
	int f;
	f = sum(t,r);
	cout <<f <<endl;
}
