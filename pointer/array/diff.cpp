#include"iostream"
using namespace std;
main()
{
	int a[5];
	int *p = (int *)malloc(20);
	cout<<sizeof( a )<<endl ;
	cout<<sizeof( p )<<endl ;
	int i;
	for (i=0 ; i<5 ; i++)
	{
		cout<<a[i]<<endl ;
	}
	for (i=0 ; i<5 ; i++)
	{
		cout<<*(p+i)<<endl ;
	}
	int b[5]={1,2,3,4,5};
	int * const q =(int *) &b ;
	for (i=0 ; i<5 ; i++)
        {
		//q++;//error
		cout<<q[i]<<endl;
        }

}
