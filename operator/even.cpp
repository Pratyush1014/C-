#include"iostream"
using namespace std;

main()
{
	int n;
	cout<<"enter any number"<<endl ;
	cin>>n;
	if (n%2==0)
		cout<<"the number is even"<<endl ;
	else 
		cout<<"the number is odd"<<endl ;
	/* using ternary operators*/
	n%2==0?
		cout<<"the number is even"<<endl //colon mark caption not required inside ternary scope
	:
		cout<<"the number is odd"<<endl;// colon for specifying the end of ternary structure
}
