#include"iostream"
using namespace std;
void swap(int *,int *);
void swap(int *p,int *q)
{
	int *c=new int ;
	*c=*p;
	*p=*q;
	*q=*c;
	cout<<*p<<*q<<endl;
}
main()
{
	int a;
	int b;
	cout<<"enter any two numbers"<<endl;
	cin>>a>>b;
	swap(&a,&b);
}

	
