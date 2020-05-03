#include"iostream"
using namespace std ;
struct Integer 
{
	int data ;
	Integer(){}
	operator int()  ;
};
Integer :: operator int () 
{
	return data ;
}
main()
{
	Integer i ;
	i.data = 23 ;
	int a ;
	a = int (i);
	cout<<a<<endl;
}
