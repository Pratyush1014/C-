#include"iostream"
using namespace std;
main()
{
	bool a;
	cout<<"size of boolean data type is "<<sizeof(a)<<endl ;// outpout is 1
	
	a=1;
	cout<<a<<endl ;	//1
	a=-15;
	cout<<a<<endl ;//1
	a=0;
	cout<<a<<endl ;//0
	a=0.0;
	cout<<a<<endl ;//0
	a='\0';
	cout<<a<<endl ;//0
	a="\0";
	cout<<a<<endl ;//1
}
	
