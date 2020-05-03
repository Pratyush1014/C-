#include"iostream"
using namespace std;
main()
{
	static int a=0,b=1,c;
	if(c<100)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
		main();
	}
}
	

