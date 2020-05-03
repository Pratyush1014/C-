#include"iostream"
using namespace std;
main()
{
	int * no = new int ; 
	* no  = 5 ; 
	int * fact = new int ; 
	* fact  = 1 ; 
	
	while ( *no > 0 )
	{
		*fact = *fact * *no ; 
		*no -= 1 ; 
	}	
	cout << *fact << endl ;

	delete no ; 
	delete fact ; 
	
}
