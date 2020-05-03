#include"iostream"
using namespace std;
main()
{
	int a[]={1,2,3,4,5};
	int i,t;
	int len=sizeof(a)/sizeof(int);
	if(len%2==0)
	{
		for (i=0;i<len;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	else
	{
		for (i=0;i<len-1;i+=2)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}	
	for (i=0;i<len;i++)
	{
		cout<<a[i]<<endl;
	}
}
	
