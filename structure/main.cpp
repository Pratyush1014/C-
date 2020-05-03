
#include "iostream"
using namespace std ; 

struct person 
{
	public : 
		string name  ;
		int age ; 
};

void input ( person & obj , char * const n , int a )
{
	obj . name = n ; obj . age = a ; 
}
void print ( person & obj ) { cout << obj . name << ' '  << obj . age << endl ; }
main ()  
{
	person a [ 5 ] ; 
	
	for ( int i = 0 ; i < 5 ; i ++)
	{		
		char name [ 20 ]; int age ;	
		cout << "Enter name and age : " ;
		cin >> name >> age ; 
		input ( a [ i ], name , age );
		print ( a [ i ]) ;
	}
	for ( int i = 0 ; i < 5 ; i ++)
	{
		print ( a [ i ]) ;
	}
}
