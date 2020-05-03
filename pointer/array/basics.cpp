#include"iostream"
using namespace std;
void func1 (void )
{
	cout<<"func1"<<endl;
}
void func2(void )
{
	cout<<"func2"<<endl;
}
main()
{
	int x;
	x=10;
	int *p=&x;
	int **q=&p;
	cout<<x<<endl;//prints value of x
	cout<<p<<endl;//prints the address of block where x is stored
	cout<<*p<<endl;//value of x
	cout<<q<<endl;//address of adress of x
	cout<<*q<<endl;//adress of x
	cout<<**q<<endl;//value of x
	
	
	
	/*Function calling thru pointer */
	void (*a)() =&func1;
	(*a)();
	func1();
	

	/*Functional array*/
	void(*b[2])()={func1,func2};//no () since we are not calling the function
	func1();
	func2();
	(*b[0])();
	(*b[1])();
}
