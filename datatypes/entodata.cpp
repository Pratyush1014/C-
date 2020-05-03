#include"iostream"
using namespace std;
main()
{
	unsigned char x[]={212,254,255,255};
	int *p;
	p=(int *)&x;
	cout<<*p;
}
