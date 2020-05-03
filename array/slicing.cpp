#include"iostream"
using namespace std;
main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int start,stop,step,i;
	cout<<"enter start stop step resp.c"<<endl ;
	cin>>start>>stop>>step;
	if(step>0)
	{
		for(i=start;i<stop;i=i+step)
		{
			cout<<a[i]<<endl ;
		}
	}
	else
	{
		for(i=start;i>stop;i=i+step)
		{
			cout<<a[i]<<endl ;
		}
	}
}
