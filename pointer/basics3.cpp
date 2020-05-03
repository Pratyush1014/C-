#include"iostream"
using namespace std;
main()
{
	char *c=(char *)0x00000000;
	int *i=(int *)0x00000000;
	double *d=(double *)0x00000000;
	cout<<(int)c<<endl;
	c++;
	cout<<(int)c<<endl;
	cout<<(int)i<<endl;
	i++;
	cout<<(int)i<<endl;
	cout<<(int)d<<endl;
	d++;
	cout<<(int)d<<endl;
}

