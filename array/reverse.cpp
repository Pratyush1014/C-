#include"iostream"
using namespace std;
main()
{	
	int len;
	int a[]={1,2,3,4,5};
	len = sizeof( a ) / sizeof( int ) ;
	//int b[len];		
	/*
	for (i=0;i<len;i++)
		b[i]=a[i];
	for (i=0;i<len;i++)
	{
		a[i]=b[len-i];
		cout<<a[i]<<endl;
	}*/ 

	int i = 0 ; 
	int j = len - 1 ; 
	
	while ( i < j )
	{
		int temp = a [ i ] ; 
		a [ i ] = a [  j ] ; 
		a [ j ] = temp ; 
		i++;
		j--;
	}		
	for(i=0;i<len;i++)
	{
		cout<<a[i]<<endl ;
	}
}
