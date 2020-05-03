#include"iostream"
using namespace std;
main()
{
	int * p1 = new int ;
	int * p2 = new int [2];
	int * p3 = new int ;
	int * p4 = new int [3] ;
	int * p5 =new int [5] ;
	int ** a = new int * [5];
	a[0]=p1;
	a[1]=p2;
	a[2]=p3;
	a[3]=p4;
	a[4]=p5;
	a[0][0] = 11 ;
	a[1][0] = 21 ;
	a[1][1] = 22 ;
	a[2][0] = 31 ;
	a[3][0] = 41 ;
	a[3][1] = 42 ;
	a[3][2] = 43 ;
	a[4][0] = 51 ;
	a[4][1] = 52 ;
	a[4][2] = 53 ;
	a[4][3] = 54 ;
	a[4][4] = 55 ;
	int n;
	for (int i=0 ; i<5 ; i++)
	{
		switch(i)
		{
			case 0:
			case 2:
				{
					n=1;
					break ;
				}
			case 1:
				{
					n=2;
					break ;
				}
			case 3:
				{
					n=3;
					break ;
				}
			case 4:
				{
					n=5;
				}
		}	
		for (int j=0 ; j<n ; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	delete p1;
	delete []p2;
	delete []p3;
	delete []p4;
	delete []p5;
	delete []a;
}
