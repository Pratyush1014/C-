#include"iostream"
using namespace std;
main()
{
	int *a=new int;
	*a=0;
	int *b=new int;
	*b=1;
	int *c=new int;
	int *i=new int;
	int *n=new int;
	cout<<"enter the series limit"<<endl ;
	cin>>*n;
	for(*i=0;*i<*n;(*i)++)
	{
		*c=*a+*b;
		*a=*b;
		*b=*c;
		printf("%d  ",*c);
	}
	delete a;
	delete b;
	delete c;
	delete i;
	delete n;
}
	
