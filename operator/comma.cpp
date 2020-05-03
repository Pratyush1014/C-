#include"iostream"
using namespace std;
int bbsr()
{
	return 10,12,16;
}
 
main()
{
	int k=bbsr();
	cout<<k<<endl ;///output is going to be 16 since the associativity of comma operator is from left to right so the right most value is assigned at the last
	k=bbsr();	//the function bbsr is going to return 10 first then 12 and then 16 so 16 is assigned to k
	cout<<k<<endl ;
}
