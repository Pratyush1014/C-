#include"iostream"
using namespace std ;
main()
{
	float f ;
	//cout <<"Enter a float data : "<<endl ;
	//cin >> f ;
	f = 123.4f ;
	unsigned char * p = (unsigned char *)&f ;//type cast 
	cout <<(int)p[0]<<' ' <<(int)p[1]<<' ' <<(int)p[2]<<' ' <<(int)p[3]<<endl ;
}
