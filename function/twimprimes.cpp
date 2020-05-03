#include"iostream"
using namespace std ;
int input ()
{
	cout << "Enter any number : " ;
	int x ;
	cin >> x ;
	return x ;
}
int & prime (int x = input ())
{
	int count=0 ;
	for (int i = 1 ; i <= x ;i++)
	{
		if(x % i == 0)
			count ++ ;
	}
	int p = 1 ;
	int n = 0 ;
	int &t = p ;
	int &f = n ;
	if (count == 2)
		return t ;
	else 
		return f ;
}
main()
{
	int y ;
	y = prime ();
	if (y == 1 )
		cout <<"Prime  "<<endl ;
	else 
		cout <<"Composite"<<endl ;
}
