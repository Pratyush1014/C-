#include"iostream"
using namespace std;
int l=10;//default value is 0 but not static
static int y=10;//enjoys both global and local scope
void bbsr()
{
	cout<<l<<y<<endl;
}
main()
{
	int n;//by deafult its auto
	cout<<n<<endl;//default value is garbage
	auto int x;//enjoys function scope cant be declared in the prog scope or global scope
	cout<<x<<endl;//default value is garbage
	bbsr();
}
