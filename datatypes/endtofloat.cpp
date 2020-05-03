#include"iostream"
using namespace std ;
main()
{
	unsigned char x[] = {205,204,246,66};
	float *p = (float *) &x ;
	cout << *p ;
}
