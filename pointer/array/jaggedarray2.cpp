#include"iostream"
using namespace std ;
main()
{
	int *p = new int [3] ;
	int *q = new int [3] ;
	int *r = new int [3] ;
	int **s = new int *[3] ;
	s[0] = p ;
	s[1] = q ;
	s[2] = r ;
	for (int i = 0 ; i<3 ; i++)
	{
		for (int j =0 ;j<3 ;j++)
		{
			s[i][j] = i ;
			cout<<s[i][j]<<' ';
		}
		cout <<endl ;
	}
	delete [] p ;
	delete [] q ;
	delete [] r ;
	delete [] s ;
}
