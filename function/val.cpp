#include"iostream"
using namespace std;
void bbsr(int );
void bbsr(int n)//formal parameter
{
	cout<<n<<" "<<&n<<endl;
}
main()
{
	int n;
	cout<<"enter any number"<<endl;
	cin>>n;
	cout<<n<<" "<<&n<<endl;
	bbsr(n);//actual parameter
}
