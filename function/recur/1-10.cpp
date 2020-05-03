#include"iostream"
using namespace std;
main()
{
	static int i=0;
	if(i<10)
	{
		cout<<i<<endl;
		i++;
		main();
	}
}
