#include"iostream"
using namespace std;
main()
{
	int i;
	int a=300;
	unsigned char *p;
	p=(unsigned char *)&a;
	for (i=0;i<sizeof(a);i++)
	{
		cout<<int(*(p+i))<<endl;
	}
	float b=1.5f;
	unsigned char *q;
	q=(unsigned char *)&b;
	for (i=0;i<sizeof(b);i++)
	{
		cout<<int(*(q+i))<<endl;
	}
}
