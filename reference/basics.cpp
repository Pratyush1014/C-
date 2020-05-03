#include"iostream"
using namespace std;
void fun()
{
	printf("hello");
}
main()
{
	int x = 10;
	int &r = x;
	cout<<r<<endl;
	int a[5]={1,2,3,4,5};
	int (*p)[5] =&a;
	cout<<(*p)[0]<<endl;;
	/*Generally the syntax for assigning pinters to arrays is thru the type casting syntax but if you want to avoid typecasting then you have to
 * 	dig into the concept of pointers to arrays (not array of pointers) */
	void (&y)()=fun;
	y();
	int b[5]={1,2,3,4,5};
	int * const &c=b;
	cout<<&c<<endl;
	cout<<c [ 0 ]<<endl;
	cout<<c [ 1 ]<<endl;
	cout<<c [ 2 ]<<endl;
	cout<<c [ 3 ]<<endl;
	cout<<c [ 4 ]<<endl;
	

	
}
