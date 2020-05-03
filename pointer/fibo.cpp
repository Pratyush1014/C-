#include"iostream"
using namespace std;
main()
{
	int *p = new int ;
	int *q = new int ;
	*p=0;
	*q=1;
	int i,n;
	cout<<"enter the series limit"<<endl ;
	cin>>n;
	int c;
	for(i=0;i<n;i++)
	{
		c= (*p) + (*q);
		*p = *q;
		(*q)++;
		cout<<c<<" ";
	}
	delete p;
	delete q;
}
