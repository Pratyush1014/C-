#include"iostream"
using namespace std;
main()
{
	int n,i;
	cout<<"enter the array size"<<endl;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cout<<"enter"<<endl;
		cin>>a[i];
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
