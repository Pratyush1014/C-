#include"iostream"
using namespace std;
main()
{
	int a;
	a=10;
	cout<<a<<" "<<&a<<" "<<*&a<<endl;
	double b;
	char c;
	cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<" "<<endl;
        cout<<sizeof(&a)<<" "<<sizeof(&b)<<" "<<sizeof(&c)<<" "<<endl;
	cout<<sizeof(0x12345678)<<endl;
	
}
