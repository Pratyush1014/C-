#include"iostream"
using namespace std;
main()
{
	unsigned char x[]={204,204,76,190};
	float *p=(float *)&x;
	cout<<*p<<endl;
}
