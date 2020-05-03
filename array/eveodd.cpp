#include"iostream"
using namespace std;
main()
{
	int a[]={1,2,3,4,5,6,7};
	int len=sizeof(a)/sizeof(int);
	int c,b=0;
	int i;
	for(i=0;i<len;i++)
	{
		if(a[i]<a[i+1])
			a[i]=a[i+1];
	}
	c=a[len-1];
	for(i=0;i<len;i++)
	{
		if(i%2==0)
		{
			if(a[i]<c)
				c=a[i];
		}
		else
		{
			if(a[i]>b)
				b=a[i];
		}
	}
	cout<<c<<endl ;
	cout<<b<<endl ;
}
